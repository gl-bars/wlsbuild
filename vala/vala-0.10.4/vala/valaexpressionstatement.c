/* valaexpressionstatement.c generated by valac, the Vala compiler
 * generated from valaexpressionstatement.vala, do not modify */

/* valaexpressionstatement.vala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
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
#include <valagee.h>


#define VALA_TYPE_CODE_NODE (vala_code_node_get_type ())
#define VALA_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_NODE, ValaCodeNode))
#define VALA_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))
#define VALA_IS_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_NODE))
#define VALA_IS_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_NODE))
#define VALA_CODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))

typedef struct _ValaCodeNode ValaCodeNode;
typedef struct _ValaCodeNodeClass ValaCodeNodeClass;
typedef struct _ValaCodeNodePrivate ValaCodeNodePrivate;

#define VALA_TYPE_CODE_VISITOR (vala_code_visitor_get_type ())
#define VALA_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitor))
#define VALA_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))
#define VALA_IS_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_VISITOR))
#define VALA_IS_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_VISITOR))
#define VALA_CODE_VISITOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))

typedef struct _ValaCodeVisitor ValaCodeVisitor;
typedef struct _ValaCodeVisitorClass ValaCodeVisitorClass;

#define VALA_TYPE_SEMANTIC_ANALYZER (vala_semantic_analyzer_get_type ())
#define VALA_SEMANTIC_ANALYZER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SEMANTIC_ANALYZER, ValaSemanticAnalyzer))
#define VALA_SEMANTIC_ANALYZER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SEMANTIC_ANALYZER, ValaSemanticAnalyzerClass))
#define VALA_IS_SEMANTIC_ANALYZER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SEMANTIC_ANALYZER))
#define VALA_IS_SEMANTIC_ANALYZER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SEMANTIC_ANALYZER))
#define VALA_SEMANTIC_ANALYZER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SEMANTIC_ANALYZER, ValaSemanticAnalyzerClass))

typedef struct _ValaSemanticAnalyzer ValaSemanticAnalyzer;
typedef struct _ValaSemanticAnalyzerClass ValaSemanticAnalyzerClass;

#define VALA_TYPE_CODE_GENERATOR (vala_code_generator_get_type ())
#define VALA_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGenerator))
#define VALA_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))
#define VALA_IS_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_GENERATOR))
#define VALA_IS_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_GENERATOR))
#define VALA_CODE_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))

typedef struct _ValaCodeGenerator ValaCodeGenerator;
typedef struct _ValaCodeGeneratorClass ValaCodeGeneratorClass;

#define VALA_TYPE_DATA_TYPE (vala_data_type_get_type ())
#define VALA_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DATA_TYPE, ValaDataType))
#define VALA_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))
#define VALA_IS_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DATA_TYPE))
#define VALA_IS_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DATA_TYPE))
#define VALA_DATA_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))

typedef struct _ValaDataType ValaDataType;
typedef struct _ValaDataTypeClass ValaDataTypeClass;

#define VALA_TYPE_EXPRESSION (vala_expression_get_type ())
#define VALA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_EXPRESSION, ValaExpression))
#define VALA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_EXPRESSION, ValaExpressionClass))
#define VALA_IS_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_EXPRESSION))
#define VALA_IS_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_EXPRESSION))
#define VALA_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_EXPRESSION, ValaExpressionClass))

typedef struct _ValaExpression ValaExpression;
typedef struct _ValaExpressionClass ValaExpressionClass;

#define VALA_TYPE_SYMBOL (vala_symbol_get_type ())
#define VALA_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SYMBOL, ValaSymbol))
#define VALA_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SYMBOL, ValaSymbolClass))
#define VALA_IS_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SYMBOL))
#define VALA_IS_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SYMBOL))
#define VALA_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SYMBOL, ValaSymbolClass))

typedef struct _ValaSymbol ValaSymbol;
typedef struct _ValaSymbolClass ValaSymbolClass;

#define VALA_TYPE_VARIABLE (vala_variable_get_type ())
#define VALA_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VARIABLE, ValaVariable))
#define VALA_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VARIABLE, ValaVariableClass))
#define VALA_IS_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VARIABLE))
#define VALA_IS_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VARIABLE))
#define VALA_VARIABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VARIABLE, ValaVariableClass))

typedef struct _ValaVariable ValaVariable;
typedef struct _ValaVariableClass ValaVariableClass;

#define VALA_TYPE_LOCAL_VARIABLE (vala_local_variable_get_type ())
#define VALA_LOCAL_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_LOCAL_VARIABLE, ValaLocalVariable))
#define VALA_LOCAL_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_LOCAL_VARIABLE, ValaLocalVariableClass))
#define VALA_IS_LOCAL_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_LOCAL_VARIABLE))
#define VALA_IS_LOCAL_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_LOCAL_VARIABLE))
#define VALA_LOCAL_VARIABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_LOCAL_VARIABLE, ValaLocalVariableClass))

typedef struct _ValaLocalVariable ValaLocalVariable;
typedef struct _ValaLocalVariableClass ValaLocalVariableClass;

#define VALA_TYPE_ATTRIBUTE (vala_attribute_get_type ())
#define VALA_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ATTRIBUTE, ValaAttribute))
#define VALA_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))
#define VALA_IS_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ATTRIBUTE))
#define VALA_IS_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ATTRIBUTE))
#define VALA_ATTRIBUTE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))

typedef struct _ValaAttribute ValaAttribute;
typedef struct _ValaAttributeClass ValaAttributeClass;

#define VALA_TYPE_STATEMENT (vala_statement_get_type ())
#define VALA_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_STATEMENT, ValaStatement))
#define VALA_IS_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_STATEMENT))
#define VALA_STATEMENT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), VALA_TYPE_STATEMENT, ValaStatementIface))

typedef struct _ValaStatement ValaStatement;
typedef struct _ValaStatementIface ValaStatementIface;

#define VALA_TYPE_EXPRESSION_STATEMENT (vala_expression_statement_get_type ())
#define VALA_EXPRESSION_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_EXPRESSION_STATEMENT, ValaExpressionStatement))
#define VALA_EXPRESSION_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_EXPRESSION_STATEMENT, ValaExpressionStatementClass))
#define VALA_IS_EXPRESSION_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_EXPRESSION_STATEMENT))
#define VALA_IS_EXPRESSION_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_EXPRESSION_STATEMENT))
#define VALA_EXPRESSION_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_EXPRESSION_STATEMENT, ValaExpressionStatementClass))

typedef struct _ValaExpressionStatement ValaExpressionStatement;
typedef struct _ValaExpressionStatementClass ValaExpressionStatementClass;
typedef struct _ValaExpressionStatementPrivate ValaExpressionStatementPrivate;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;
#define _vala_collection_object_unref0(var) ((var == NULL) ? NULL : (var = (vala_collection_object_unref (var), NULL)))

struct _ValaCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCodeNodePrivate * priv;
	GList* attributes;
};

struct _ValaCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCodeNode *self);
	void (*accept) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	void (*accept_children) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	gboolean (*check) (ValaCodeNode* self, ValaSemanticAnalyzer* analyzer);
	void (*emit) (ValaCodeNode* self, ValaCodeGenerator* codegen);
	void (*replace_type) (ValaCodeNode* self, ValaDataType* old_type, ValaDataType* new_type);
	void (*replace_expression) (ValaCodeNode* self, ValaExpression* old_node, ValaExpression* new_node);
	char* (*to_string) (ValaCodeNode* self);
	void (*get_defined_variables) (ValaCodeNode* self, ValaCollection* collection);
	void (*get_used_variables) (ValaCodeNode* self, ValaCollection* collection);
};

struct _ValaStatementIface {
	GTypeInterface parent_iface;
};

struct _ValaExpressionStatement {
	ValaCodeNode parent_instance;
	ValaExpressionStatementPrivate * priv;
};

struct _ValaExpressionStatementClass {
	ValaCodeNodeClass parent_class;
};

struct _ValaExpressionStatementPrivate {
	ValaExpression* _expression;
};


static gpointer vala_expression_statement_parent_class = NULL;
static ValaStatementIface* vala_expression_statement_vala_statement_parent_iface = NULL;

gpointer vala_code_node_ref (gpointer instance);
void vala_code_node_unref (gpointer instance);
GParamSpec* vala_param_spec_code_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_node (GValue* value, gpointer v_object);
void vala_value_take_code_node (GValue* value, gpointer v_object);
gpointer vala_value_get_code_node (const GValue* value);
GType vala_code_node_get_type (void) G_GNUC_CONST;
gpointer vala_code_visitor_ref (gpointer instance);
void vala_code_visitor_unref (gpointer instance);
GParamSpec* vala_param_spec_code_visitor (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_visitor (GValue* value, gpointer v_object);
void vala_value_take_code_visitor (GValue* value, gpointer v_object);
gpointer vala_value_get_code_visitor (const GValue* value);
GType vala_code_visitor_get_type (void) G_GNUC_CONST;
GType vala_semantic_analyzer_get_type (void) G_GNUC_CONST;
GType vala_code_generator_get_type (void) G_GNUC_CONST;
GType vala_data_type_get_type (void) G_GNUC_CONST;
GType vala_expression_get_type (void) G_GNUC_CONST;
GType vala_symbol_get_type (void) G_GNUC_CONST;
GType vala_variable_get_type (void) G_GNUC_CONST;
GType vala_local_variable_get_type (void) G_GNUC_CONST;
GType vala_attribute_get_type (void) G_GNUC_CONST;
GType vala_statement_get_type (void) G_GNUC_CONST;
GType vala_expression_statement_get_type (void) G_GNUC_CONST;
#define VALA_EXPRESSION_STATEMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_EXPRESSION_STATEMENT, ValaExpressionStatementPrivate))
enum  {
	VALA_EXPRESSION_STATEMENT_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaExpressionStatement* vala_expression_statement_new (ValaExpression* expression, ValaSourceReference* source_reference);
ValaExpressionStatement* vala_expression_statement_construct (GType object_type, ValaExpression* expression, ValaSourceReference* source_reference);
ValaCodeNode* vala_code_node_construct (GType object_type);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
void vala_expression_statement_set_expression (ValaExpressionStatement* self, ValaExpression* value);
static void vala_expression_statement_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_expression_statement (ValaCodeVisitor* self, ValaExpressionStatement* stmt);
static void vala_expression_statement_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor);
ValaExpression* vala_expression_statement_get_expression (ValaExpressionStatement* self);
void vala_code_node_accept (ValaCodeNode* self, ValaCodeVisitor* visitor);
static void vala_expression_statement_real_replace_expression (ValaCodeNode* base, ValaExpression* old_node, ValaExpression* new_node);
static gboolean vala_expression_statement_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer);
gboolean vala_code_node_get_checked (ValaCodeNode* self);
gboolean vala_code_node_get_error (ValaCodeNode* self);
void vala_code_node_set_checked (ValaCodeNode* self, gboolean value);
gboolean vala_code_node_check (ValaCodeNode* self, ValaSemanticAnalyzer* analyzer);
void vala_code_node_set_error (ValaCodeNode* self, gboolean value);
void vala_code_node_add_error_types (ValaCodeNode* self, ValaList* error_types);
ValaList* vala_code_node_get_error_types (ValaCodeNode* self);
static void vala_expression_statement_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen);
void vala_code_node_emit (ValaCodeNode* self, ValaCodeGenerator* codegen);
static void vala_expression_statement_real_get_defined_variables (ValaCodeNode* base, ValaCollection* collection);
void vala_code_node_get_defined_variables (ValaCodeNode* self, ValaCollection* collection);
static void vala_expression_statement_real_get_used_variables (ValaCodeNode* base, ValaCollection* collection);
void vala_code_node_get_used_variables (ValaCodeNode* self, ValaCollection* collection);
void vala_code_node_set_parent_node (ValaCodeNode* self, ValaCodeNode* value);
static void vala_expression_statement_finalize (ValaCodeNode* obj);



/**
 * Creates a new expression statement.
 *
 * @param expr   expression to evaluate
 * @param source reference to source code
 * @return       newly created expression statement
 */
ValaExpressionStatement* vala_expression_statement_construct (GType object_type, ValaExpression* expression, ValaSourceReference* source_reference) {
	ValaExpressionStatement* self = NULL;
	g_return_val_if_fail (expression != NULL, NULL);
	self = (ValaExpressionStatement*) vala_code_node_construct (object_type);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	vala_expression_statement_set_expression (self, expression);
	return self;
}


ValaExpressionStatement* vala_expression_statement_new (ValaExpression* expression, ValaSourceReference* source_reference) {
	return vala_expression_statement_construct (VALA_TYPE_EXPRESSION_STATEMENT, expression, source_reference);
}


static void vala_expression_statement_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaExpressionStatement * self;
	self = (ValaExpressionStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_expression_statement (visitor, self);
}


static void vala_expression_statement_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaExpressionStatement * self;
	self = (ValaExpressionStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_node_accept ((ValaCodeNode*) vala_expression_statement_get_expression (self), visitor);
}


static void vala_expression_statement_real_replace_expression (ValaCodeNode* base, ValaExpression* old_node, ValaExpression* new_node) {
	ValaExpressionStatement * self;
	self = (ValaExpressionStatement*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	if (vala_expression_statement_get_expression (self) == old_node) {
		vala_expression_statement_set_expression (self, new_node);
	}
}


static gboolean vala_expression_statement_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer) {
	ValaExpressionStatement * self;
	gboolean result = FALSE;
	ValaList* _tmp0_;
	self = (ValaExpressionStatement*) base;
	g_return_val_if_fail (analyzer != NULL, FALSE);
	if (vala_code_node_get_checked ((ValaCodeNode*) self)) {
		result = !vala_code_node_get_error ((ValaCodeNode*) self);
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	if (!vala_code_node_check ((ValaCodeNode*) vala_expression_statement_get_expression (self), analyzer)) {
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	vala_code_node_add_error_types ((ValaCodeNode*) self, _tmp0_ = vala_code_node_get_error_types ((ValaCodeNode*) vala_expression_statement_get_expression (self)));
	_vala_collection_object_unref0 (_tmp0_);
	result = !vala_code_node_get_error ((ValaCodeNode*) self);
	return result;
}


static void vala_expression_statement_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen) {
	ValaExpressionStatement * self;
	self = (ValaExpressionStatement*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_node_emit ((ValaCodeNode*) vala_expression_statement_get_expression (self), codegen);
	vala_code_visitor_visit_expression_statement ((ValaCodeVisitor*) codegen, self);
}


static void vala_expression_statement_real_get_defined_variables (ValaCodeNode* base, ValaCollection* collection) {
	ValaExpressionStatement * self;
	self = (ValaExpressionStatement*) base;
	g_return_if_fail (collection != NULL);
	vala_code_node_get_defined_variables ((ValaCodeNode*) vala_expression_statement_get_expression (self), collection);
}


static void vala_expression_statement_real_get_used_variables (ValaCodeNode* base, ValaCollection* collection) {
	ValaExpressionStatement * self;
	self = (ValaExpressionStatement*) base;
	g_return_if_fail (collection != NULL);
	vala_code_node_get_used_variables ((ValaCodeNode*) vala_expression_statement_get_expression (self), collection);
}


ValaExpression* vala_expression_statement_get_expression (ValaExpressionStatement* self) {
	ValaExpression* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_expression;
	return result;
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


void vala_expression_statement_set_expression (ValaExpressionStatement* self, ValaExpression* value) {
	ValaExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_expression = (_tmp0_ = _vala_code_node_ref0 (value), _vala_code_node_unref0 (self->priv->_expression), _tmp0_);
	vala_code_node_set_parent_node ((ValaCodeNode*) self->priv->_expression, (ValaCodeNode*) self);
}


static void vala_expression_statement_class_init (ValaExpressionStatementClass * klass) {
	vala_expression_statement_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->finalize = vala_expression_statement_finalize;
	g_type_class_add_private (klass, sizeof (ValaExpressionStatementPrivate));
	VALA_CODE_NODE_CLASS (klass)->accept = vala_expression_statement_real_accept;
	VALA_CODE_NODE_CLASS (klass)->accept_children = vala_expression_statement_real_accept_children;
	VALA_CODE_NODE_CLASS (klass)->replace_expression = vala_expression_statement_real_replace_expression;
	VALA_CODE_NODE_CLASS (klass)->check = vala_expression_statement_real_check;
	VALA_CODE_NODE_CLASS (klass)->emit = vala_expression_statement_real_emit;
	VALA_CODE_NODE_CLASS (klass)->get_defined_variables = vala_expression_statement_real_get_defined_variables;
	VALA_CODE_NODE_CLASS (klass)->get_used_variables = vala_expression_statement_real_get_used_variables;
}


static void vala_expression_statement_vala_statement_interface_init (ValaStatementIface * iface) {
	vala_expression_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void vala_expression_statement_instance_init (ValaExpressionStatement * self) {
	self->priv = VALA_EXPRESSION_STATEMENT_GET_PRIVATE (self);
}


static void vala_expression_statement_finalize (ValaCodeNode* obj) {
	ValaExpressionStatement * self;
	self = VALA_EXPRESSION_STATEMENT (obj);
	_vala_code_node_unref0 (self->priv->_expression);
	VALA_CODE_NODE_CLASS (vala_expression_statement_parent_class)->finalize (obj);
}


/**
 * A code statement that evaluates a given expression. The value computed by the
 * expression, if any, is discarded.
 */
GType vala_expression_statement_get_type (void) {
	static volatile gsize vala_expression_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_expression_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaExpressionStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_expression_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaExpressionStatement), 0, (GInstanceInitFunc) vala_expression_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_expression_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_expression_statement_type_id;
		vala_expression_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaExpressionStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_expression_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		g_once_init_leave (&vala_expression_statement_type_id__volatile, vala_expression_statement_type_id);
	}
	return vala_expression_statement_type_id__volatile;
}




