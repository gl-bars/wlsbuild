/* valaenumvalue.c generated by valac, the Vala compiler
 * generated from valaenumvalue.vala, do not modify */

/* valaenumvalue.vala
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
#include <valaccode.h>


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
typedef struct _ValaSymbolPrivate ValaSymbolPrivate;

#define VALA_TYPE_LOCKABLE (vala_lockable_get_type ())
#define VALA_LOCKABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_LOCKABLE, ValaLockable))
#define VALA_IS_LOCKABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_LOCKABLE))
#define VALA_LOCKABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), VALA_TYPE_LOCKABLE, ValaLockableIface))

typedef struct _ValaLockable ValaLockable;
typedef struct _ValaLockableIface ValaLockableIface;

#define VALA_TYPE_CONSTANT (vala_constant_get_type ())
#define VALA_CONSTANT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CONSTANT, ValaConstant))
#define VALA_CONSTANT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CONSTANT, ValaConstantClass))
#define VALA_IS_CONSTANT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CONSTANT))
#define VALA_IS_CONSTANT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CONSTANT))
#define VALA_CONSTANT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CONSTANT, ValaConstantClass))

typedef struct _ValaConstant ValaConstant;
typedef struct _ValaConstantClass ValaConstantClass;
typedef struct _ValaConstantPrivate ValaConstantPrivate;

#define VALA_TYPE_ENUM_VALUE (vala_enum_value_get_type ())
#define VALA_ENUM_VALUE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ENUM_VALUE, ValaEnumValue))
#define VALA_ENUM_VALUE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ENUM_VALUE, ValaEnumValueClass))
#define VALA_IS_ENUM_VALUE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ENUM_VALUE))
#define VALA_IS_ENUM_VALUE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ENUM_VALUE))
#define VALA_ENUM_VALUE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ENUM_VALUE, ValaEnumValueClass))

typedef struct _ValaEnumValue ValaEnumValue;
typedef struct _ValaEnumValueClass ValaEnumValueClass;
typedef struct _ValaEnumValuePrivate ValaEnumValuePrivate;

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_COMMENT (vala_comment_get_type ())
#define VALA_COMMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_COMMENT, ValaComment))
#define VALA_COMMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_COMMENT, ValaCommentClass))
#define VALA_IS_COMMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_COMMENT))
#define VALA_IS_COMMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_COMMENT))
#define VALA_COMMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_COMMENT, ValaCommentClass))

typedef struct _ValaComment ValaComment;
typedef struct _ValaCommentClass ValaCommentClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

#define VALA_TYPE_TYPESYMBOL (vala_typesymbol_get_type ())
#define VALA_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbol))
#define VALA_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))
#define VALA_IS_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_TYPESYMBOL))
#define VALA_IS_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_TYPESYMBOL))
#define VALA_TYPESYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))

typedef struct _ValaTypeSymbol ValaTypeSymbol;
typedef struct _ValaTypeSymbolClass ValaTypeSymbolClass;

#define VALA_TYPE_ENUM (vala_enum_get_type ())
#define VALA_ENUM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ENUM, ValaEnum))
#define VALA_ENUM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ENUM, ValaEnumClass))
#define VALA_IS_ENUM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ENUM))
#define VALA_IS_ENUM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ENUM))
#define VALA_ENUM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ENUM, ValaEnumClass))

typedef struct _ValaEnum ValaEnum;
typedef struct _ValaEnumClass ValaEnumClass;
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

struct _ValaSymbol {
	ValaCodeNode parent_instance;
	ValaSymbolPrivate * priv;
};

struct _ValaSymbolClass {
	ValaCodeNodeClass parent_class;
	char* (*get_cprefix) (ValaSymbol* self);
	char* (*get_lower_case_cname) (ValaSymbol* self, const char* infix);
	char* (*get_lower_case_cprefix) (ValaSymbol* self);
	ValaList* (*get_cheader_filenames) (ValaSymbol* self);
	gboolean (*is_instance_member) (ValaSymbol* self);
	gboolean (*is_class_member) (ValaSymbol* self);
	void (*process_deprecated_attribute) (ValaSymbol* self, ValaAttribute* attr);
};

struct _ValaLockableIface {
	GTypeInterface parent_iface;
	gboolean (*get_lock_used) (ValaLockable* self);
	void (*set_lock_used) (ValaLockable* self, gboolean used);
};

struct _ValaConstant {
	ValaSymbol parent_instance;
	ValaConstantPrivate * priv;
};

struct _ValaConstantClass {
	ValaSymbolClass parent_class;
	char* (*get_default_cname) (ValaConstant* self);
};

struct _ValaEnumValue {
	ValaConstant parent_instance;
	ValaEnumValuePrivate * priv;
};

struct _ValaEnumValueClass {
	ValaConstantClass parent_class;
};


static gpointer vala_enum_value_parent_class = NULL;

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
GType vala_lockable_get_type (void) G_GNUC_CONST;
GType vala_constant_get_type (void) G_GNUC_CONST;
GType vala_enum_value_get_type (void) G_GNUC_CONST;
enum  {
	VALA_ENUM_VALUE_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
gpointer vala_comment_ref (gpointer instance);
void vala_comment_unref (gpointer instance);
GParamSpec* vala_param_spec_comment (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_comment (GValue* value, gpointer v_object);
void vala_value_take_comment (GValue* value, gpointer v_object);
gpointer vala_value_get_comment (const GValue* value);
GType vala_comment_get_type (void) G_GNUC_CONST;
ValaEnumValue* vala_enum_value_new (const char* name, ValaExpression* value, ValaSourceReference* source_reference, ValaComment* comment);
ValaEnumValue* vala_enum_value_construct (GType object_type, const char* name, ValaExpression* value, ValaSourceReference* source_reference, ValaComment* comment);
ValaConstant* vala_constant_new (const char* name, ValaDataType* type_reference, ValaExpression* value, ValaSourceReference* source_reference, ValaComment* comment);
ValaConstant* vala_constant_construct (GType object_type, const char* name, ValaDataType* type_reference, ValaExpression* value, ValaSourceReference* source_reference, ValaComment* comment);
ValaCCodeConstant* vala_enum_value_get_canonical_cconstant (ValaEnumValue* self);
const char* vala_symbol_get_name (ValaSymbol* self);
static void vala_enum_value_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_enum_value (ValaCodeVisitor* self, ValaEnumValue* ev);
static void vala_enum_value_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor);
ValaExpression* vala_constant_get_value (ValaConstant* self);
void vala_code_node_accept (ValaCodeNode* self, ValaCodeVisitor* visitor);
static char* vala_enum_value_real_get_default_cname (ValaConstant* base);
ValaSymbol* vala_symbol_get_parent_symbol (ValaSymbol* self);
GType vala_typesymbol_get_type (void) G_GNUC_CONST;
GType vala_enum_get_type (void) G_GNUC_CONST;
char* vala_symbol_get_cprefix (ValaSymbol* self);
static gboolean vala_enum_value_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer);
gboolean vala_code_node_get_checked (ValaCodeNode* self);
gboolean vala_code_node_get_error (ValaCodeNode* self);
void vala_code_node_set_checked (ValaCodeNode* self, gboolean value);
void vala_constant_process_attributes (ValaConstant* self);
gboolean vala_code_node_check (ValaCodeNode* self, ValaSemanticAnalyzer* analyzer);



/**
 * Creates a new enum value with the specified numerical representation.
 *
 * @param name  enum value name
 * @param value numerical representation
 * @return      newly created enum value
 */
ValaEnumValue* vala_enum_value_construct (GType object_type, const char* name, ValaExpression* value, ValaSourceReference* source_reference, ValaComment* comment) {
	ValaEnumValue* self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaEnumValue*) vala_constant_construct (object_type, name, NULL, value, source_reference, comment);
	return self;
}


ValaEnumValue* vala_enum_value_new (const char* name, ValaExpression* value, ValaSourceReference* source_reference, ValaComment* comment) {
	return vala_enum_value_construct (VALA_TYPE_ENUM_VALUE, name, value, source_reference, comment);
}


/**
 * Returns the string literal of this signal to be used in C code.
 * (FIXME: from vlaasignal.vala)
 *
 * @return string literal to be used in C code
 */
static glong string_get_length (const char* self) {
	glong result;
	g_return_val_if_fail (self != NULL, 0L);
	result = g_utf8_strlen (self, (gssize) (-1));
	return result;
}


ValaCCodeConstant* vala_enum_value_get_canonical_cconstant (ValaEnumValue* self) {
	ValaCCodeConstant* result = NULL;
	GString* str;
	char* i;
	g_return_val_if_fail (self != NULL, NULL);
	str = g_string_new ("\"");
	i = g_strdup (vala_symbol_get_name ((ValaSymbol*) self));
	while (TRUE) {
		gunichar c;
		char* _tmp0_;
		if (!(string_get_length (i) > 0)) {
			break;
		}
		c = g_utf8_get_char (i);
		if (c == '_') {
			g_string_append_c (str, '-');
		} else {
			g_string_append_unichar (str, g_unichar_tolower (c));
		}
		i = (_tmp0_ = g_strdup (g_utf8_next_char (i)), _g_free0 (i), _tmp0_);
	}
	g_string_append_c (str, '"');
	result = vala_ccode_constant_new (str->str);
	_g_free0 (i);
	_g_string_free0 (str);
	return result;
}


static void vala_enum_value_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaEnumValue * self;
	self = (ValaEnumValue*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_enum_value (visitor, self);
}


static void vala_enum_value_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaEnumValue * self;
	self = (ValaEnumValue*) base;
	g_return_if_fail (visitor != NULL);
	if (vala_constant_get_value ((ValaConstant*) self) != NULL) {
		vala_code_node_accept ((ValaCodeNode*) vala_constant_get_value ((ValaConstant*) self), visitor);
	}
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


static char* vala_enum_value_real_get_default_cname (ValaConstant* base) {
	ValaEnumValue * self;
	char* result = NULL;
	ValaEnum* en;
	char* _tmp0_;
	char* _tmp1_;
	self = (ValaEnumValue*) base;
	en = _vala_code_node_ref0 (VALA_ENUM (vala_symbol_get_parent_symbol ((ValaSymbol*) self)));
	result = (_tmp1_ = g_strdup_printf ("%s%s", _tmp0_ = vala_symbol_get_cprefix ((ValaSymbol*) en), vala_symbol_get_name ((ValaSymbol*) self)), _g_free0 (_tmp0_), _tmp1_);
	_vala_code_node_unref0 (en);
	return result;
	_vala_code_node_unref0 (en);
}


static gboolean vala_enum_value_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer) {
	ValaEnumValue * self;
	gboolean result = FALSE;
	self = (ValaEnumValue*) base;
	g_return_val_if_fail (analyzer != NULL, FALSE);
	if (vala_code_node_get_checked ((ValaCodeNode*) self)) {
		result = !vala_code_node_get_error ((ValaCodeNode*) self);
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	vala_constant_process_attributes ((ValaConstant*) self);
	if (vala_constant_get_value ((ValaConstant*) self) != NULL) {
		vala_code_node_check ((ValaCodeNode*) vala_constant_get_value ((ValaConstant*) self), analyzer);
	}
	result = !vala_code_node_get_error ((ValaCodeNode*) self);
	return result;
}


static void vala_enum_value_class_init (ValaEnumValueClass * klass) {
	vala_enum_value_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->accept = vala_enum_value_real_accept;
	VALA_CODE_NODE_CLASS (klass)->accept_children = vala_enum_value_real_accept_children;
	VALA_CONSTANT_CLASS (klass)->get_default_cname = vala_enum_value_real_get_default_cname;
	VALA_CODE_NODE_CLASS (klass)->check = vala_enum_value_real_check;
}


static void vala_enum_value_instance_init (ValaEnumValue * self) {
}


/**
 * Represents an enum member in the source code.
 */
GType vala_enum_value_get_type (void) {
	static volatile gsize vala_enum_value_type_id__volatile = 0;
	if (g_once_init_enter (&vala_enum_value_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaEnumValueClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_enum_value_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaEnumValue), 0, (GInstanceInitFunc) vala_enum_value_instance_init, NULL };
		GType vala_enum_value_type_id;
		vala_enum_value_type_id = g_type_register_static (VALA_TYPE_CONSTANT, "ValaEnumValue", &g_define_type_info, 0);
		g_once_init_leave (&vala_enum_value_type_id__volatile, vala_enum_value_type_id);
	}
	return vala_enum_value_type_id__volatile;
}




