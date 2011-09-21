/* valaccodedeclarationspace.c generated by valac, the Vala compiler
 * generated from valaccodedeclarationspace.vala, do not modify */

/* valaccodedeclarationspace.vala
 *
 * Copyright (C) 2009  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */

#include <glib.h>
#include <glib-object.h>
#include <valaccode.h>
#include <valagee.h>
#include <stdlib.h>
#include <string.h>
#include <vala.h>
#include <gobject/gvaluecollector.h>


#define VALA_TYPE_CCODE_DECLARATION_SPACE (vala_ccode_declaration_space_get_type ())
#define VALA_CCODE_DECLARATION_SPACE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_DECLARATION_SPACE, ValaCCodeDeclarationSpace))
#define VALA_CCODE_DECLARATION_SPACE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_DECLARATION_SPACE, ValaCCodeDeclarationSpaceClass))
#define VALA_IS_CCODE_DECLARATION_SPACE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_DECLARATION_SPACE))
#define VALA_IS_CCODE_DECLARATION_SPACE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_DECLARATION_SPACE))
#define VALA_CCODE_DECLARATION_SPACE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_DECLARATION_SPACE, ValaCCodeDeclarationSpaceClass))

typedef struct _ValaCCodeDeclarationSpace ValaCCodeDeclarationSpace;
typedef struct _ValaCCodeDeclarationSpaceClass ValaCCodeDeclarationSpaceClass;
typedef struct _ValaCCodeDeclarationSpacePrivate ValaCCodeDeclarationSpacePrivate;
#define _vala_collection_object_unref0(var) ((var == NULL) ? NULL : (var = (vala_collection_object_unref (var), NULL)))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))
#define _vala_code_context_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_context_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _ValaParamSpecCCodeDeclarationSpace ValaParamSpecCCodeDeclarationSpace;

struct _ValaCCodeDeclarationSpace {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCCodeDeclarationSpacePrivate * priv;
	ValaCCodeFragment* include_directives;
	ValaCCodeFragment* type_declaration;
	ValaCCodeFragment* type_definition;
	ValaCCodeFragment* type_member_declaration;
	ValaCCodeFragment* constant_declaration;
};

struct _ValaCCodeDeclarationSpaceClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCCodeDeclarationSpace *self);
};

struct _ValaCCodeDeclarationSpacePrivate {
	gboolean _is_header;
	ValaSet* declarations;
	ValaSet* includes;
};

struct _ValaParamSpecCCodeDeclarationSpace {
	GParamSpec parent_instance;
};


static gpointer vala_ccode_declaration_space_parent_class = NULL;

gpointer vala_ccode_declaration_space_ref (gpointer instance);
void vala_ccode_declaration_space_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_declaration_space (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_declaration_space (GValue* value, gpointer v_object);
void vala_value_take_ccode_declaration_space (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_declaration_space (const GValue* value);
GType vala_ccode_declaration_space_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_DECLARATION_SPACE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_DECLARATION_SPACE, ValaCCodeDeclarationSpacePrivate))
enum  {
	VALA_CCODE_DECLARATION_SPACE_DUMMY_PROPERTY
};
gboolean vala_ccode_declaration_space_add_declaration (ValaCCodeDeclarationSpace* self, const char* name);
gboolean vala_ccode_declaration_space_add_symbol_declaration (ValaCCodeDeclarationSpace* self, ValaSymbol* sym, const char* name);
gboolean vala_ccode_declaration_space_get_is_header (ValaCCodeDeclarationSpace* self);
void vala_ccode_declaration_space_add_include (ValaCCodeDeclarationSpace* self, const char* filename, gboolean local);
void vala_ccode_declaration_space_add_type_declaration (ValaCCodeDeclarationSpace* self, ValaCCodeNode* node);
void vala_ccode_declaration_space_add_type_definition (ValaCCodeDeclarationSpace* self, ValaCCodeNode* node);
void vala_ccode_declaration_space_add_type_member_declaration (ValaCCodeDeclarationSpace* self, ValaCCodeNode* node);
void vala_ccode_declaration_space_add_constant_declaration (ValaCCodeDeclarationSpace* self, ValaCCodeNode* node);
ValaCCodeDeclarationSpace* vala_ccode_declaration_space_new (void);
ValaCCodeDeclarationSpace* vala_ccode_declaration_space_construct (GType object_type);
void vala_ccode_declaration_space_set_is_header (ValaCCodeDeclarationSpace* self, gboolean value);
static void vala_ccode_declaration_space_finalize (ValaCCodeDeclarationSpace* obj);



gboolean vala_ccode_declaration_space_add_declaration (ValaCCodeDeclarationSpace* self, const char* name) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (name != NULL, FALSE);
	if (vala_collection_contains ((ValaCollection*) self->priv->declarations, name)) {
		result = TRUE;
		return result;
	}
	vala_collection_add ((ValaCollection*) self->priv->declarations, name);
	result = FALSE;
	return result;
}


gboolean vala_ccode_declaration_space_add_symbol_declaration (ValaCCodeDeclarationSpace* self, ValaSymbol* sym, const char* name) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (sym != NULL, FALSE);
	g_return_val_if_fail (name != NULL, FALSE);
	if (vala_ccode_declaration_space_add_declaration (self, name)) {
		result = TRUE;
		return result;
	}
	if (vala_symbol_get_external_package (sym)) {
		_tmp0_ = TRUE;
	} else {
		gboolean _tmp1_ = FALSE;
		gboolean _tmp2_ = FALSE;
		if (!self->priv->_is_header) {
			ValaCodeContext* _tmp3_;
			_tmp2_ = vala_code_context_get_use_header (_tmp3_ = vala_code_context_get ());
			_vala_code_context_unref0 (_tmp3_);
		} else {
			_tmp2_ = FALSE;
		}
		if (_tmp2_) {
			_tmp1_ = !vala_symbol_is_internal_symbol (sym);
		} else {
			_tmp1_ = FALSE;
		}
		_tmp0_ = _tmp1_;
	}
	if (_tmp0_) {
		{
			ValaList* _tmp4_;
			ValaIterator* _tmp5_;
			ValaIterator* _header_filename_it;
			_header_filename_it = (_tmp5_ = vala_iterable_iterator ((ValaIterable*) (_tmp4_ = vala_symbol_get_cheader_filenames (sym))), _vala_collection_object_unref0 (_tmp4_), _tmp5_);
			while (TRUE) {
				char* header_filename;
				if (!vala_iterator_next (_header_filename_it)) {
					break;
				}
				header_filename = (char*) vala_iterator_get (_header_filename_it);
				vala_ccode_declaration_space_add_include (self, header_filename, !vala_symbol_get_external_package (sym));
				_g_free0 (header_filename);
			}
			_vala_collection_object_unref0 (_header_filename_it);
		}
		result = TRUE;
		return result;
	} else {
		result = FALSE;
		return result;
	}
}


void vala_ccode_declaration_space_add_include (ValaCCodeDeclarationSpace* self, const char* filename, gboolean local) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (filename != NULL);
	if (!vala_collection_contains ((ValaCollection*) self->priv->includes, filename)) {
		ValaCCodeIncludeDirective* _tmp0_;
		vala_ccode_fragment_append (self->include_directives, (ValaCCodeNode*) (_tmp0_ = vala_ccode_include_directive_new (filename, local)));
		_vala_ccode_node_unref0 (_tmp0_);
		vala_collection_add ((ValaCollection*) self->priv->includes, filename);
	}
}


void vala_ccode_declaration_space_add_type_declaration (ValaCCodeDeclarationSpace* self, ValaCCodeNode* node) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (node != NULL);
	vala_ccode_fragment_append (self->type_declaration, node);
}


void vala_ccode_declaration_space_add_type_definition (ValaCCodeDeclarationSpace* self, ValaCCodeNode* node) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (node != NULL);
	vala_ccode_fragment_append (self->type_definition, node);
}


void vala_ccode_declaration_space_add_type_member_declaration (ValaCCodeDeclarationSpace* self, ValaCCodeNode* node) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (node != NULL);
	vala_ccode_fragment_append (self->type_member_declaration, node);
}


void vala_ccode_declaration_space_add_constant_declaration (ValaCCodeDeclarationSpace* self, ValaCCodeNode* node) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (node != NULL);
	vala_ccode_fragment_append (self->constant_declaration, node);
}


ValaCCodeDeclarationSpace* vala_ccode_declaration_space_construct (GType object_type) {
	ValaCCodeDeclarationSpace* self = (ValaCCodeDeclarationSpace*) g_type_create_instance (object_type);
	return self;
}


ValaCCodeDeclarationSpace* vala_ccode_declaration_space_new (void) {
	return vala_ccode_declaration_space_construct (VALA_TYPE_CCODE_DECLARATION_SPACE);
}


gboolean vala_ccode_declaration_space_get_is_header (ValaCCodeDeclarationSpace* self) {
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_header;
	return result;
}


void vala_ccode_declaration_space_set_is_header (ValaCCodeDeclarationSpace* self, gboolean value) {
	g_return_if_fail (self != NULL);
	self->priv->_is_header = value;
}


static void vala_value_ccode_declaration_space_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void vala_value_ccode_declaration_space_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		vala_ccode_declaration_space_unref (value->data[0].v_pointer);
	}
}


static void vala_value_ccode_declaration_space_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = vala_ccode_declaration_space_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer vala_value_ccode_declaration_space_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* vala_value_ccode_declaration_space_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		ValaCCodeDeclarationSpace* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = vala_ccode_declaration_space_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* vala_value_ccode_declaration_space_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	ValaCCodeDeclarationSpace** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = vala_ccode_declaration_space_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* vala_param_spec_ccode_declaration_space (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ValaParamSpecCCodeDeclarationSpace* spec;
	g_return_val_if_fail (g_type_is_a (object_type, VALA_TYPE_CCODE_DECLARATION_SPACE), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer vala_value_get_ccode_declaration_space (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_CCODE_DECLARATION_SPACE), NULL);
	return value->data[0].v_pointer;
}


void vala_value_set_ccode_declaration_space (GValue* value, gpointer v_object) {
	ValaCCodeDeclarationSpace* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_CCODE_DECLARATION_SPACE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_CCODE_DECLARATION_SPACE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		vala_ccode_declaration_space_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_ccode_declaration_space_unref (old);
	}
}


void vala_value_take_ccode_declaration_space (GValue* value, gpointer v_object) {
	ValaCCodeDeclarationSpace* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_CCODE_DECLARATION_SPACE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_CCODE_DECLARATION_SPACE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_ccode_declaration_space_unref (old);
	}
}


static void vala_ccode_declaration_space_class_init (ValaCCodeDeclarationSpaceClass * klass) {
	vala_ccode_declaration_space_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_DECLARATION_SPACE_CLASS (klass)->finalize = vala_ccode_declaration_space_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeDeclarationSpacePrivate));
}


static void vala_ccode_declaration_space_instance_init (ValaCCodeDeclarationSpace * self) {
	self->priv = VALA_CCODE_DECLARATION_SPACE_GET_PRIVATE (self);
	self->priv->declarations = (ValaSet*) vala_hash_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, g_str_hash, g_str_equal);
	self->priv->includes = (ValaSet*) vala_hash_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, g_str_hash, g_str_equal);
	self->include_directives = vala_ccode_fragment_new ();
	self->type_declaration = vala_ccode_fragment_new ();
	self->type_definition = vala_ccode_fragment_new ();
	self->type_member_declaration = vala_ccode_fragment_new ();
	self->constant_declaration = vala_ccode_fragment_new ();
	self->ref_count = 1;
}


static void vala_ccode_declaration_space_finalize (ValaCCodeDeclarationSpace* obj) {
	ValaCCodeDeclarationSpace * self;
	self = VALA_CCODE_DECLARATION_SPACE (obj);
	_vala_collection_object_unref0 (self->priv->declarations);
	_vala_collection_object_unref0 (self->priv->includes);
	_vala_ccode_node_unref0 (self->include_directives);
	_vala_ccode_node_unref0 (self->type_declaration);
	_vala_ccode_node_unref0 (self->type_definition);
	_vala_ccode_node_unref0 (self->type_member_declaration);
	_vala_ccode_node_unref0 (self->constant_declaration);
}


GType vala_ccode_declaration_space_get_type (void) {
	static volatile gsize vala_ccode_declaration_space_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_declaration_space_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { vala_value_ccode_declaration_space_init, vala_value_ccode_declaration_space_free_value, vala_value_ccode_declaration_space_copy_value, vala_value_ccode_declaration_space_peek_pointer, "p", vala_value_ccode_declaration_space_collect_value, "p", vala_value_ccode_declaration_space_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeDeclarationSpaceClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_declaration_space_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeDeclarationSpace), 0, (GInstanceInitFunc) vala_ccode_declaration_space_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType vala_ccode_declaration_space_type_id;
		vala_ccode_declaration_space_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ValaCCodeDeclarationSpace", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&vala_ccode_declaration_space_type_id__volatile, vala_ccode_declaration_space_type_id);
	}
	return vala_ccode_declaration_space_type_id__volatile;
}


gpointer vala_ccode_declaration_space_ref (gpointer instance) {
	ValaCCodeDeclarationSpace* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void vala_ccode_declaration_space_unref (gpointer instance) {
	ValaCCodeDeclarationSpace* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		VALA_CCODE_DECLARATION_SPACE_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}




