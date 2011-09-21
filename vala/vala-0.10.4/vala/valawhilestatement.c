/* valawhilestatement.c generated by valac, the Vala compiler
 * generated from valawhilestatement.vala, do not modify */

/* valawhilestatement.vala
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

#define VALA_TYPE_WHILE_STATEMENT (vala_while_statement_get_type ())
#define VALA_WHILE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_WHILE_STATEMENT, ValaWhileStatement))
#define VALA_WHILE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_WHILE_STATEMENT, ValaWhileStatementClass))
#define VALA_IS_WHILE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_WHILE_STATEMENT))
#define VALA_IS_WHILE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_WHILE_STATEMENT))
#define VALA_WHILE_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_WHILE_STATEMENT, ValaWhileStatementClass))

typedef struct _ValaWhileStatement ValaWhileStatement;
typedef struct _ValaWhileStatementClass ValaWhileStatementClass;
typedef struct _ValaWhileStatementPrivate ValaWhileStatementPrivate;

#define VALA_TYPE_BLOCK (vala_block_get_type ())
#define VALA_BLOCK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_BLOCK, ValaBlock))
#define VALA_BLOCK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_BLOCK, ValaBlockClass))
#define VALA_IS_BLOCK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_BLOCK))
#define VALA_IS_BLOCK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_BLOCK))
#define VALA_BLOCK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_BLOCK, ValaBlockClass))

typedef struct _ValaBlock ValaBlock;
typedef struct _ValaBlockClass ValaBlockClass;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_LITERAL (vala_literal_get_type ())
#define VALA_LITERAL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_LITERAL, ValaLiteral))
#define VALA_LITERAL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_LITERAL, ValaLiteralClass))
#define VALA_IS_LITERAL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_LITERAL))
#define VALA_IS_LITERAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_LITERAL))
#define VALA_LITERAL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_LITERAL, ValaLiteralClass))

typedef struct _ValaLiteral ValaLiteral;
typedef struct _ValaLiteralClass ValaLiteralClass;

#define VALA_TYPE_BOOLEAN_LITERAL (vala_boolean_literal_get_type ())
#define VALA_BOOLEAN_LITERAL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_BOOLEAN_LITERAL, ValaBooleanLiteral))
#define VALA_BOOLEAN_LITERAL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_BOOLEAN_LITERAL, ValaBooleanLiteralClass))
#define VALA_IS_BOOLEAN_LITERAL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_BOOLEAN_LITERAL))
#define VALA_IS_BOOLEAN_LITERAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_BOOLEAN_LITERAL))
#define VALA_BOOLEAN_LITERAL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_BOOLEAN_LITERAL, ValaBooleanLiteralClass))

typedef struct _ValaBooleanLiteral ValaBooleanLiteral;
typedef struct _ValaBooleanLiteralClass ValaBooleanLiteralClass;

#define VALA_TYPE_BREAK_STATEMENT (vala_break_statement_get_type ())
#define VALA_BREAK_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_BREAK_STATEMENT, ValaBreakStatement))
#define VALA_BREAK_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_BREAK_STATEMENT, ValaBreakStatementClass))
#define VALA_IS_BREAK_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_BREAK_STATEMENT))
#define VALA_IS_BREAK_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_BREAK_STATEMENT))
#define VALA_BREAK_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_BREAK_STATEMENT, ValaBreakStatementClass))

typedef struct _ValaBreakStatement ValaBreakStatement;
typedef struct _ValaBreakStatementClass ValaBreakStatementClass;

#define VALA_TYPE_UNARY_OPERATOR (vala_unary_operator_get_type ())

#define VALA_TYPE_UNARY_EXPRESSION (vala_unary_expression_get_type ())
#define VALA_UNARY_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_UNARY_EXPRESSION, ValaUnaryExpression))
#define VALA_UNARY_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_UNARY_EXPRESSION, ValaUnaryExpressionClass))
#define VALA_IS_UNARY_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_UNARY_EXPRESSION))
#define VALA_IS_UNARY_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_UNARY_EXPRESSION))
#define VALA_UNARY_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_UNARY_EXPRESSION, ValaUnaryExpressionClass))

typedef struct _ValaUnaryExpression ValaUnaryExpression;
typedef struct _ValaUnaryExpressionClass ValaUnaryExpressionClass;

#define VALA_TYPE_IF_STATEMENT (vala_if_statement_get_type ())
#define VALA_IF_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_IF_STATEMENT, ValaIfStatement))
#define VALA_IF_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_IF_STATEMENT, ValaIfStatementClass))
#define VALA_IS_IF_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_IF_STATEMENT))
#define VALA_IS_IF_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_IF_STATEMENT))
#define VALA_IF_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_IF_STATEMENT, ValaIfStatementClass))

typedef struct _ValaIfStatement ValaIfStatement;
typedef struct _ValaIfStatementClass ValaIfStatementClass;

#define VALA_TYPE_LOOP (vala_loop_get_type ())
#define VALA_LOOP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_LOOP, ValaLoop))
#define VALA_LOOP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_LOOP, ValaLoopClass))
#define VALA_IS_LOOP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_LOOP))
#define VALA_IS_LOOP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_LOOP))
#define VALA_LOOP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_LOOP, ValaLoopClass))

typedef struct _ValaLoop ValaLoop;
typedef struct _ValaLoopClass ValaLoopClass;

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

struct _ValaWhileStatement {
	ValaCodeNode parent_instance;
	ValaWhileStatementPrivate * priv;
};

struct _ValaWhileStatementClass {
	ValaCodeNodeClass parent_class;
};

struct _ValaWhileStatementPrivate {
	ValaExpression* _condition;
	ValaBlock* _body;
};

typedef enum  {
	VALA_UNARY_OPERATOR_NONE,
	VALA_UNARY_OPERATOR_PLUS,
	VALA_UNARY_OPERATOR_MINUS,
	VALA_UNARY_OPERATOR_LOGICAL_NEGATION,
	VALA_UNARY_OPERATOR_BITWISE_COMPLEMENT,
	VALA_UNARY_OPERATOR_INCREMENT,
	VALA_UNARY_OPERATOR_DECREMENT,
	VALA_UNARY_OPERATOR_REF,
	VALA_UNARY_OPERATOR_OUT
} ValaUnaryOperator;


static gpointer vala_while_statement_parent_class = NULL;
static ValaStatementIface* vala_while_statement_vala_statement_parent_iface = NULL;

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
GType vala_while_statement_get_type (void) G_GNUC_CONST;
GType vala_block_get_type (void) G_GNUC_CONST;
#define VALA_WHILE_STATEMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_WHILE_STATEMENT, ValaWhileStatementPrivate))
enum  {
	VALA_WHILE_STATEMENT_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaWhileStatement* vala_while_statement_new (ValaExpression* condition, ValaBlock* body, ValaSourceReference* source_reference);
ValaWhileStatement* vala_while_statement_construct (GType object_type, ValaExpression* condition, ValaBlock* body, ValaSourceReference* source_reference);
ValaCodeNode* vala_code_node_construct (GType object_type);
void vala_while_statement_set_body (ValaWhileStatement* self, ValaBlock* value);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
void vala_while_statement_set_condition (ValaWhileStatement* self, ValaExpression* value);
static void vala_while_statement_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_while_statement (ValaCodeVisitor* self, ValaWhileStatement* stmt);
static void vala_while_statement_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor);
ValaExpression* vala_while_statement_get_condition (ValaWhileStatement* self);
void vala_code_node_accept (ValaCodeNode* self, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_end_full_expression (ValaCodeVisitor* self, ValaExpression* expr);
ValaBlock* vala_while_statement_get_body (ValaWhileStatement* self);
static gboolean vala_while_statement_always_true (ValaWhileStatement* self, ValaExpression* condition);
GType vala_literal_get_type (void) G_GNUC_CONST;
GType vala_boolean_literal_get_type (void) G_GNUC_CONST;
gboolean vala_boolean_literal_get_value (ValaBooleanLiteral* self);
static gboolean vala_while_statement_always_false (ValaWhileStatement* self, ValaExpression* condition);
static gboolean vala_while_statement_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer);
void vala_block_insert_statement (ValaBlock* self, gint index, ValaStatement* stmt);
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
ValaBreakStatement* vala_break_statement_new (ValaSourceReference* source);
ValaBreakStatement* vala_break_statement_construct (GType object_type, ValaSourceReference* source);
GType vala_break_statement_get_type (void) G_GNUC_CONST;
GType vala_unary_operator_get_type (void) G_GNUC_CONST;
ValaUnaryExpression* vala_unary_expression_new (ValaUnaryOperator op, ValaExpression* _inner, ValaSourceReference* source);
ValaUnaryExpression* vala_unary_expression_construct (GType object_type, ValaUnaryOperator op, ValaExpression* _inner, ValaSourceReference* source);
GType vala_unary_expression_get_type (void) G_GNUC_CONST;
ValaBlock* vala_block_new (ValaSourceReference* source_reference);
ValaBlock* vala_block_construct (GType object_type, ValaSourceReference* source_reference);
void vala_block_add_statement (ValaBlock* self, ValaStatement* stmt);
ValaIfStatement* vala_if_statement_new (ValaExpression* cond, ValaBlock* true_stmt, ValaBlock* false_stmt, ValaSourceReference* source);
ValaIfStatement* vala_if_statement_construct (GType object_type, ValaExpression* cond, ValaBlock* true_stmt, ValaBlock* false_stmt, ValaSourceReference* source);
GType vala_if_statement_get_type (void) G_GNUC_CONST;
ValaLoop* vala_loop_new (ValaBlock* body, ValaSourceReference* source_reference);
ValaLoop* vala_loop_construct (GType object_type, ValaBlock* body, ValaSourceReference* source_reference);
GType vala_loop_get_type (void) G_GNUC_CONST;
ValaCodeNode* vala_code_node_get_parent_node (ValaCodeNode* self);
void vala_block_replace_statement (ValaBlock* self, ValaStatement* old_stmt, ValaStatement* new_stmt);
gboolean vala_code_node_check (ValaCodeNode* self, ValaSemanticAnalyzer* analyzer);
void vala_code_node_set_parent_node (ValaCodeNode* self, ValaCodeNode* value);
static void vala_while_statement_finalize (ValaCodeNode* obj);



/**
 * Creates a new while statement.
 *
 * @param cond   loop condition
 * @param body   loop body
 * @param source reference to source code
 * @return       newly created while statement
 */
ValaWhileStatement* vala_while_statement_construct (GType object_type, ValaExpression* condition, ValaBlock* body, ValaSourceReference* source_reference) {
	ValaWhileStatement* self = NULL;
	g_return_val_if_fail (condition != NULL, NULL);
	g_return_val_if_fail (body != NULL, NULL);
	self = (ValaWhileStatement*) vala_code_node_construct (object_type);
	vala_while_statement_set_body (self, body);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	vala_while_statement_set_condition (self, condition);
	return self;
}


ValaWhileStatement* vala_while_statement_new (ValaExpression* condition, ValaBlock* body, ValaSourceReference* source_reference) {
	return vala_while_statement_construct (VALA_TYPE_WHILE_STATEMENT, condition, body, source_reference);
}


static void vala_while_statement_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaWhileStatement * self;
	self = (ValaWhileStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_while_statement (visitor, self);
}


static void vala_while_statement_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaWhileStatement * self;
	self = (ValaWhileStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_node_accept ((ValaCodeNode*) vala_while_statement_get_condition (self), visitor);
	vala_code_visitor_visit_end_full_expression (visitor, vala_while_statement_get_condition (self));
	vala_code_node_accept ((ValaCodeNode*) vala_while_statement_get_body (self), visitor);
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean vala_while_statement_always_true (ValaWhileStatement* self, ValaExpression* condition) {
	gboolean result = FALSE;
	ValaExpression* _tmp0_;
	ValaBooleanLiteral* literal;
	gboolean _tmp1_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (condition != NULL, FALSE);
	literal = _vala_code_node_ref0 ((_tmp0_ = condition, VALA_IS_BOOLEAN_LITERAL (_tmp0_) ? ((ValaBooleanLiteral*) _tmp0_) : NULL));
	if (literal != NULL) {
		_tmp1_ = vala_boolean_literal_get_value (literal);
	} else {
		_tmp1_ = FALSE;
	}
	result = _tmp1_;
	_vala_code_node_unref0 (literal);
	return result;
}


static gboolean vala_while_statement_always_false (ValaWhileStatement* self, ValaExpression* condition) {
	gboolean result = FALSE;
	ValaExpression* _tmp0_;
	ValaBooleanLiteral* literal;
	gboolean _tmp1_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (condition != NULL, FALSE);
	literal = _vala_code_node_ref0 ((_tmp0_ = condition, VALA_IS_BOOLEAN_LITERAL (_tmp0_) ? ((ValaBooleanLiteral*) _tmp0_) : NULL));
	if (literal != NULL) {
		_tmp1_ = !vala_boolean_literal_get_value (literal);
	} else {
		_tmp1_ = FALSE;
	}
	result = _tmp1_;
	_vala_code_node_unref0 (literal);
	return result;
}


static gboolean vala_while_statement_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer) {
	ValaWhileStatement * self;
	gboolean result = FALSE;
	ValaLoop* loop;
	ValaBlock* parent_block;
	self = (ValaWhileStatement*) base;
	g_return_val_if_fail (analyzer != NULL, FALSE);
	if (vala_while_statement_always_true (self, vala_while_statement_get_condition (self))) {
	} else {
		if (vala_while_statement_always_false (self, vala_while_statement_get_condition (self))) {
			ValaBreakStatement* _tmp0_;
			vala_block_insert_statement (vala_while_statement_get_body (self), 0, (ValaStatement*) (_tmp0_ = vala_break_statement_new (vala_code_node_get_source_reference ((ValaCodeNode*) vala_while_statement_get_condition (self)))));
			_vala_code_node_unref0 (_tmp0_);
		} else {
			ValaUnaryExpression* if_condition;
			ValaBlock* true_block;
			ValaBreakStatement* _tmp1_;
			ValaIfStatement* if_stmt;
			if_condition = vala_unary_expression_new (VALA_UNARY_OPERATOR_LOGICAL_NEGATION, vala_while_statement_get_condition (self), vala_code_node_get_source_reference ((ValaCodeNode*) vala_while_statement_get_condition (self)));
			true_block = vala_block_new (vala_code_node_get_source_reference ((ValaCodeNode*) vala_while_statement_get_condition (self)));
			vala_block_add_statement (true_block, (ValaStatement*) (_tmp1_ = vala_break_statement_new (vala_code_node_get_source_reference ((ValaCodeNode*) vala_while_statement_get_condition (self)))));
			_vala_code_node_unref0 (_tmp1_);
			if_stmt = vala_if_statement_new ((ValaExpression*) if_condition, true_block, NULL, vala_code_node_get_source_reference ((ValaCodeNode*) vala_while_statement_get_condition (self)));
			vala_block_insert_statement (vala_while_statement_get_body (self), 0, (ValaStatement*) if_stmt);
			_vala_code_node_unref0 (if_stmt);
			_vala_code_node_unref0 (true_block);
			_vala_code_node_unref0 (if_condition);
		}
	}
	loop = vala_loop_new (vala_while_statement_get_body (self), vala_code_node_get_source_reference ((ValaCodeNode*) self));
	parent_block = _vala_code_node_ref0 (VALA_BLOCK (vala_code_node_get_parent_node ((ValaCodeNode*) self)));
	vala_block_replace_statement (parent_block, (ValaStatement*) self, (ValaStatement*) loop);
	result = vala_code_node_check ((ValaCodeNode*) loop, analyzer);
	_vala_code_node_unref0 (parent_block);
	_vala_code_node_unref0 (loop);
	return result;
}


ValaExpression* vala_while_statement_get_condition (ValaWhileStatement* self) {
	ValaExpression* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_condition;
	return result;
}


void vala_while_statement_set_condition (ValaWhileStatement* self, ValaExpression* value) {
	ValaExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_condition = (_tmp0_ = _vala_code_node_ref0 (value), _vala_code_node_unref0 (self->priv->_condition), _tmp0_);
	vala_code_node_set_parent_node ((ValaCodeNode*) self->priv->_condition, (ValaCodeNode*) self);
}


ValaBlock* vala_while_statement_get_body (ValaWhileStatement* self) {
	ValaBlock* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_body;
	return result;
}


void vala_while_statement_set_body (ValaWhileStatement* self, ValaBlock* value) {
	ValaBlock* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_body = (_tmp0_ = _vala_code_node_ref0 (value), _vala_code_node_unref0 (self->priv->_body), _tmp0_);
	vala_code_node_set_parent_node ((ValaCodeNode*) self->priv->_body, (ValaCodeNode*) self);
}


static void vala_while_statement_class_init (ValaWhileStatementClass * klass) {
	vala_while_statement_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->finalize = vala_while_statement_finalize;
	g_type_class_add_private (klass, sizeof (ValaWhileStatementPrivate));
	VALA_CODE_NODE_CLASS (klass)->accept = vala_while_statement_real_accept;
	VALA_CODE_NODE_CLASS (klass)->accept_children = vala_while_statement_real_accept_children;
	VALA_CODE_NODE_CLASS (klass)->check = vala_while_statement_real_check;
}


static void vala_while_statement_vala_statement_interface_init (ValaStatementIface * iface) {
	vala_while_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void vala_while_statement_instance_init (ValaWhileStatement * self) {
	self->priv = VALA_WHILE_STATEMENT_GET_PRIVATE (self);
}


static void vala_while_statement_finalize (ValaCodeNode* obj) {
	ValaWhileStatement * self;
	self = VALA_WHILE_STATEMENT (obj);
	_vala_code_node_unref0 (self->priv->_condition);
	_vala_code_node_unref0 (self->priv->_body);
	VALA_CODE_NODE_CLASS (vala_while_statement_parent_class)->finalize (obj);
}


/**
 * Represents a while iteration statement in the source code.
 */
GType vala_while_statement_get_type (void) {
	static volatile gsize vala_while_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_while_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaWhileStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_while_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaWhileStatement), 0, (GInstanceInitFunc) vala_while_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_while_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_while_statement_type_id;
		vala_while_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaWhileStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_while_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		g_once_init_leave (&vala_while_statement_type_id__volatile, vala_while_statement_type_id);
	}
	return vala_while_statement_type_id__volatile;
}




