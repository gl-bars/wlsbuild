/* valatypesymbol.c generated by valac, the Vala compiler
 * generated from valatypesymbol.vala, do not modify */

/* valatypesymbol.vala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
 * Copyright (C) 2006-2008  Raffaele Sandrini
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
 *	Raffaele Sandrini <raffaele@sandrini.ch>
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
typedef struct _ValaSymbolPrivate ValaSymbolPrivate;

#define VALA_TYPE_TYPESYMBOL (vala_typesymbol_get_type ())
#define VALA_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbol))
#define VALA_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))
#define VALA_IS_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_TYPESYMBOL))
#define VALA_IS_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_TYPESYMBOL))
#define VALA_TYPESYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))

typedef struct _ValaTypeSymbol ValaTypeSymbol;
typedef struct _ValaTypeSymbolClass ValaTypeSymbolClass;
typedef struct _ValaTypeSymbolPrivate ValaTypeSymbolPrivate;

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

struct _ValaTypeSymbol {
	ValaSymbol parent_instance;
	ValaTypeSymbolPrivate * priv;
};

struct _ValaTypeSymbolClass {
	ValaSymbolClass parent_class;
	char* (*get_cname) (ValaTypeSymbol* self, gboolean const_type);
	gboolean (*is_reference_type) (ValaTypeSymbol* self);
	char* (*get_dup_function) (ValaTypeSymbol* self);
	char* (*get_free_function) (ValaTypeSymbol* self);
	char* (*get_copy_function) (ValaTypeSymbol* self);
	char* (*get_destroy_function) (ValaTypeSymbol* self);
	gboolean (*is_reference_counting) (ValaTypeSymbol* self);
	char* (*get_ref_function) (ValaTypeSymbol* self);
	char* (*get_unref_function) (ValaTypeSymbol* self);
	char* (*get_ref_sink_function) (ValaTypeSymbol* self);
	char* (*get_type_id) (ValaTypeSymbol* self);
	char* (*get_marshaller_type_name) (ValaTypeSymbol* self);
	char* (*get_param_spec_function) (ValaTypeSymbol* self);
	char* (*get_get_value_function) (ValaTypeSymbol* self);
	char* (*get_set_value_function) (ValaTypeSymbol* self);
	char* (*get_take_value_function) (ValaTypeSymbol* self);
	char* (*get_upper_case_cname) (ValaTypeSymbol* self, const char* infix);
	char* (*get_default_value) (ValaTypeSymbol* self);
	gboolean (*is_subtype_of) (ValaTypeSymbol* self, ValaTypeSymbol* t);
	gint (*get_type_parameter_index) (ValaTypeSymbol* self, const char* name);
};


static gpointer vala_typesymbol_parent_class = NULL;

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
GType vala_typesymbol_get_type (void) G_GNUC_CONST;
enum  {
	VALA_TYPESYMBOL_DUMMY_PROPERTY
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
ValaTypeSymbol* vala_typesymbol_construct (GType object_type, const char* name, ValaSourceReference* source_reference, ValaComment* comment);
ValaSymbol* vala_symbol_construct (GType object_type, const char* name, ValaSourceReference* source_reference, ValaComment* comment);
char* vala_typesymbol_get_cname (ValaTypeSymbol* self, gboolean const_type);
static char* vala_typesymbol_real_get_cname (ValaTypeSymbol* self, gboolean const_type);
gboolean vala_typesymbol_is_reference_type (ValaTypeSymbol* self);
static gboolean vala_typesymbol_real_is_reference_type (ValaTypeSymbol* self);
char* vala_typesymbol_get_dup_function (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_dup_function (ValaTypeSymbol* self);
char* vala_typesymbol_get_free_function (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_free_function (ValaTypeSymbol* self);
char* vala_typesymbol_get_copy_function (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_copy_function (ValaTypeSymbol* self);
char* vala_typesymbol_get_destroy_function (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_destroy_function (ValaTypeSymbol* self);
gboolean vala_typesymbol_is_reference_counting (ValaTypeSymbol* self);
static gboolean vala_typesymbol_real_is_reference_counting (ValaTypeSymbol* self);
char* vala_typesymbol_get_ref_function (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_ref_function (ValaTypeSymbol* self);
char* vala_typesymbol_get_unref_function (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_unref_function (ValaTypeSymbol* self);
char* vala_typesymbol_get_ref_sink_function (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_ref_sink_function (ValaTypeSymbol* self);
char* vala_typesymbol_get_type_id (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_type_id (ValaTypeSymbol* self);
char* vala_typesymbol_get_marshaller_type_name (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_marshaller_type_name (ValaTypeSymbol* self);
char* vala_typesymbol_get_param_spec_function (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_param_spec_function (ValaTypeSymbol* self);
char* vala_typesymbol_get_get_value_function (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_get_value_function (ValaTypeSymbol* self);
char* vala_typesymbol_get_set_value_function (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_set_value_function (ValaTypeSymbol* self);
char* vala_typesymbol_get_take_value_function (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_take_value_function (ValaTypeSymbol* self);
char* vala_typesymbol_get_upper_case_cname (ValaTypeSymbol* self, const char* infix);
static char* vala_typesymbol_real_get_upper_case_cname (ValaTypeSymbol* self, const char* infix);
char* vala_typesymbol_get_default_value (ValaTypeSymbol* self);
static char* vala_typesymbol_real_get_default_value (ValaTypeSymbol* self);
gboolean vala_typesymbol_is_subtype_of (ValaTypeSymbol* self, ValaTypeSymbol* t);
static gboolean vala_typesymbol_real_is_subtype_of (ValaTypeSymbol* self, ValaTypeSymbol* t);
gint vala_typesymbol_get_type_parameter_index (ValaTypeSymbol* self, const char* name);
static gint vala_typesymbol_real_get_type_parameter_index (ValaTypeSymbol* self, const char* name);



ValaTypeSymbol* vala_typesymbol_construct (GType object_type, const char* name, ValaSourceReference* source_reference, ValaComment* comment) {
	ValaTypeSymbol* self = NULL;
	self = (ValaTypeSymbol*) vala_symbol_construct (object_type, name, source_reference, comment);
	return self;
}


/**
 * Returns the name of this data type as it is used in C code.
 *
 * @return the name to be used in C code
 */
static char* vala_typesymbol_real_get_cname (ValaTypeSymbol* self, gboolean const_type) {
	g_return_val_if_fail (self != NULL, NULL);
	g_critical ("Type `%s' does not implement abstract method `vala_typesymbol_get_cname'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


char* vala_typesymbol_get_cname (ValaTypeSymbol* self, gboolean const_type) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_cname (self, const_type);
}


/**
 * Checks whether this data type has value or reference type semantics.
 *
 * @return true if this data type has reference type semantics
 */
static gboolean vala_typesymbol_real_is_reference_type (ValaTypeSymbol* self) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	result = FALSE;
	return result;
}


gboolean vala_typesymbol_is_reference_type (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->is_reference_type (self);
}


/**
 * Returns the C function name that duplicates instances of this data
 * type. The specified C function must accept one argument referencing
 * the instance of this data type and return a reference to the
 * duplicate.
 *
 * @return the name of the C function if supported or null otherwise
 */
static char* vala_typesymbol_real_get_dup_function (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_dup_function (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_dup_function (self);
}


/**
 * Returns the C function name that frees instances of this data type.
 * The specified C function must accept one argument pointing to the
 * instance to be freed.
 *
 * @return the name of the C function if supported or null otherwise
 */
static char* vala_typesymbol_real_get_free_function (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_free_function (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_free_function (self);
}


/**
 * Returns the C function name that copies contents of instances of
 * this data type. This is only applicable to structs. The specified
 * C function must accept two arguments, the first is the source value
 * and the second is the destination value.
 *
 * @return the name of the C function if supported or null otherwise
 */
static char* vala_typesymbol_real_get_copy_function (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_copy_function (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_copy_function (self);
}


/**
 * Returns the C function name that destroys the contents of instances
 * of this data type. This is only applicable to structs. The specified
 * C function must accept one argument pointing to the instance to be
 * destroyed.
 *
 * @return the name of the C function if supported or null otherwise
 */
static char* vala_typesymbol_real_get_destroy_function (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_destroy_function (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_destroy_function (self);
}


/**
 * Checks whether this data type supports reference counting. This is
 * only valid for reference types.
 *
 * @return true if this data type supports reference counting
 */
static gboolean vala_typesymbol_real_is_reference_counting (ValaTypeSymbol* self) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	result = FALSE;
	return result;
}


gboolean vala_typesymbol_is_reference_counting (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->is_reference_counting (self);
}


/**
 * Returns the C function name that increments the reference count of
 * instances of this data type. This is only valid for data types
 * supporting reference counting. The specified C function must accept
 * one argument referencing the instance of this data type and return
 * the reference.
 *
 * @return the name of the C function or null if this data type does not
 *         support reference counting
 */
static char* vala_typesymbol_real_get_ref_function (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_ref_function (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_ref_function (self);
}


/**
 * Returns the C function name that decrements the reference count of
 * instances of this data type. This is only valid for data types
 * supporting reference counting. The specified C function must accept
 * one argument referencing the instance of this data type.
 *
 * @return the name of the C function or null if this data type does not
 *         support reference counting
 */
static char* vala_typesymbol_real_get_unref_function (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_unref_function (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_unref_function (self);
}


/**
 * Returns the C function name that sinks the reference count of
 * "floating" instances of this data type. This is only valid for data
 * types supporting floating references. The specified C function must
 * accept one argument referencing the instance of this data type and
 * return a non-floating reference.
 *
 * The ref_sink function is called for any constructor of the class and
 * for other methods that have the class as a return value and are
 * marked with the 'floating' attribute.
 *
 * @return the name of the C function or null if this data type does not
 *         support floating reference counts
 */
static char* vala_typesymbol_real_get_ref_sink_function (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_ref_sink_function (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_ref_sink_function (self);
}


/**
 * Returns the C symbol representing the runtime type id for this data
 * type. The specified symbol must express a registered GType.
 *
 * @return the name of the GType name in C code or null if this data
 *         type is not registered with GType
 */
static char* vala_typesymbol_real_get_type_id (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_type_id (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_type_id (self);
}


/**
 * Returns the name of this data type as used in C code marshallers
 *
 * @return type name for marshallers
 */
static char* vala_typesymbol_real_get_marshaller_type_name (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_marshaller_type_name (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_marshaller_type_name (self);
}


/**
 * Returns the cname of the GValue parameter spec function.
 */
static char* vala_typesymbol_real_get_param_spec_function (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_param_spec_function (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_param_spec_function (self);
}


/**
 * Returns the cname of the GValue getter function.
 */
static char* vala_typesymbol_real_get_get_value_function (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_get_value_function (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_get_value_function (self);
}


/**
 * Returns the cname of the GValue setter function.
 */
static char* vala_typesymbol_real_get_set_value_function (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_set_value_function (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_set_value_function (self);
}


/**
 * Returns the cname of the GValue taker function.
 */
static char* vala_typesymbol_real_get_take_value_function (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_take_value_function (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_take_value_function (self);
}


/**
 * Returns the C name of this data type in upper case. Words are
 * separated by underscores. The upper case C name of the namespace is
 * prefix of the result.
 *
 * @param infix a string to be placed between namespace and data type
 *              name or null
 * @return      the upper case name to be used in C code
 */
static char* vala_typesymbol_real_get_upper_case_cname (ValaTypeSymbol* self, const char* infix) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_upper_case_cname (ValaTypeSymbol* self, const char* infix) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_upper_case_cname (self, infix);
}


/**
 * Returns the default value for the given type. Returning null means
 * there is no default value (i.e. not that the default name is NULL).
 *
 * @return the name of the default value
 */
static char* vala_typesymbol_real_get_default_value (ValaTypeSymbol* self) {
	char* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


char* vala_typesymbol_get_default_value (ValaTypeSymbol* self) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_default_value (self);
}


/**
 * Checks whether this data type is equal to or a subtype of the
 * specified data type.
 *
 * @param t a data type
 * @return  true if t is a supertype of this data type, false otherwise
 */
static gboolean vala_typesymbol_real_is_subtype_of (ValaTypeSymbol* self, ValaTypeSymbol* t) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (t != NULL, FALSE);
	result = self == t;
	return result;
}


gboolean vala_typesymbol_is_subtype_of (ValaTypeSymbol* self, ValaTypeSymbol* t) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->is_subtype_of (self, t);
}


/**
 * Return the index of the specified type parameter name.
 */
static gint vala_typesymbol_real_get_type_parameter_index (ValaTypeSymbol* self, const char* name) {
	gint result = 0;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (name != NULL, 0);
	result = -1;
	return result;
}


gint vala_typesymbol_get_type_parameter_index (ValaTypeSymbol* self, const char* name) {
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_type_parameter_index (self, name);
}


static void vala_typesymbol_class_init (ValaTypeSymbolClass * klass) {
	vala_typesymbol_parent_class = g_type_class_peek_parent (klass);
	VALA_TYPESYMBOL_CLASS (klass)->get_cname = vala_typesymbol_real_get_cname;
	VALA_TYPESYMBOL_CLASS (klass)->is_reference_type = vala_typesymbol_real_is_reference_type;
	VALA_TYPESYMBOL_CLASS (klass)->get_dup_function = vala_typesymbol_real_get_dup_function;
	VALA_TYPESYMBOL_CLASS (klass)->get_free_function = vala_typesymbol_real_get_free_function;
	VALA_TYPESYMBOL_CLASS (klass)->get_copy_function = vala_typesymbol_real_get_copy_function;
	VALA_TYPESYMBOL_CLASS (klass)->get_destroy_function = vala_typesymbol_real_get_destroy_function;
	VALA_TYPESYMBOL_CLASS (klass)->is_reference_counting = vala_typesymbol_real_is_reference_counting;
	VALA_TYPESYMBOL_CLASS (klass)->get_ref_function = vala_typesymbol_real_get_ref_function;
	VALA_TYPESYMBOL_CLASS (klass)->get_unref_function = vala_typesymbol_real_get_unref_function;
	VALA_TYPESYMBOL_CLASS (klass)->get_ref_sink_function = vala_typesymbol_real_get_ref_sink_function;
	VALA_TYPESYMBOL_CLASS (klass)->get_type_id = vala_typesymbol_real_get_type_id;
	VALA_TYPESYMBOL_CLASS (klass)->get_marshaller_type_name = vala_typesymbol_real_get_marshaller_type_name;
	VALA_TYPESYMBOL_CLASS (klass)->get_param_spec_function = vala_typesymbol_real_get_param_spec_function;
	VALA_TYPESYMBOL_CLASS (klass)->get_get_value_function = vala_typesymbol_real_get_get_value_function;
	VALA_TYPESYMBOL_CLASS (klass)->get_set_value_function = vala_typesymbol_real_get_set_value_function;
	VALA_TYPESYMBOL_CLASS (klass)->get_take_value_function = vala_typesymbol_real_get_take_value_function;
	VALA_TYPESYMBOL_CLASS (klass)->get_upper_case_cname = vala_typesymbol_real_get_upper_case_cname;
	VALA_TYPESYMBOL_CLASS (klass)->get_default_value = vala_typesymbol_real_get_default_value;
	VALA_TYPESYMBOL_CLASS (klass)->is_subtype_of = vala_typesymbol_real_is_subtype_of;
	VALA_TYPESYMBOL_CLASS (klass)->get_type_parameter_index = vala_typesymbol_real_get_type_parameter_index;
}


static void vala_typesymbol_instance_init (ValaTypeSymbol * self) {
}


/**
 * Represents a runtime data type. This data type may be defined in Vala source
 * code or imported from an external library with a Vala API file.
 */
GType vala_typesymbol_get_type (void) {
	static volatile gsize vala_typesymbol_type_id__volatile = 0;
	if (g_once_init_enter (&vala_typesymbol_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaTypeSymbolClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_typesymbol_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaTypeSymbol), 0, (GInstanceInitFunc) vala_typesymbol_instance_init, NULL };
		GType vala_typesymbol_type_id;
		vala_typesymbol_type_id = g_type_register_static (VALA_TYPE_SYMBOL, "ValaTypeSymbol", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&vala_typesymbol_type_id__volatile, vala_typesymbol_type_id);
	}
	return vala_typesymbol_type_id__volatile;
}




