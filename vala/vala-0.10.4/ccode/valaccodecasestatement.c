/* valaccodecasestatement.c generated by valac, the Vala compiler
 * generated from valaccodecasestatement.vala, do not modify */

/* valaccodecasestatement.vala
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

#define VALA_TYPE_CCODE_STATEMENT (vala_ccode_statement_get_type ())
#define VALA_CCODE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatement))
#define VALA_CCODE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatementClass))
#define VALA_IS_CCODE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_STATEMENT))
#define VALA_IS_CCODE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_STATEMENT))
#define VALA_CCODE_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatementClass))

typedef struct _ValaCCodeStatement ValaCCodeStatement;
typedef struct _ValaCCodeStatementClass ValaCCodeStatementClass;
typedef struct _ValaCCodeStatementPrivate ValaCCodeStatementPrivate;

#define VALA_TYPE_CCODE_CASE_STATEMENT (vala_ccode_case_statement_get_type ())
#define VALA_CCODE_CASE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_CASE_STATEMENT, ValaCCodeCaseStatement))
#define VALA_CCODE_CASE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_CASE_STATEMENT, ValaCCodeCaseStatementClass))
#define VALA_IS_CCODE_CASE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_CASE_STATEMENT))
#define VALA_IS_CCODE_CASE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_CASE_STATEMENT))
#define VALA_CCODE_CASE_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_CASE_STATEMENT, ValaCCodeCaseStatementClass))

typedef struct _ValaCCodeCaseStatement ValaCCodeCaseStatement;
typedef struct _ValaCCodeCaseStatementClass ValaCCodeCaseStatementClass;
typedef struct _ValaCCodeCaseStatementPrivate ValaCCodeCaseStatementPrivate;

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

#define VALA_TYPE_CCODE_LINE_DIRECTIVE (vala_ccode_line_directive_get_type ())
#define VALA_CCODE_LINE_DIRECTIVE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_LINE_DIRECTIVE, ValaCCodeLineDirective))
#define VALA_CCODE_LINE_DIRECTIVE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_LINE_DIRECTIVE, ValaCCodeLineDirectiveClass))
#define VALA_IS_CCODE_LINE_DIRECTIVE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_LINE_DIRECTIVE))
#define VALA_IS_CCODE_LINE_DIRECTIVE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_LINE_DIRECTIVE))
#define VALA_CCODE_LINE_DIRECTIVE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_LINE_DIRECTIVE, ValaCCodeLineDirectiveClass))

typedef struct _ValaCCodeLineDirective ValaCCodeLineDirective;
typedef struct _ValaCCodeLineDirectiveClass ValaCCodeLineDirectiveClass;

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

struct _ValaCCodeStatement {
	ValaCCodeNode parent_instance;
	ValaCCodeStatementPrivate * priv;
};

struct _ValaCCodeStatementClass {
	ValaCCodeNodeClass parent_class;
};

struct _ValaCCodeCaseStatement {
	ValaCCodeStatement parent_instance;
	ValaCCodeCaseStatementPrivate * priv;
};

struct _ValaCCodeCaseStatementClass {
	ValaCCodeStatementClass parent_class;
};

struct _ValaCCodeCaseStatementPrivate {
	ValaCCodeExpression* _expression;
};


static gpointer vala_ccode_case_statement_parent_class = NULL;

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
GType vala_ccode_statement_get_type (void) G_GNUC_CONST;
GType vala_ccode_case_statement_get_type (void) G_GNUC_CONST;
GType vala_ccode_expression_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_CASE_STATEMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_CASE_STATEMENT, ValaCCodeCaseStatementPrivate))
enum  {
	VALA_CCODE_CASE_STATEMENT_DUMMY_PROPERTY
};
ValaCCodeCaseStatement* vala_ccode_case_statement_new (ValaCCodeExpression* expression);
ValaCCodeCaseStatement* vala_ccode_case_statement_construct (GType object_type, ValaCCodeExpression* expression);
ValaCCodeStatement* vala_ccode_statement_construct (GType object_type);
void vala_ccode_case_statement_set_expression (ValaCCodeCaseStatement* self, ValaCCodeExpression* value);
static void vala_ccode_case_statement_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
GType vala_ccode_line_directive_get_type (void) G_GNUC_CONST;
void vala_ccode_writer_write_indent (ValaCCodeWriter* self, ValaCCodeLineDirective* line);
ValaCCodeLineDirective* vala_ccode_node_get_line (ValaCCodeNode* self);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const char* s);
ValaCCodeExpression* vala_ccode_case_statement_get_expression (ValaCCodeCaseStatement* self);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
void vala_ccode_writer_write_newline (ValaCCodeWriter* self);
static void vala_ccode_case_statement_finalize (ValaCCodeNode* obj);



ValaCCodeCaseStatement* vala_ccode_case_statement_construct (GType object_type, ValaCCodeExpression* expression) {
	ValaCCodeCaseStatement* self = NULL;
	g_return_val_if_fail (expression != NULL, NULL);
	self = (ValaCCodeCaseStatement*) vala_ccode_statement_construct (object_type);
	vala_ccode_case_statement_set_expression (self, expression);
	return self;
}


ValaCCodeCaseStatement* vala_ccode_case_statement_new (ValaCCodeExpression* expression) {
	return vala_ccode_case_statement_construct (VALA_TYPE_CCODE_CASE_STATEMENT, expression);
}


static void vala_ccode_case_statement_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeCaseStatement * self;
	self = (ValaCCodeCaseStatement*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_writer_write_indent (writer, vala_ccode_node_get_line ((ValaCCodeNode*) self));
	vala_ccode_writer_write_string (writer, "case ");
	vala_ccode_node_write ((ValaCCodeNode*) self->priv->_expression, writer);
	vala_ccode_writer_write_string (writer, ":");
	vala_ccode_writer_write_newline (writer);
}


ValaCCodeExpression* vala_ccode_case_statement_get_expression (ValaCCodeCaseStatement* self) {
	ValaCCodeExpression* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_expression;
	return result;
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


void vala_ccode_case_statement_set_expression (ValaCCodeCaseStatement* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_expression = (_tmp0_ = _vala_ccode_node_ref0 (value), _vala_ccode_node_unref0 (self->priv->_expression), _tmp0_);
}


static void vala_ccode_case_statement_class_init (ValaCCodeCaseStatementClass * klass) {
	vala_ccode_case_statement_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_NODE_CLASS (klass)->finalize = vala_ccode_case_statement_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeCaseStatementPrivate));
	VALA_CCODE_NODE_CLASS (klass)->write = vala_ccode_case_statement_real_write;
}


static void vala_ccode_case_statement_instance_init (ValaCCodeCaseStatement * self) {
	self->priv = VALA_CCODE_CASE_STATEMENT_GET_PRIVATE (self);
}


static void vala_ccode_case_statement_finalize (ValaCCodeNode* obj) {
	ValaCCodeCaseStatement * self;
	self = VALA_CCODE_CASE_STATEMENT (obj);
	_vala_ccode_node_unref0 (self->priv->_expression);
	VALA_CCODE_NODE_CLASS (vala_ccode_case_statement_parent_class)->finalize (obj);
}


/**
 * Represents a case block in a switch statement in C code.
 */
GType vala_ccode_case_statement_get_type (void) {
	static volatile gsize vala_ccode_case_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_case_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeCaseStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_case_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeCaseStatement), 0, (GInstanceInitFunc) vala_ccode_case_statement_instance_init, NULL };
		GType vala_ccode_case_statement_type_id;
		vala_ccode_case_statement_type_id = g_type_register_static (VALA_TYPE_CCODE_STATEMENT, "ValaCCodeCaseStatement", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_case_statement_type_id__volatile, vala_ccode_case_statement_type_id);
	}
	return vala_ccode_case_statement_type_id__volatile;
}




