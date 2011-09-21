/* valaccodeexpressionstatement.c generated by valac, the Vala compiler
 * generated from valaccodeexpressionstatement.vala, do not modify */

/* valaccodeexpressionstatement.vala
 *
 * Copyright (C) 2006-2008  Jürg Billeter
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

#define VALA_TYPE_CCODE_STATEMENT (vala_ccode_statement_get_type ())
#define VALA_CCODE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatement))
#define VALA_CCODE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatementClass))
#define VALA_IS_CCODE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_STATEMENT))
#define VALA_IS_CCODE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_STATEMENT))
#define VALA_CCODE_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatementClass))

typedef struct _ValaCCodeStatement ValaCCodeStatement;
typedef struct _ValaCCodeStatementClass ValaCCodeStatementClass;
typedef struct _ValaCCodeStatementPrivate ValaCCodeStatementPrivate;

#define VALA_TYPE_CCODE_EXPRESSION_STATEMENT (vala_ccode_expression_statement_get_type ())
#define VALA_CCODE_EXPRESSION_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION_STATEMENT, ValaCCodeExpressionStatement))
#define VALA_CCODE_EXPRESSION_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION_STATEMENT, ValaCCodeExpressionStatementClass))
#define VALA_IS_CCODE_EXPRESSION_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION_STATEMENT))
#define VALA_IS_CCODE_EXPRESSION_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION_STATEMENT))
#define VALA_CCODE_EXPRESSION_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION_STATEMENT, ValaCCodeExpressionStatementClass))

typedef struct _ValaCCodeExpressionStatement ValaCCodeExpressionStatement;
typedef struct _ValaCCodeExpressionStatementClass ValaCCodeExpressionStatementClass;
typedef struct _ValaCCodeExpressionStatementPrivate ValaCCodeExpressionStatementPrivate;

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

#define VALA_TYPE_CCODE_COMMA_EXPRESSION (vala_ccode_comma_expression_get_type ())
#define VALA_CCODE_COMMA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_COMMA_EXPRESSION, ValaCCodeCommaExpression))
#define VALA_CCODE_COMMA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_COMMA_EXPRESSION, ValaCCodeCommaExpressionClass))
#define VALA_IS_CCODE_COMMA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_COMMA_EXPRESSION))
#define VALA_IS_CCODE_COMMA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_COMMA_EXPRESSION))
#define VALA_CCODE_COMMA_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_COMMA_EXPRESSION, ValaCCodeCommaExpressionClass))

typedef struct _ValaCCodeCommaExpression ValaCCodeCommaExpression;
typedef struct _ValaCCodeCommaExpressionClass ValaCCodeCommaExpressionClass;
#define _vala_collection_object_unref0(var) ((var == NULL) ? NULL : (var = (vala_collection_object_unref (var), NULL)))

#define VALA_TYPE_CCODE_PARENTHESIZED_EXPRESSION (vala_ccode_parenthesized_expression_get_type ())
#define VALA_CCODE_PARENTHESIZED_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_PARENTHESIZED_EXPRESSION, ValaCCodeParenthesizedExpression))
#define VALA_CCODE_PARENTHESIZED_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_PARENTHESIZED_EXPRESSION, ValaCCodeParenthesizedExpressionClass))
#define VALA_IS_CCODE_PARENTHESIZED_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_PARENTHESIZED_EXPRESSION))
#define VALA_IS_CCODE_PARENTHESIZED_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_PARENTHESIZED_EXPRESSION))
#define VALA_CCODE_PARENTHESIZED_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_PARENTHESIZED_EXPRESSION, ValaCCodeParenthesizedExpressionClass))

typedef struct _ValaCCodeParenthesizedExpression ValaCCodeParenthesizedExpression;
typedef struct _ValaCCodeParenthesizedExpressionClass ValaCCodeParenthesizedExpressionClass;

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

struct _ValaCCodeExpressionStatement {
	ValaCCodeStatement parent_instance;
	ValaCCodeExpressionStatementPrivate * priv;
};

struct _ValaCCodeExpressionStatementClass {
	ValaCCodeStatementClass parent_class;
};

struct _ValaCCodeExpressionStatementPrivate {
	ValaCCodeExpression* _expression;
};


static gpointer vala_ccode_expression_statement_parent_class = NULL;

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
GType vala_ccode_expression_statement_get_type (void) G_GNUC_CONST;
GType vala_ccode_expression_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_EXPRESSION_STATEMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_EXPRESSION_STATEMENT, ValaCCodeExpressionStatementPrivate))
enum  {
	VALA_CCODE_EXPRESSION_STATEMENT_DUMMY_PROPERTY
};
ValaCCodeExpressionStatement* vala_ccode_expression_statement_new (ValaCCodeExpression* expr);
ValaCCodeExpressionStatement* vala_ccode_expression_statement_construct (GType object_type, ValaCCodeExpression* expr);
ValaCCodeStatement* vala_ccode_statement_construct (GType object_type);
void vala_ccode_expression_statement_set_expression (ValaCCodeExpressionStatement* self, ValaCCodeExpression* value);
static void vala_ccode_expression_statement_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
ValaCCodeExpression* vala_ccode_expression_statement_get_expression (ValaCCodeExpressionStatement* self);
GType vala_ccode_comma_expression_get_type (void) G_GNUC_CONST;
ValaList* vala_ccode_comma_expression_get_inner (ValaCCodeCommaExpression* self);
static void vala_ccode_expression_statement_write_expression (ValaCCodeExpressionStatement* self, ValaCCodeWriter* writer, ValaCCodeExpression* expr);
GType vala_ccode_parenthesized_expression_get_type (void) G_GNUC_CONST;
ValaCCodeExpression* vala_ccode_parenthesized_expression_get_inner (ValaCCodeParenthesizedExpression* self);
GType vala_ccode_line_directive_get_type (void) G_GNUC_CONST;
void vala_ccode_writer_write_indent (ValaCCodeWriter* self, ValaCCodeLineDirective* line);
ValaCCodeLineDirective* vala_ccode_node_get_line (ValaCCodeNode* self);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const char* s);
void vala_ccode_writer_write_newline (ValaCCodeWriter* self);
static void vala_ccode_expression_statement_finalize (ValaCCodeNode* obj);



ValaCCodeExpressionStatement* vala_ccode_expression_statement_construct (GType object_type, ValaCCodeExpression* expr) {
	ValaCCodeExpressionStatement* self = NULL;
	g_return_val_if_fail (expr != NULL, NULL);
	self = (ValaCCodeExpressionStatement*) vala_ccode_statement_construct (object_type);
	vala_ccode_expression_statement_set_expression (self, expr);
	return self;
}


ValaCCodeExpressionStatement* vala_ccode_expression_statement_new (ValaCCodeExpression* expr) {
	return vala_ccode_expression_statement_construct (VALA_TYPE_CCODE_EXPRESSION_STATEMENT, expr);
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


static void vala_ccode_expression_statement_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeExpressionStatement * self;
	self = (ValaCCodeExpressionStatement*) base;
	g_return_if_fail (writer != NULL);
	if (VALA_IS_CCODE_COMMA_EXPRESSION (self->priv->_expression)) {
		ValaCCodeExpression* _tmp0_;
		ValaCCodeCommaExpression* ccomma;
		ccomma = _vala_ccode_node_ref0 ((_tmp0_ = self->priv->_expression, VALA_IS_CCODE_COMMA_EXPRESSION (_tmp0_) ? ((ValaCCodeCommaExpression*) _tmp0_) : NULL));
		{
			ValaList* _tmp1_;
			ValaIterator* _tmp2_;
			ValaIterator* _expr_it;
			_expr_it = (_tmp2_ = vala_iterable_iterator ((ValaIterable*) (_tmp1_ = vala_ccode_comma_expression_get_inner (ccomma))), _vala_collection_object_unref0 (_tmp1_), _tmp2_);
			while (TRUE) {
				ValaCCodeExpression* expr;
				if (!vala_iterator_next (_expr_it)) {
					break;
				}
				expr = (ValaCCodeExpression*) vala_iterator_get (_expr_it);
				vala_ccode_expression_statement_write_expression (self, writer, expr);
				_vala_ccode_node_unref0 (expr);
			}
			_vala_collection_object_unref0 (_expr_it);
		}
		_vala_ccode_node_unref0 (ccomma);
	} else {
		if (VALA_IS_CCODE_PARENTHESIZED_EXPRESSION (self->priv->_expression)) {
			ValaCCodeExpression* _tmp3_;
			ValaCCodeParenthesizedExpression* cpar;
			cpar = _vala_ccode_node_ref0 ((_tmp3_ = self->priv->_expression, VALA_IS_CCODE_PARENTHESIZED_EXPRESSION (_tmp3_) ? ((ValaCCodeParenthesizedExpression*) _tmp3_) : NULL));
			vala_ccode_expression_statement_write_expression (self, writer, vala_ccode_parenthesized_expression_get_inner (cpar));
			_vala_ccode_node_unref0 (cpar);
		} else {
			vala_ccode_expression_statement_write_expression (self, writer, self->priv->_expression);
		}
	}
}


static void vala_ccode_expression_statement_write_expression (ValaCCodeExpressionStatement* self, ValaCCodeWriter* writer, ValaCCodeExpression* expr) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (writer != NULL);
	vala_ccode_writer_write_indent (writer, vala_ccode_node_get_line ((ValaCCodeNode*) self));
	if (expr != NULL) {
		vala_ccode_node_write ((ValaCCodeNode*) expr, writer);
	}
	vala_ccode_writer_write_string (writer, ";");
	vala_ccode_writer_write_newline (writer);
}


ValaCCodeExpression* vala_ccode_expression_statement_get_expression (ValaCCodeExpressionStatement* self) {
	ValaCCodeExpression* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_expression;
	return result;
}


void vala_ccode_expression_statement_set_expression (ValaCCodeExpressionStatement* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_expression = (_tmp0_ = _vala_ccode_node_ref0 (value), _vala_ccode_node_unref0 (self->priv->_expression), _tmp0_);
}


static void vala_ccode_expression_statement_class_init (ValaCCodeExpressionStatementClass * klass) {
	vala_ccode_expression_statement_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_NODE_CLASS (klass)->finalize = vala_ccode_expression_statement_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeExpressionStatementPrivate));
	VALA_CCODE_NODE_CLASS (klass)->write = vala_ccode_expression_statement_real_write;
}


static void vala_ccode_expression_statement_instance_init (ValaCCodeExpressionStatement * self) {
	self->priv = VALA_CCODE_EXPRESSION_STATEMENT_GET_PRIVATE (self);
}


static void vala_ccode_expression_statement_finalize (ValaCCodeNode* obj) {
	ValaCCodeExpressionStatement * self;
	self = VALA_CCODE_EXPRESSION_STATEMENT (obj);
	_vala_ccode_node_unref0 (self->priv->_expression);
	VALA_CCODE_NODE_CLASS (vala_ccode_expression_statement_parent_class)->finalize (obj);
}


/**
 * Represents a C code statement that evaluates a given expression.
 */
GType vala_ccode_expression_statement_get_type (void) {
	static volatile gsize vala_ccode_expression_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_expression_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeExpressionStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_expression_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeExpressionStatement), 0, (GInstanceInitFunc) vala_ccode_expression_statement_instance_init, NULL };
		GType vala_ccode_expression_statement_type_id;
		vala_ccode_expression_statement_type_id = g_type_register_static (VALA_TYPE_CCODE_STATEMENT, "ValaCCodeExpressionStatement", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_expression_statement_type_id__volatile, vala_ccode_expression_statement_type_id);
	}
	return vala_ccode_expression_statement_type_id__volatile;
}




