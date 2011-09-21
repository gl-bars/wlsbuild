/* valaerrorcode.c generated by valac, the Vala compiler
 * generated from valaerrorcode.vala, do not modify */

/* valaerrorcode.vala
 *
 * Copyright (C) 2008  Jürg Billeter
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

#define VALA_TYPE_ERROR_CODE (vala_error_code_get_type ())
#define VALA_ERROR_CODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ERROR_CODE, ValaErrorCode))
#define VALA_ERROR_CODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ERROR_CODE, ValaErrorCodeClass))
#define VALA_IS_ERROR_CODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ERROR_CODE))
#define VALA_IS_ERROR_CODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ERROR_CODE))
#define VALA_ERROR_CODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ERROR_CODE, ValaErrorCodeClass))

typedef struct _ValaErrorCode ValaErrorCode;
typedef struct _ValaErrorCodeClass ValaErrorCodeClass;
typedef struct _ValaErrorCodePrivate ValaErrorCodePrivate;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

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

#define VALA_TYPE_ERROR_DOMAIN (vala_error_domain_get_type ())
#define VALA_ERROR_DOMAIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ERROR_DOMAIN, ValaErrorDomain))
#define VALA_ERROR_DOMAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ERROR_DOMAIN, ValaErrorDomainClass))
#define VALA_IS_ERROR_DOMAIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ERROR_DOMAIN))
#define VALA_IS_ERROR_DOMAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ERROR_DOMAIN))
#define VALA_ERROR_DOMAIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ERROR_DOMAIN, ValaErrorDomainClass))

typedef struct _ValaErrorDomain ValaErrorDomain;
typedef struct _ValaErrorDomainClass ValaErrorDomainClass;

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

struct _ValaErrorCode {
	ValaTypeSymbol parent_instance;
	ValaErrorCodePrivate * priv;
};

struct _ValaErrorCodeClass {
	ValaTypeSymbolClass parent_class;
};

struct _ValaErrorCodePrivate {
	ValaExpression* _value;
	char* cname;
};


static gpointer vala_error_code_parent_class = NULL;

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
GType vala_error_code_get_type (void) G_GNUC_CONST;
#define VALA_ERROR_CODE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_ERROR_CODE, ValaErrorCodePrivate))
enum  {
	VALA_ERROR_CODE_DUMMY_PROPERTY
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
ValaErrorCode* vala_error_code_new (const char* name, ValaSourceReference* source_reference, ValaComment* comment);
ValaErrorCode* vala_error_code_construct (GType object_type, const char* name, ValaSourceReference* source_reference, ValaComment* comment);
ValaTypeSymbol* vala_typesymbol_construct (GType object_type, const char* name, ValaSourceReference* source_reference, ValaComment* comment);
ValaErrorCode* vala_error_code_new_with_value (const char* name, ValaExpression* value, ValaSourceReference* source_reference);
ValaErrorCode* vala_error_code_construct_with_value (GType object_type, const char* name, ValaExpression* value, ValaSourceReference* source_reference);
void vala_error_code_set_value (ValaErrorCode* self, ValaExpression* value);
static void vala_error_code_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_error_code (ValaCodeVisitor* self, ValaErrorCode* ecode);
static void vala_error_code_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor);
ValaExpression* vala_error_code_get_value (ValaErrorCode* self);
void vala_code_node_accept (ValaCodeNode* self, ValaCodeVisitor* visitor);
static char* vala_error_code_real_get_cname (ValaTypeSymbol* base, gboolean const_type);
ValaSymbol* vala_symbol_get_parent_symbol (ValaSymbol* self);
GType vala_error_domain_get_type (void) G_GNUC_CONST;
char* vala_symbol_get_cprefix (ValaSymbol* self);
const char* vala_symbol_get_name (ValaSymbol* self);
static char* vala_error_code_real_get_lower_case_cname (ValaSymbol* base, const char* infix);
char* vala_typesymbol_get_cname (ValaTypeSymbol* self, gboolean const_type);
static gboolean vala_error_code_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer);
gboolean vala_code_node_get_checked (ValaCodeNode* self);
gboolean vala_code_node_get_error (ValaCodeNode* self);
void vala_code_node_set_checked (ValaCodeNode* self, gboolean value);
gboolean vala_code_node_check (ValaCodeNode* self, ValaSemanticAnalyzer* analyzer);
static void vala_error_code_finalize (ValaCodeNode* obj);



/**
 * Creates a new enum value.
 *
 * @param name enum value name
 * @return     newly created enum value
 */
ValaErrorCode* vala_error_code_construct (GType object_type, const char* name, ValaSourceReference* source_reference, ValaComment* comment) {
	ValaErrorCode* self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaErrorCode*) vala_typesymbol_construct (object_type, name, source_reference, comment);
	return self;
}


ValaErrorCode* vala_error_code_new (const char* name, ValaSourceReference* source_reference, ValaComment* comment) {
	return vala_error_code_construct (VALA_TYPE_ERROR_CODE, name, source_reference, comment);
}


/**
 * Creates a new enum value with the specified numerical representation.
 *
 * @param name  enum value name
 * @param value numerical representation
 * @return      newly created enum value
 */
ValaErrorCode* vala_error_code_construct_with_value (GType object_type, const char* name, ValaExpression* value, ValaSourceReference* source_reference) {
	ValaErrorCode* self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (value != NULL, NULL);
	self = (ValaErrorCode*) vala_error_code_construct (object_type, name, source_reference, NULL);
	vala_error_code_set_value (self, value);
	return self;
}


ValaErrorCode* vala_error_code_new_with_value (const char* name, ValaExpression* value, ValaSourceReference* source_reference) {
	return vala_error_code_construct_with_value (VALA_TYPE_ERROR_CODE, name, value, source_reference);
}


static void vala_error_code_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaErrorCode * self;
	self = (ValaErrorCode*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_error_code (visitor, self);
}


static void vala_error_code_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaErrorCode * self;
	self = (ValaErrorCode*) base;
	g_return_if_fail (visitor != NULL);
	if (self->priv->_value != NULL) {
		vala_code_node_accept ((ValaCodeNode*) self->priv->_value, visitor);
	}
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


static char* vala_error_code_real_get_cname (ValaTypeSymbol* base, gboolean const_type) {
	ValaErrorCode * self;
	char* result = NULL;
	self = (ValaErrorCode*) base;
	if (self->priv->cname == NULL) {
		ValaErrorDomain* edomain;
		char* _tmp0_;
		char* _tmp1_;
		edomain = _vala_code_node_ref0 (VALA_ERROR_DOMAIN (vala_symbol_get_parent_symbol ((ValaSymbol*) self)));
		self->priv->cname = (_tmp1_ = g_strdup_printf ("%s%s", _tmp0_ = vala_symbol_get_cprefix ((ValaSymbol*) edomain), vala_symbol_get_name ((ValaSymbol*) self)), _g_free0 (self->priv->cname), _tmp1_);
		_g_free0 (_tmp0_);
		_vala_code_node_unref0 (edomain);
	}
	result = g_strdup (self->priv->cname);
	return result;
}


static char* vala_error_code_real_get_lower_case_cname (ValaSymbol* base, const char* infix) {
	ValaErrorCode * self;
	char* result = NULL;
	char* _tmp0_;
	char* _tmp1_;
	self = (ValaErrorCode*) base;
	result = (_tmp1_ = g_utf8_strdown (_tmp0_ = vala_typesymbol_get_cname ((ValaTypeSymbol*) self, FALSE), -1), _g_free0 (_tmp0_), _tmp1_);
	return result;
}


static gboolean vala_error_code_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer) {
	ValaErrorCode * self;
	gboolean result = FALSE;
	self = (ValaErrorCode*) base;
	g_return_val_if_fail (analyzer != NULL, FALSE);
	if (vala_code_node_get_checked ((ValaCodeNode*) self)) {
		result = !vala_code_node_get_error ((ValaCodeNode*) self);
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	if (self->priv->_value != NULL) {
		vala_code_node_check ((ValaCodeNode*) self->priv->_value, analyzer);
	}
	result = !vala_code_node_get_error ((ValaCodeNode*) self);
	return result;
}


ValaExpression* vala_error_code_get_value (ValaErrorCode* self) {
	ValaExpression* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_value;
	return result;
}


void vala_error_code_set_value (ValaErrorCode* self, ValaExpression* value) {
	ValaExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_value = (_tmp0_ = _vala_code_node_ref0 (value), _vala_code_node_unref0 (self->priv->_value), _tmp0_);
}


static void vala_error_code_class_init (ValaErrorCodeClass * klass) {
	vala_error_code_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->finalize = vala_error_code_finalize;
	g_type_class_add_private (klass, sizeof (ValaErrorCodePrivate));
	VALA_CODE_NODE_CLASS (klass)->accept = vala_error_code_real_accept;
	VALA_CODE_NODE_CLASS (klass)->accept_children = vala_error_code_real_accept_children;
	VALA_TYPESYMBOL_CLASS (klass)->get_cname = vala_error_code_real_get_cname;
	VALA_SYMBOL_CLASS (klass)->get_lower_case_cname = vala_error_code_real_get_lower_case_cname;
	VALA_CODE_NODE_CLASS (klass)->check = vala_error_code_real_check;
}


static void vala_error_code_instance_init (ValaErrorCode * self) {
	self->priv = VALA_ERROR_CODE_GET_PRIVATE (self);
}


static void vala_error_code_finalize (ValaCodeNode* obj) {
	ValaErrorCode * self;
	self = VALA_ERROR_CODE (obj);
	_vala_code_node_unref0 (self->priv->_value);
	_g_free0 (self->priv->cname);
	VALA_CODE_NODE_CLASS (vala_error_code_parent_class)->finalize (obj);
}


/**
 * Represents an enum member in the source code.
 */
GType vala_error_code_get_type (void) {
	static volatile gsize vala_error_code_type_id__volatile = 0;
	if (g_once_init_enter (&vala_error_code_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaErrorCodeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_error_code_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaErrorCode), 0, (GInstanceInitFunc) vala_error_code_instance_init, NULL };
		GType vala_error_code_type_id;
		vala_error_code_type_id = g_type_register_static (VALA_TYPE_TYPESYMBOL, "ValaErrorCode", &g_define_type_info, 0);
		g_once_init_leave (&vala_error_code_type_id__volatile, vala_error_code_type_id);
	}
	return vala_error_code_type_id__volatile;
}




