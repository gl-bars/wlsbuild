/* valaswitchlabel.c generated by valac, the Vala compiler
 * generated from valaswitchlabel.vala, do not modify */

/* valaswitchlabel.vala
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

#define VALA_TYPE_SWITCH_LABEL (vala_switch_label_get_type ())
#define VALA_SWITCH_LABEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SWITCH_LABEL, ValaSwitchLabel))
#define VALA_SWITCH_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SWITCH_LABEL, ValaSwitchLabelClass))
#define VALA_IS_SWITCH_LABEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SWITCH_LABEL))
#define VALA_IS_SWITCH_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SWITCH_LABEL))
#define VALA_SWITCH_LABEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SWITCH_LABEL, ValaSwitchLabelClass))

typedef struct _ValaSwitchLabel ValaSwitchLabel;
typedef struct _ValaSwitchLabelClass ValaSwitchLabelClass;
typedef struct _ValaSwitchLabelPrivate ValaSwitchLabelPrivate;

#define VALA_TYPE_BLOCK (vala_block_get_type ())
#define VALA_BLOCK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_BLOCK, ValaBlock))
#define VALA_BLOCK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_BLOCK, ValaBlockClass))
#define VALA_IS_BLOCK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_BLOCK))
#define VALA_IS_BLOCK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_BLOCK))
#define VALA_BLOCK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_BLOCK, ValaBlockClass))

typedef struct _ValaBlock ValaBlock;
typedef struct _ValaBlockClass ValaBlockClass;

#define VALA_TYPE_SWITCH_SECTION (vala_switch_section_get_type ())
#define VALA_SWITCH_SECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SWITCH_SECTION, ValaSwitchSection))
#define VALA_SWITCH_SECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SWITCH_SECTION, ValaSwitchSectionClass))
#define VALA_IS_SWITCH_SECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SWITCH_SECTION))
#define VALA_IS_SWITCH_SECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SWITCH_SECTION))
#define VALA_SWITCH_SECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SWITCH_SECTION, ValaSwitchSectionClass))

typedef struct _ValaSwitchSection ValaSwitchSection;
typedef struct _ValaSwitchSectionClass ValaSwitchSectionClass;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_SWITCH_STATEMENT (vala_switch_statement_get_type ())
#define VALA_SWITCH_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SWITCH_STATEMENT, ValaSwitchStatement))
#define VALA_SWITCH_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SWITCH_STATEMENT, ValaSwitchStatementClass))
#define VALA_IS_SWITCH_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SWITCH_STATEMENT))
#define VALA_IS_SWITCH_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SWITCH_STATEMENT))
#define VALA_SWITCH_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SWITCH_STATEMENT, ValaSwitchStatementClass))

typedef struct _ValaSwitchStatement ValaSwitchStatement;
typedef struct _ValaSwitchStatementClass ValaSwitchStatementClass;
#define _g_free0(var) (var = (g_free (var), NULL))

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

struct _ValaSwitchLabel {
	ValaCodeNode parent_instance;
	ValaSwitchLabelPrivate * priv;
};

struct _ValaSwitchLabelClass {
	ValaCodeNodeClass parent_class;
};

struct _ValaSwitchLabelPrivate {
	ValaExpression* _expression;
	ValaSwitchSection* _section;
};


static gpointer vala_switch_label_parent_class = NULL;

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
GType vala_switch_label_get_type (void) G_GNUC_CONST;
GType vala_block_get_type (void) G_GNUC_CONST;
GType vala_switch_section_get_type (void) G_GNUC_CONST;
#define VALA_SWITCH_LABEL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_SWITCH_LABEL, ValaSwitchLabelPrivate))
enum  {
	VALA_SWITCH_LABEL_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaSwitchLabel* vala_switch_label_new (ValaExpression* expr, ValaSourceReference* source);
ValaSwitchLabel* vala_switch_label_construct (GType object_type, ValaExpression* expr, ValaSourceReference* source);
ValaCodeNode* vala_code_node_construct (GType object_type);
void vala_switch_label_set_expression (ValaSwitchLabel* self, ValaExpression* value);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
ValaSwitchLabel* vala_switch_label_new_with_default (ValaSourceReference* source);
ValaSwitchLabel* vala_switch_label_construct_with_default (GType object_type, ValaSourceReference* source);
static void vala_switch_label_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_switch_label (ValaCodeVisitor* self, ValaSwitchLabel* label);
static void vala_switch_label_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor);
ValaExpression* vala_switch_label_get_expression (ValaSwitchLabel* self);
void vala_code_node_accept (ValaCodeNode* self, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_end_full_expression (ValaCodeVisitor* self, ValaExpression* expr);
static gboolean vala_switch_label_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer);
gboolean vala_code_node_check (ValaCodeNode* self, ValaSemanticAnalyzer* analyzer);
ValaSwitchSection* vala_switch_label_get_section (ValaSwitchLabel* self);
ValaCodeNode* vala_code_node_get_parent_node (ValaCodeNode* self);
GType vala_switch_statement_get_type (void) G_GNUC_CONST;
gboolean vala_expression_is_constant (ValaExpression* self);
void vala_code_node_set_error (ValaCodeNode* self, gboolean value);
void vala_report_error (ValaSourceReference* source, const char* message);
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
ValaDataType* vala_expression_get_value_type (ValaExpression* self);
gboolean vala_data_type_compatible (ValaDataType* self, ValaDataType* target_type);
ValaExpression* vala_switch_statement_get_expression (ValaSwitchStatement* self);
char* vala_code_node_to_string (ValaCodeNode* self);
static void vala_switch_label_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen);
void vala_switch_label_set_section (ValaSwitchLabel* self, ValaSwitchSection* value);
static void vala_switch_label_finalize (ValaCodeNode* obj);



/**
 * Creates a new switch case label.
 *
 * @param expr   label expression
 * @param source reference to source code
 * @return       newly created switch case label
 */
ValaSwitchLabel* vala_switch_label_construct (GType object_type, ValaExpression* expr, ValaSourceReference* source) {
	ValaSwitchLabel* self = NULL;
	g_return_val_if_fail (expr != NULL, NULL);
	self = (ValaSwitchLabel*) vala_code_node_construct (object_type);
	vala_switch_label_set_expression (self, expr);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source);
	return self;
}


ValaSwitchLabel* vala_switch_label_new (ValaExpression* expr, ValaSourceReference* source) {
	return vala_switch_label_construct (VALA_TYPE_SWITCH_LABEL, expr, source);
}


/**
 * Creates a new switch default label.
 *
 * @param source reference to source code
 * @return       newly created switch default label
 */
ValaSwitchLabel* vala_switch_label_construct_with_default (GType object_type, ValaSourceReference* source) {
	ValaSwitchLabel* self = NULL;
	self = (ValaSwitchLabel*) vala_code_node_construct (object_type);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source);
	return self;
}


ValaSwitchLabel* vala_switch_label_new_with_default (ValaSourceReference* source) {
	return vala_switch_label_construct_with_default (VALA_TYPE_SWITCH_LABEL, source);
}


static void vala_switch_label_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaSwitchLabel * self;
	self = (ValaSwitchLabel*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_switch_label (visitor, self);
}


static void vala_switch_label_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaSwitchLabel * self;
	self = (ValaSwitchLabel*) base;
	g_return_if_fail (visitor != NULL);
	if (self->priv->_expression != NULL) {
		vala_code_node_accept ((ValaCodeNode*) self->priv->_expression, visitor);
		vala_code_visitor_visit_end_full_expression (visitor, self->priv->_expression);
	}
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean vala_switch_label_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer) {
	ValaSwitchLabel * self;
	gboolean result = FALSE;
	self = (ValaSwitchLabel*) base;
	g_return_val_if_fail (analyzer != NULL, FALSE);
	if (self->priv->_expression != NULL) {
		ValaSwitchStatement* switch_statement;
		vala_code_node_check ((ValaCodeNode*) self->priv->_expression, analyzer);
		switch_statement = _vala_code_node_ref0 (VALA_SWITCH_STATEMENT (vala_code_node_get_parent_node ((ValaCodeNode*) self->priv->_section)));
		if (!vala_expression_is_constant (self->priv->_expression)) {
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			vala_report_error (vala_code_node_get_source_reference ((ValaCodeNode*) self->priv->_expression), "Expression must be constant");
			result = FALSE;
			_vala_code_node_unref0 (switch_statement);
			return result;
		}
		if (!vala_data_type_compatible (vala_expression_get_value_type (self->priv->_expression), vala_expression_get_value_type (vala_switch_statement_get_expression (switch_statement)))) {
			char* _tmp0_;
			char* _tmp1_;
			char* _tmp2_;
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			vala_report_error (vala_code_node_get_source_reference ((ValaCodeNode*) self->priv->_expression), _tmp2_ = g_strdup_printf ("Cannot convert from `%s' to `%s'", _tmp0_ = vala_code_node_to_string ((ValaCodeNode*) vala_expression_get_value_type (self->priv->_expression)), _tmp1_ = vala_code_node_to_string ((ValaCodeNode*) vala_expression_get_value_type (vala_switch_statement_get_expression (switch_statement)))));
			_g_free0 (_tmp2_);
			_g_free0 (_tmp1_);
			_g_free0 (_tmp0_);
			result = FALSE;
			_vala_code_node_unref0 (switch_statement);
			return result;
		}
		_vala_code_node_unref0 (switch_statement);
	}
	result = TRUE;
	return result;
}


static void vala_switch_label_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen) {
	ValaSwitchLabel * self;
	self = (ValaSwitchLabel*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_visitor_visit_switch_label ((ValaCodeVisitor*) codegen, self);
}


ValaExpression* vala_switch_label_get_expression (ValaSwitchLabel* self) {
	ValaExpression* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_expression;
	return result;
}


void vala_switch_label_set_expression (ValaSwitchLabel* self, ValaExpression* value) {
	ValaExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_expression = (_tmp0_ = _vala_code_node_ref0 (value), _vala_code_node_unref0 (self->priv->_expression), _tmp0_);
}


ValaSwitchSection* vala_switch_label_get_section (ValaSwitchLabel* self) {
	ValaSwitchSection* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_section;
	return result;
}


void vala_switch_label_set_section (ValaSwitchLabel* self, ValaSwitchSection* value) {
	g_return_if_fail (self != NULL);
	self->priv->_section = value;
}


static void vala_switch_label_class_init (ValaSwitchLabelClass * klass) {
	vala_switch_label_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->finalize = vala_switch_label_finalize;
	g_type_class_add_private (klass, sizeof (ValaSwitchLabelPrivate));
	VALA_CODE_NODE_CLASS (klass)->accept = vala_switch_label_real_accept;
	VALA_CODE_NODE_CLASS (klass)->accept_children = vala_switch_label_real_accept_children;
	VALA_CODE_NODE_CLASS (klass)->check = vala_switch_label_real_check;
	VALA_CODE_NODE_CLASS (klass)->emit = vala_switch_label_real_emit;
}


static void vala_switch_label_instance_init (ValaSwitchLabel * self) {
	self->priv = VALA_SWITCH_LABEL_GET_PRIVATE (self);
}


static void vala_switch_label_finalize (ValaCodeNode* obj) {
	ValaSwitchLabel * self;
	self = VALA_SWITCH_LABEL (obj);
	_vala_code_node_unref0 (self->priv->_expression);
	VALA_CODE_NODE_CLASS (vala_switch_label_parent_class)->finalize (obj);
}


/**
 * Represents a switch label in the source code.
 */
GType vala_switch_label_get_type (void) {
	static volatile gsize vala_switch_label_type_id__volatile = 0;
	if (g_once_init_enter (&vala_switch_label_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaSwitchLabelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_switch_label_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaSwitchLabel), 0, (GInstanceInitFunc) vala_switch_label_instance_init, NULL };
		GType vala_switch_label_type_id;
		vala_switch_label_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaSwitchLabel", &g_define_type_info, 0);
		g_once_init_leave (&vala_switch_label_type_id__volatile, vala_switch_label_type_id);
	}
	return vala_switch_label_type_id__volatile;
}




