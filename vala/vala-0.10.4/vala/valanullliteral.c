/* valanullliteral.c generated by valac, the Vala compiler
 * generated from valanullliteral.vala, do not modify */

/* valanullliteral.vala
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
typedef struct _ValaExpressionPrivate ValaExpressionPrivate;

#define VALA_TYPE_LITERAL (vala_literal_get_type ())
#define VALA_LITERAL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_LITERAL, ValaLiteral))
#define VALA_LITERAL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_LITERAL, ValaLiteralClass))
#define VALA_IS_LITERAL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_LITERAL))
#define VALA_IS_LITERAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_LITERAL))
#define VALA_LITERAL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_LITERAL, ValaLiteralClass))

typedef struct _ValaLiteral ValaLiteral;
typedef struct _ValaLiteralClass ValaLiteralClass;
typedef struct _ValaLiteralPrivate ValaLiteralPrivate;

#define VALA_TYPE_NULL_LITERAL (vala_null_literal_get_type ())
#define VALA_NULL_LITERAL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_NULL_LITERAL, ValaNullLiteral))
#define VALA_NULL_LITERAL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_NULL_LITERAL, ValaNullLiteralClass))
#define VALA_IS_NULL_LITERAL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_NULL_LITERAL))
#define VALA_IS_NULL_LITERAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_NULL_LITERAL))
#define VALA_NULL_LITERAL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_NULL_LITERAL, ValaNullLiteralClass))

typedef struct _ValaNullLiteral ValaNullLiteral;
typedef struct _ValaNullLiteralClass ValaNullLiteralClass;
typedef struct _ValaNullLiteralPrivate ValaNullLiteralPrivate;

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_REFERENCE_TYPE (vala_reference_type_get_type ())
#define VALA_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceType))
#define VALA_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))
#define VALA_IS_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_REFERENCE_TYPE))
#define VALA_IS_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_REFERENCE_TYPE))
#define VALA_REFERENCE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))

typedef struct _ValaReferenceType ValaReferenceType;
typedef struct _ValaReferenceTypeClass ValaReferenceTypeClass;

#define VALA_TYPE_NULL_TYPE (vala_null_type_get_type ())
#define VALA_NULL_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_NULL_TYPE, ValaNullType))
#define VALA_NULL_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_NULL_TYPE, ValaNullTypeClass))
#define VALA_IS_NULL_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_NULL_TYPE))
#define VALA_IS_NULL_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_NULL_TYPE))
#define VALA_NULL_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_NULL_TYPE, ValaNullTypeClass))

typedef struct _ValaNullType ValaNullType;
typedef struct _ValaNullTypeClass ValaNullTypeClass;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

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

struct _ValaExpression {
	ValaCodeNode parent_instance;
	ValaExpressionPrivate * priv;
	ValaArrayList* temp_vars;
};

struct _ValaExpressionClass {
	ValaCodeNodeClass parent_class;
	gboolean (*is_constant) (ValaExpression* self);
	gboolean (*is_pure) (ValaExpression* self);
	gboolean (*is_non_null) (ValaExpression* self);
};

struct _ValaLiteral {
	ValaExpression parent_instance;
	ValaLiteralPrivate * priv;
};

struct _ValaLiteralClass {
	ValaExpressionClass parent_class;
};

struct _ValaNullLiteral {
	ValaLiteral parent_instance;
	ValaNullLiteralPrivate * priv;
};

struct _ValaNullLiteralClass {
	ValaLiteralClass parent_class;
};


static gpointer vala_null_literal_parent_class = NULL;

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
GType vala_literal_get_type (void) G_GNUC_CONST;
GType vala_null_literal_get_type (void) G_GNUC_CONST;
enum  {
	VALA_NULL_LITERAL_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaNullLiteral* vala_null_literal_new (ValaSourceReference* source);
ValaNullLiteral* vala_null_literal_construct (GType object_type, ValaSourceReference* source);
ValaLiteral* vala_literal_construct (GType object_type);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
static void vala_null_literal_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_null_literal (ValaCodeVisitor* self, ValaNullLiteral* lit);
void vala_code_visitor_visit_expression (ValaCodeVisitor* self, ValaExpression* expr);
static char* vala_null_literal_real_to_string (ValaCodeNode* base);
static gboolean vala_null_literal_real_is_pure (ValaExpression* base);
static gboolean vala_null_literal_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer);
gboolean vala_code_node_get_checked (ValaCodeNode* self);
gboolean vala_code_node_get_error (ValaCodeNode* self);
void vala_code_node_set_checked (ValaCodeNode* self, gboolean value);
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
ValaNullType* vala_null_type_new (ValaSourceReference* source_reference);
ValaNullType* vala_null_type_construct (GType object_type, ValaSourceReference* source_reference);
GType vala_reference_type_get_type (void) G_GNUC_CONST;
GType vala_null_type_get_type (void) G_GNUC_CONST;
void vala_expression_set_value_type (ValaExpression* self, ValaDataType* value);
static void vala_null_literal_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen);



/**
 * Creates a new null literal.
 *
 * @param source reference to source code
 * @return       newly created null literal
 */
ValaNullLiteral* vala_null_literal_construct (GType object_type, ValaSourceReference* source) {
	ValaNullLiteral* self = NULL;
	self = (ValaNullLiteral*) vala_literal_construct (object_type);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source);
	return self;
}


ValaNullLiteral* vala_null_literal_new (ValaSourceReference* source) {
	return vala_null_literal_construct (VALA_TYPE_NULL_LITERAL, source);
}


static void vala_null_literal_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaNullLiteral * self;
	self = (ValaNullLiteral*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_null_literal (visitor, self);
	vala_code_visitor_visit_expression (visitor, (ValaExpression*) self);
}


static char* vala_null_literal_real_to_string (ValaCodeNode* base) {
	ValaNullLiteral * self;
	char* result = NULL;
	self = (ValaNullLiteral*) base;
	result = g_strdup ("null");
	return result;
}


static gboolean vala_null_literal_real_is_pure (ValaExpression* base) {
	ValaNullLiteral * self;
	gboolean result = FALSE;
	self = (ValaNullLiteral*) base;
	result = TRUE;
	return result;
}


static gboolean vala_null_literal_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer) {
	ValaNullLiteral * self;
	gboolean result = FALSE;
	ValaNullType* _tmp0_;
	self = (ValaNullLiteral*) base;
	g_return_val_if_fail (analyzer != NULL, FALSE);
	if (vala_code_node_get_checked ((ValaCodeNode*) self)) {
		result = !vala_code_node_get_error ((ValaCodeNode*) self);
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	vala_expression_set_value_type ((ValaExpression*) self, (ValaDataType*) (_tmp0_ = vala_null_type_new (vala_code_node_get_source_reference ((ValaCodeNode*) self))));
	_vala_code_node_unref0 (_tmp0_);
	result = !vala_code_node_get_error ((ValaCodeNode*) self);
	return result;
}


static void vala_null_literal_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen) {
	ValaNullLiteral * self;
	self = (ValaNullLiteral*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_visitor_visit_null_literal ((ValaCodeVisitor*) codegen, self);
	vala_code_visitor_visit_expression ((ValaCodeVisitor*) codegen, (ValaExpression*) self);
}


static void vala_null_literal_class_init (ValaNullLiteralClass * klass) {
	vala_null_literal_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->accept = vala_null_literal_real_accept;
	VALA_CODE_NODE_CLASS (klass)->to_string = vala_null_literal_real_to_string;
	VALA_EXPRESSION_CLASS (klass)->is_pure = vala_null_literal_real_is_pure;
	VALA_CODE_NODE_CLASS (klass)->check = vala_null_literal_real_check;
	VALA_CODE_NODE_CLASS (klass)->emit = vala_null_literal_real_emit;
}


static void vala_null_literal_instance_init (ValaNullLiteral * self) {
}


/**
 * Represents a literal `null` in the source code.
 */
GType vala_null_literal_get_type (void) {
	static volatile gsize vala_null_literal_type_id__volatile = 0;
	if (g_once_init_enter (&vala_null_literal_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaNullLiteralClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_null_literal_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaNullLiteral), 0, (GInstanceInitFunc) vala_null_literal_instance_init, NULL };
		GType vala_null_literal_type_id;
		vala_null_literal_type_id = g_type_register_static (VALA_TYPE_LITERAL, "ValaNullLiteral", &g_define_type_info, 0);
		g_once_init_leave (&vala_null_literal_type_id__volatile, vala_null_literal_type_id);
	}
	return vala_null_literal_type_id__volatile;
}




