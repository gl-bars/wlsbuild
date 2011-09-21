/* valaccodedeclarator.c generated by valac, the Vala compiler
 * generated from valaccodedeclarator.vala, do not modify */

/* valaccodedeclarator.vala
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

#define VALA_TYPE_CCODE_DECLARATOR (vala_ccode_declarator_get_type ())
#define VALA_CCODE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclarator))
#define VALA_CCODE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclaratorClass))
#define VALA_IS_CCODE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_DECLARATOR))
#define VALA_IS_CCODE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_DECLARATOR))
#define VALA_CCODE_DECLARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclaratorClass))

typedef struct _ValaCCodeDeclarator ValaCCodeDeclarator;
typedef struct _ValaCCodeDeclaratorClass ValaCCodeDeclaratorClass;
typedef struct _ValaCCodeDeclaratorPrivate ValaCCodeDeclaratorPrivate;

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

struct _ValaCCodeDeclarator {
	ValaCCodeNode parent_instance;
	ValaCCodeDeclaratorPrivate * priv;
};

struct _ValaCCodeDeclaratorClass {
	ValaCCodeNodeClass parent_class;
	void (*write_initialization) (ValaCCodeDeclarator* self, ValaCCodeWriter* writer);
};


static gpointer vala_ccode_declarator_parent_class = NULL;

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
GType vala_ccode_declarator_get_type (void) G_GNUC_CONST;
enum  {
	VALA_CCODE_DECLARATOR_DUMMY_PROPERTY
};
void vala_ccode_declarator_write_initialization (ValaCCodeDeclarator* self, ValaCCodeWriter* writer);
static void vala_ccode_declarator_real_write_initialization (ValaCCodeDeclarator* self, ValaCCodeWriter* writer);
ValaCCodeDeclarator* vala_ccode_declarator_construct (GType object_type);
ValaCCodeNode* vala_ccode_node_construct (GType object_type);



/**
 * Writes initialization statements for this declarator with the
 * specified C code writer if necessary.
 *
 * @param writer a C code writer
 */
static void vala_ccode_declarator_real_write_initialization (ValaCCodeDeclarator* self, ValaCCodeWriter* writer) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (writer != NULL);
}


void vala_ccode_declarator_write_initialization (ValaCCodeDeclarator* self, ValaCCodeWriter* writer) {
	VALA_CCODE_DECLARATOR_GET_CLASS (self)->write_initialization (self, writer);
}


ValaCCodeDeclarator* vala_ccode_declarator_construct (GType object_type) {
	ValaCCodeDeclarator* self = NULL;
	self = (ValaCCodeDeclarator*) vala_ccode_node_construct (object_type);
	return self;
}


static void vala_ccode_declarator_class_init (ValaCCodeDeclaratorClass * klass) {
	vala_ccode_declarator_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_DECLARATOR_CLASS (klass)->write_initialization = vala_ccode_declarator_real_write_initialization;
}


static void vala_ccode_declarator_instance_init (ValaCCodeDeclarator * self) {
}


/**
 * Represents a variable or function pointer declarator in the C code.
 */
GType vala_ccode_declarator_get_type (void) {
	static volatile gsize vala_ccode_declarator_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_declarator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeDeclaratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_declarator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeDeclarator), 0, (GInstanceInitFunc) vala_ccode_declarator_instance_init, NULL };
		GType vala_ccode_declarator_type_id;
		vala_ccode_declarator_type_id = g_type_register_static (VALA_TYPE_CCODE_NODE, "ValaCCodeDeclarator", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&vala_ccode_declarator_type_id__volatile, vala_ccode_declarator_type_id);
	}
	return vala_ccode_declarator_type_id__volatile;
}




