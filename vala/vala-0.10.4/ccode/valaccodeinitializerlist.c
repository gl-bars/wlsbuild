/* valaccodeinitializerlist.c generated by valac, the Vala compiler
 * generated from valaccodeinitializerlist.vala, do not modify */

/* valaccodeinitializerlist.vala
 *
 * Copyright (C) 2006-2007  Jürg Billeter
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
#include <valagee.h>
#include <stdlib.h>
#include <string.h>


#define VALA_TYPE_CCODE_NODE (vala_ccode_node_get_type ())
#define VALA_CCODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_NODE, ValaCCodeNode))
#define VALA_CCODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_NODE, ValaCCodeNodeClass))
#define VALA_IS_CCODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_NODE))
#define VALA_IS_CCODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_NODE))
#define VALA_CCODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_NODE, ValaCCodeNodeClass))

typedef struct _ValaCCodeNode ValaCCodeNode;
typedef struct _ValaCCodeNodeClass ValaCCodeNodeClass;
typedef struct _ValaCCodeNodePrivate ValaCCodeNodePrivate;

#define VALA_TYPE_CCODE_WRITER (vala_ccode_writer_get_type ())
#define VALA_CCODE_WRITER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_WRITER, ValaCCodeWriter))
#define VALA_CCODE_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_WRITER, ValaCCodeWriterClass))
#define VALA_IS_CCODE_WRITER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_WRITER))
#define VALA_IS_CCODE_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_WRITER))
#define VALA_CCODE_WRITER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_WRITER, ValaCCodeWriterClass))

typedef struct _ValaCCodeWriter ValaCCodeWriter;
typedef struct _ValaCCodeWriterClass ValaCCodeWriterClass;

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;
typedef struct _ValaCCodeExpressionPrivate ValaCCodeExpressionPrivate;

#define VALA_TYPE_CCODE_INITIALIZER_LIST (vala_ccode_initializer_list_get_type ())
#define VALA_CCODE_INITIALIZER_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_INITIALIZER_LIST, ValaCCodeInitializerList))
#define VALA_CCODE_INITIALIZER_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_INITIALIZER_LIST, ValaCCodeInitializerListClass))
#define VALA_IS_CCODE_INITIALIZER_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_INITIALIZER_LIST))
#define VALA_IS_CCODE_INITIALIZER_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_INITIALIZER_LIST))
#define VALA_CCODE_INITIALIZER_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_INITIALIZER_LIST, ValaCCodeInitializerListClass))

typedef struct _ValaCCodeInitializerList ValaCCodeInitializerList;
typedef struct _ValaCCodeInitializerListClass ValaCCodeInitializerListClass;
typedef struct _ValaCCodeInitializerListPrivate ValaCCodeInitializerListPrivate;
#define _vala_collection_object_unref0(var) ((var == NULL) ? NULL : (var = (vala_collection_object_unref (var), NULL)))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

struct _ValaCCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCCodeNodePrivate * priv;
};

struct _ValaCCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCCodeNode *self);
	void (*write) (ValaCCodeNode* self, ValaCCodeWriter* writer);
	void (*write_declaration) (ValaCCodeNode* self, ValaCCodeWriter* writer);
	void (*write_combined) (ValaCCodeNode* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeExpression {
	ValaCCodeNode parent_instance;
	ValaCCodeExpressionPrivate * priv;
};

struct _ValaCCodeExpressionClass {
	ValaCCodeNodeClass parent_class;
	void (*write_inner) (ValaCCodeExpression* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeInitializerList {
	ValaCCodeExpression parent_instance;
	ValaCCodeInitializerListPrivate * priv;
};

struct _ValaCCodeInitializerListClass {
	ValaCCodeExpressionClass parent_class;
};

struct _ValaCCodeInitializerListPrivate {
	ValaList* initializers;
};


static gpointer vala_ccode_initializer_list_parent_class = NULL;

gpointer vala_ccode_node_ref (gpointer instance);
void vala_ccode_node_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_node (GValue* value, gpointer v_object);
void vala_value_take_ccode_node (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_node (const GValue* value);
GType vala_ccode_node_get_type (void) G_GNUC_CONST;
gpointer vala_ccode_writer_ref (gpointer instance);
void vala_ccode_writer_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_writer (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_writer (GValue* value, gpointer v_object);
void vala_value_take_ccode_writer (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_writer (const GValue* value);
GType vala_ccode_writer_get_type (void) G_GNUC_CONST;
GType vala_ccode_expression_get_type (void) G_GNUC_CONST;
GType vala_ccode_initializer_list_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_INITIALIZER_LIST_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_INITIALIZER_LIST, ValaCCodeInitializerListPrivate))
enum  {
	VALA_CCODE_INITIALIZER_LIST_DUMMY_PROPERTY
};
void vala_ccode_initializer_list_append (ValaCCodeInitializerList* self, ValaCCodeExpression* expr);
static void vala_ccode_initializer_list_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const char* s);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
ValaCCodeInitializerList* vala_ccode_initializer_list_new (void);
ValaCCodeInitializerList* vala_ccode_initializer_list_construct (GType object_type);
ValaCCodeExpression* vala_ccode_expression_construct (GType object_type);
static void vala_ccode_initializer_list_finalize (ValaCCodeNode* obj);



/**
 * Appends the specified expression to this initializer list.
 *
 * @param expr an expression
 */
void vala_ccode_initializer_list_append (ValaCCodeInitializerList* self, ValaCCodeExpression* expr) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (expr != NULL);
	vala_collection_add ((ValaCollection*) self->priv->initializers, expr);
}


static void vala_ccode_initializer_list_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeInitializerList * self;
	gboolean first;
	self = (ValaCCodeInitializerList*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_writer_write_string (writer, "{");
	first = TRUE;
	{
		ValaIterator* _expr_it;
		_expr_it = vala_iterable_iterator ((ValaIterable*) self->priv->initializers);
		while (TRUE) {
			ValaCCodeExpression* expr;
			if (!vala_iterator_next (_expr_it)) {
				break;
			}
			expr = (ValaCCodeExpression*) vala_iterator_get (_expr_it);
			if (!first) {
				vala_ccode_writer_write_string (writer, ", ");
			} else {
				first = FALSE;
			}
			if (expr != NULL) {
				vala_ccode_node_write ((ValaCCodeNode*) expr, writer);
			}
			_vala_ccode_node_unref0 (expr);
		}
		_vala_collection_object_unref0 (_expr_it);
	}
	vala_ccode_writer_write_string (writer, "}");
}


ValaCCodeInitializerList* vala_ccode_initializer_list_construct (GType object_type) {
	ValaCCodeInitializerList* self = NULL;
	self = (ValaCCodeInitializerList*) vala_ccode_expression_construct (object_type);
	return self;
}


ValaCCodeInitializerList* vala_ccode_initializer_list_new (void) {
	return vala_ccode_initializer_list_construct (VALA_TYPE_CCODE_INITIALIZER_LIST);
}


static void vala_ccode_initializer_list_class_init (ValaCCodeInitializerListClass * klass) {
	vala_ccode_initializer_list_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_NODE_CLASS (klass)->finalize = vala_ccode_initializer_list_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeInitializerListPrivate));
	VALA_CCODE_NODE_CLASS (klass)->write = vala_ccode_initializer_list_real_write;
}


static void vala_ccode_initializer_list_instance_init (ValaCCodeInitializerList * self) {
	self->priv = VALA_CCODE_INITIALIZER_LIST_GET_PRIVATE (self);
	self->priv->initializers = (ValaList*) vala_array_list_new (VALA_TYPE_CCODE_EXPRESSION, (GBoxedCopyFunc) vala_ccode_node_ref, vala_ccode_node_unref, g_direct_equal);
}


static void vala_ccode_initializer_list_finalize (ValaCCodeNode* obj) {
	ValaCCodeInitializerList * self;
	self = VALA_CCODE_INITIALIZER_LIST (obj);
	_vala_collection_object_unref0 (self->priv->initializers);
	VALA_CCODE_NODE_CLASS (vala_ccode_initializer_list_parent_class)->finalize (obj);
}


/**
 * Represents a struct or array initializer list in the C code.
 */
GType vala_ccode_initializer_list_get_type (void) {
	static volatile gsize vala_ccode_initializer_list_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_initializer_list_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeInitializerListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_initializer_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeInitializerList), 0, (GInstanceInitFunc) vala_ccode_initializer_list_instance_init, NULL };
		GType vala_ccode_initializer_list_type_id;
		vala_ccode_initializer_list_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeInitializerList", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_initializer_list_type_id__volatile, vala_ccode_initializer_list_type_id);
	}
	return vala_ccode_initializer_list_type_id__volatile;
}




