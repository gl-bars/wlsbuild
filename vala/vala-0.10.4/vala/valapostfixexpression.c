/* valapostfixexpression.c generated by valac, the Vala compiler
 * generated from valapostfixexpression.vala, do not modify */

/* valapostfixexpression.vala
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

#define VALA_TYPE_POSTFIX_EXPRESSION (vala_postfix_expression_get_type ())
#define VALA_POSTFIX_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_POSTFIX_EXPRESSION, ValaPostfixExpression))
#define VALA_POSTFIX_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_POSTFIX_EXPRESSION, ValaPostfixExpressionClass))
#define VALA_IS_POSTFIX_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_POSTFIX_EXPRESSION))
#define VALA_IS_POSTFIX_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_POSTFIX_EXPRESSION))
#define VALA_POSTFIX_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_POSTFIX_EXPRESSION, ValaPostfixExpressionClass))

typedef struct _ValaPostfixExpression ValaPostfixExpression;
typedef struct _ValaPostfixExpressionClass ValaPostfixExpressionClass;
typedef struct _ValaPostfixExpressionPrivate ValaPostfixExpressionPrivate;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_VALUE_TYPE (vala_value_type_get_type ())
#define VALA_VALUE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VALUE_TYPE, ValaValueType))
#define VALA_VALUE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VALUE_TYPE, ValaValueTypeClass))
#define VALA_IS_VALUE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VALUE_TYPE))
#define VALA_IS_VALUE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VALUE_TYPE))
#define VALA_VALUE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VALUE_TYPE, ValaValueTypeClass))

typedef struct _ValaValueType ValaValueType;
typedef struct _ValaValueTypeClass ValaValueTypeClass;

#define VALA_TYPE_INTEGER_TYPE (vala_integer_type_get_type ())
#define VALA_INTEGER_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_INTEGER_TYPE, ValaIntegerType))
#define VALA_INTEGER_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_INTEGER_TYPE, ValaIntegerTypeClass))
#define VALA_IS_INTEGER_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_INTEGER_TYPE))
#define VALA_IS_INTEGER_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_INTEGER_TYPE))
#define VALA_INTEGER_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_INTEGER_TYPE, ValaIntegerTypeClass))

typedef struct _ValaIntegerType ValaIntegerType;
typedef struct _ValaIntegerTypeClass ValaIntegerTypeClass;

#define VALA_TYPE_FLOATING_TYPE (vala_floating_type_get_type ())
#define VALA_FLOATING_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_FLOATING_TYPE, ValaFloatingType))
#define VALA_FLOATING_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_FLOATING_TYPE, ValaFloatingTypeClass))
#define VALA_IS_FLOATING_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_FLOATING_TYPE))
#define VALA_IS_FLOATING_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_FLOATING_TYPE))
#define VALA_FLOATING_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_FLOATING_TYPE, ValaFloatingTypeClass))

typedef struct _ValaFloatingType ValaFloatingType;
typedef struct _ValaFloatingTypeClass ValaFloatingTypeClass;

#define VALA_TYPE_POINTER_TYPE (vala_pointer_type_get_type ())
#define VALA_POINTER_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_POINTER_TYPE, ValaPointerType))
#define VALA_POINTER_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_POINTER_TYPE, ValaPointerTypeClass))
#define VALA_IS_POINTER_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_POINTER_TYPE))
#define VALA_IS_POINTER_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_POINTER_TYPE))
#define VALA_POINTER_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_POINTER_TYPE, ValaPointerTypeClass))

typedef struct _ValaPointerType ValaPointerType;
typedef struct _ValaPointerTypeClass ValaPointerTypeClass;

#define VALA_TYPE_MEMBER_ACCESS (vala_member_access_get_type ())
#define VALA_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccess))
#define VALA_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))
#define VALA_IS_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_MEMBER_ACCESS))
#define VALA_IS_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_MEMBER_ACCESS))
#define VALA_MEMBER_ACCESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))

typedef struct _ValaMemberAccess ValaMemberAccess;
typedef struct _ValaMemberAccessClass ValaMemberAccessClass;
#define _g_free0(var) (var = (g_free (var), NULL))

#define VALA_TYPE_ELEMENT_ACCESS (vala_element_access_get_type ())
#define VALA_ELEMENT_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ELEMENT_ACCESS, ValaElementAccess))
#define VALA_ELEMENT_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ELEMENT_ACCESS, ValaElementAccessClass))
#define VALA_IS_ELEMENT_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ELEMENT_ACCESS))
#define VALA_IS_ELEMENT_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ELEMENT_ACCESS))
#define VALA_ELEMENT_ACCESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ELEMENT_ACCESS, ValaElementAccessClass))

typedef struct _ValaElementAccess ValaElementAccess;
typedef struct _ValaElementAccessClass ValaElementAccessClass;

#define VALA_TYPE_REFERENCE_TYPE (vala_reference_type_get_type ())
#define VALA_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceType))
#define VALA_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))
#define VALA_IS_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_REFERENCE_TYPE))
#define VALA_IS_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_REFERENCE_TYPE))
#define VALA_REFERENCE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))

typedef struct _ValaReferenceType ValaReferenceType;
typedef struct _ValaReferenceTypeClass ValaReferenceTypeClass;

#define VALA_TYPE_ARRAY_TYPE (vala_array_type_get_type ())
#define VALA_ARRAY_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ARRAY_TYPE, ValaArrayType))
#define VALA_ARRAY_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ARRAY_TYPE, ValaArrayTypeClass))
#define VALA_IS_ARRAY_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ARRAY_TYPE))
#define VALA_IS_ARRAY_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ARRAY_TYPE))
#define VALA_ARRAY_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ARRAY_TYPE, ValaArrayTypeClass))

typedef struct _ValaArrayType ValaArrayType;
typedef struct _ValaArrayTypeClass ValaArrayTypeClass;

#define VALA_TYPE_PROPERTY (vala_property_get_type ())
#define VALA_PROPERTY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_PROPERTY, ValaProperty))
#define VALA_PROPERTY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_PROPERTY, ValaPropertyClass))
#define VALA_IS_PROPERTY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_PROPERTY))
#define VALA_IS_PROPERTY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_PROPERTY))
#define VALA_PROPERTY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_PROPERTY, ValaPropertyClass))

typedef struct _ValaProperty ValaProperty;
typedef struct _ValaPropertyClass ValaPropertyClass;

#define VALA_TYPE_PROPERTY_ACCESSOR (vala_property_accessor_get_type ())
#define VALA_PROPERTY_ACCESSOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_PROPERTY_ACCESSOR, ValaPropertyAccessor))
#define VALA_PROPERTY_ACCESSOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_PROPERTY_ACCESSOR, ValaPropertyAccessorClass))
#define VALA_IS_PROPERTY_ACCESSOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_PROPERTY_ACCESSOR))
#define VALA_IS_PROPERTY_ACCESSOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_PROPERTY_ACCESSOR))
#define VALA_PROPERTY_ACCESSOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_PROPERTY_ACCESSOR, ValaPropertyAccessorClass))

typedef struct _ValaPropertyAccessor ValaPropertyAccessor;
typedef struct _ValaPropertyAccessorClass ValaPropertyAccessorClass;

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

struct _ValaPostfixExpression {
	ValaExpression parent_instance;
	ValaPostfixExpressionPrivate * priv;
};

struct _ValaPostfixExpressionClass {
	ValaExpressionClass parent_class;
};

struct _ValaPostfixExpressionPrivate {
	ValaExpression* _inner;
	gboolean _increment;
};


static gpointer vala_postfix_expression_parent_class = NULL;

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
GType vala_postfix_expression_get_type (void) G_GNUC_CONST;
#define VALA_POSTFIX_EXPRESSION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_POSTFIX_EXPRESSION, ValaPostfixExpressionPrivate))
enum  {
	VALA_POSTFIX_EXPRESSION_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaPostfixExpression* vala_postfix_expression_new (ValaExpression* _inner, gboolean inc, ValaSourceReference* source);
ValaPostfixExpression* vala_postfix_expression_construct (GType object_type, ValaExpression* _inner, gboolean inc, ValaSourceReference* source);
ValaExpression* vala_expression_construct (GType object_type);
void vala_postfix_expression_set_inner (ValaPostfixExpression* self, ValaExpression* value);
void vala_postfix_expression_set_increment (ValaPostfixExpression* self, gboolean value);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
static void vala_postfix_expression_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
ValaExpression* vala_postfix_expression_get_inner (ValaPostfixExpression* self);
void vala_code_node_accept (ValaCodeNode* self, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_postfix_expression (ValaCodeVisitor* self, ValaPostfixExpression* expr);
void vala_code_visitor_visit_expression (ValaCodeVisitor* self, ValaExpression* expr);
static gboolean vala_postfix_expression_real_is_pure (ValaExpression* base);
static gboolean vala_postfix_expression_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer);
gboolean vala_code_node_get_checked (ValaCodeNode* self);
gboolean vala_code_node_get_error (ValaCodeNode* self);
void vala_code_node_set_checked (ValaCodeNode* self, gboolean value);
gboolean vala_code_node_check (ValaCodeNode* self, ValaSemanticAnalyzer* analyzer);
void vala_code_node_set_error (ValaCodeNode* self, gboolean value);
ValaDataType* vala_expression_get_value_type (ValaExpression* self);
GType vala_value_type_get_type (void) G_GNUC_CONST;
GType vala_integer_type_get_type (void) G_GNUC_CONST;
GType vala_floating_type_get_type (void) G_GNUC_CONST;
GType vala_pointer_type_get_type (void) G_GNUC_CONST;
void vala_report_error (ValaSourceReference* source, const char* message);
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
GType vala_member_access_get_type (void) G_GNUC_CONST;
gboolean vala_member_access_get_prototype_access (ValaMemberAccess* self);
ValaSymbol* vala_expression_get_symbol_reference (ValaExpression* self);
char* vala_symbol_get_full_name (ValaSymbol* self);
GType vala_element_access_get_type (void) G_GNUC_CONST;
ValaExpression* vala_element_access_get_container (ValaElementAccess* self);
GType vala_reference_type_get_type (void) G_GNUC_CONST;
GType vala_array_type_get_type (void) G_GNUC_CONST;
GType vala_property_get_type (void) G_GNUC_CONST;
GType vala_property_accessor_get_type (void) G_GNUC_CONST;
ValaPropertyAccessor* vala_property_get_set_accessor (ValaProperty* self);
gboolean vala_property_accessor_get_writable (ValaPropertyAccessor* self);
void vala_expression_set_value_type (ValaExpression* self, ValaDataType* value);
static void vala_postfix_expression_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen);
void vala_code_node_emit (ValaCodeNode* self, ValaCodeGenerator* codegen);
gboolean vala_postfix_expression_get_increment (ValaPostfixExpression* self);
static void vala_postfix_expression_finalize (ValaCodeNode* obj);



/**
 * Creates a new postfix expression.
 *
 * @param inner  operand expression
 * @param inc    true for increment, false for decrement
 * @param source reference to source code
 * @return newly created postfix expression
 */
ValaPostfixExpression* vala_postfix_expression_construct (GType object_type, ValaExpression* _inner, gboolean inc, ValaSourceReference* source) {
	ValaPostfixExpression* self = NULL;
	g_return_val_if_fail (_inner != NULL, NULL);
	g_return_val_if_fail (source != NULL, NULL);
	self = (ValaPostfixExpression*) vala_expression_construct (object_type);
	vala_postfix_expression_set_inner (self, _inner);
	vala_postfix_expression_set_increment (self, inc);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source);
	return self;
}


ValaPostfixExpression* vala_postfix_expression_new (ValaExpression* _inner, gboolean inc, ValaSourceReference* source) {
	return vala_postfix_expression_construct (VALA_TYPE_POSTFIX_EXPRESSION, _inner, inc, source);
}


static void vala_postfix_expression_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaPostfixExpression * self;
	self = (ValaPostfixExpression*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_node_accept ((ValaCodeNode*) self->priv->_inner, visitor);
	vala_code_visitor_visit_postfix_expression (visitor, self);
	vala_code_visitor_visit_expression (visitor, (ValaExpression*) self);
}


static gboolean vala_postfix_expression_real_is_pure (ValaExpression* base) {
	ValaPostfixExpression * self;
	gboolean result = FALSE;
	self = (ValaPostfixExpression*) base;
	result = FALSE;
	return result;
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean vala_postfix_expression_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer) {
	ValaPostfixExpression * self;
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	self = (ValaPostfixExpression*) base;
	g_return_val_if_fail (analyzer != NULL, FALSE);
	if (vala_code_node_get_checked ((ValaCodeNode*) self)) {
		result = !vala_code_node_get_error ((ValaCodeNode*) self);
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	if (!vala_code_node_check ((ValaCodeNode*) self->priv->_inner, analyzer)) {
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	if (!VALA_IS_INTEGER_TYPE (vala_expression_get_value_type (self->priv->_inner))) {
		_tmp1_ = !VALA_IS_FLOATING_TYPE (vala_expression_get_value_type (self->priv->_inner));
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		_tmp0_ = !VALA_IS_POINTER_TYPE (vala_expression_get_value_type (self->priv->_inner));
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		vala_report_error (vala_code_node_get_source_reference ((ValaCodeNode*) self), "unsupported lvalue in postfix expression");
		result = FALSE;
		return result;
	}
	if (VALA_IS_MEMBER_ACCESS (self->priv->_inner)) {
		ValaMemberAccess* ma;
		gboolean _tmp4_ = FALSE;
		ma = _vala_code_node_ref0 (VALA_MEMBER_ACCESS (self->priv->_inner));
		if (vala_member_access_get_prototype_access (ma)) {
			char* _tmp2_;
			char* _tmp3_;
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			vala_report_error (vala_code_node_get_source_reference ((ValaCodeNode*) self), _tmp3_ = g_strdup_printf ("Access to instance member `%s' denied", _tmp2_ = vala_symbol_get_full_name (vala_expression_get_symbol_reference ((ValaExpression*) ma))));
			_g_free0 (_tmp3_);
			_g_free0 (_tmp2_);
			result = FALSE;
			_vala_code_node_unref0 (ma);
			return result;
		}
		if (vala_code_node_get_error ((ValaCodeNode*) ma)) {
			_tmp4_ = TRUE;
		} else {
			_tmp4_ = vala_expression_get_symbol_reference ((ValaExpression*) ma) == NULL;
		}
		if (_tmp4_) {
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			result = FALSE;
			_vala_code_node_unref0 (ma);
			return result;
		}
		_vala_code_node_unref0 (ma);
	} else {
		if (VALA_IS_ELEMENT_ACCESS (self->priv->_inner)) {
			ValaElementAccess* ea;
			ea = _vala_code_node_ref0 (VALA_ELEMENT_ACCESS (self->priv->_inner));
			if (!VALA_IS_ARRAY_TYPE (vala_expression_get_value_type (vala_element_access_get_container (ea)))) {
				vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
				vala_report_error (vala_code_node_get_source_reference ((ValaCodeNode*) self), "unsupported lvalue in postfix expression");
				result = FALSE;
				_vala_code_node_unref0 (ea);
				return result;
			}
			_vala_code_node_unref0 (ea);
		} else {
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			vala_report_error (vala_code_node_get_source_reference ((ValaCodeNode*) self), "unsupported lvalue in postfix expression");
			result = FALSE;
			return result;
		}
	}
	if (VALA_IS_MEMBER_ACCESS (self->priv->_inner)) {
		ValaMemberAccess* ma;
		ma = _vala_code_node_ref0 (VALA_MEMBER_ACCESS (self->priv->_inner));
		if (VALA_IS_PROPERTY (vala_expression_get_symbol_reference ((ValaExpression*) ma))) {
			ValaProperty* prop;
			gboolean _tmp5_ = FALSE;
			prop = _vala_code_node_ref0 (VALA_PROPERTY (vala_expression_get_symbol_reference ((ValaExpression*) ma)));
			if (vala_property_get_set_accessor (prop) == NULL) {
				_tmp5_ = TRUE;
			} else {
				_tmp5_ = !vala_property_accessor_get_writable (vala_property_get_set_accessor (prop));
			}
			if (_tmp5_) {
				char* _tmp6_;
				char* _tmp7_;
				vala_code_node_set_error ((ValaCodeNode*) ma, TRUE);
				vala_report_error (vala_code_node_get_source_reference ((ValaCodeNode*) ma), _tmp7_ = g_strdup_printf ("Property `%s' is read-only", _tmp6_ = vala_symbol_get_full_name ((ValaSymbol*) prop)));
				_g_free0 (_tmp7_);
				_g_free0 (_tmp6_);
				result = FALSE;
				_vala_code_node_unref0 (prop);
				_vala_code_node_unref0 (ma);
				return result;
			}
			_vala_code_node_unref0 (prop);
		}
		_vala_code_node_unref0 (ma);
	}
	vala_expression_set_value_type ((ValaExpression*) self, vala_expression_get_value_type (self->priv->_inner));
	result = !vala_code_node_get_error ((ValaCodeNode*) self);
	return result;
}


static void vala_postfix_expression_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen) {
	ValaPostfixExpression * self;
	self = (ValaPostfixExpression*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_node_emit ((ValaCodeNode*) self->priv->_inner, codegen);
	vala_code_visitor_visit_postfix_expression ((ValaCodeVisitor*) codegen, self);
	vala_code_visitor_visit_expression ((ValaCodeVisitor*) codegen, (ValaExpression*) self);
}


ValaExpression* vala_postfix_expression_get_inner (ValaPostfixExpression* self) {
	ValaExpression* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_inner;
	return result;
}


void vala_postfix_expression_set_inner (ValaPostfixExpression* self, ValaExpression* value) {
	ValaExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_inner = (_tmp0_ = _vala_code_node_ref0 (value), _vala_code_node_unref0 (self->priv->_inner), _tmp0_);
}


gboolean vala_postfix_expression_get_increment (ValaPostfixExpression* self) {
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_increment;
	return result;
}


void vala_postfix_expression_set_increment (ValaPostfixExpression* self, gboolean value) {
	g_return_if_fail (self != NULL);
	self->priv->_increment = value;
}


static void vala_postfix_expression_class_init (ValaPostfixExpressionClass * klass) {
	vala_postfix_expression_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->finalize = vala_postfix_expression_finalize;
	g_type_class_add_private (klass, sizeof (ValaPostfixExpressionPrivate));
	VALA_CODE_NODE_CLASS (klass)->accept = vala_postfix_expression_real_accept;
	VALA_EXPRESSION_CLASS (klass)->is_pure = vala_postfix_expression_real_is_pure;
	VALA_CODE_NODE_CLASS (klass)->check = vala_postfix_expression_real_check;
	VALA_CODE_NODE_CLASS (klass)->emit = vala_postfix_expression_real_emit;
}


static void vala_postfix_expression_instance_init (ValaPostfixExpression * self) {
	self->priv = VALA_POSTFIX_EXPRESSION_GET_PRIVATE (self);
}


static void vala_postfix_expression_finalize (ValaCodeNode* obj) {
	ValaPostfixExpression * self;
	self = VALA_POSTFIX_EXPRESSION (obj);
	_vala_code_node_unref0 (self->priv->_inner);
	VALA_CODE_NODE_CLASS (vala_postfix_expression_parent_class)->finalize (obj);
}


/**
 * Represents a postfix increment or decrement expression.
 */
GType vala_postfix_expression_get_type (void) {
	static volatile gsize vala_postfix_expression_type_id__volatile = 0;
	if (g_once_init_enter (&vala_postfix_expression_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaPostfixExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_postfix_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaPostfixExpression), 0, (GInstanceInitFunc) vala_postfix_expression_instance_init, NULL };
		GType vala_postfix_expression_type_id;
		vala_postfix_expression_type_id = g_type_register_static (VALA_TYPE_EXPRESSION, "ValaPostfixExpression", &g_define_type_info, 0);
		g_once_init_leave (&vala_postfix_expression_type_id__volatile, vala_postfix_expression_type_id);
	}
	return vala_postfix_expression_type_id__volatile;
}




