/* valaccodecompiler.c generated by valac, the Vala compiler
 * generated from valaccodecompiler.vala, do not modify */

/* valaccodecompiler.vala
 *
 * Copyright (C) 2007-2009  Jürg Billeter
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
#include <vala.h>
#include <valagee.h>
#include <stdio.h>
#include <glib/gstdio.h>
#include <gobject/gvaluecollector.h>


#define VALA_TYPE_CCODE_COMPILER (vala_ccode_compiler_get_type ())
#define VALA_CCODE_COMPILER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_COMPILER, ValaCCodeCompiler))
#define VALA_CCODE_COMPILER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_COMPILER, ValaCCodeCompilerClass))
#define VALA_IS_CCODE_COMPILER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_COMPILER))
#define VALA_IS_CCODE_COMPILER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_COMPILER))
#define VALA_CCODE_COMPILER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_COMPILER, ValaCCodeCompilerClass))

typedef struct _ValaCCodeCompiler ValaCCodeCompiler;
typedef struct _ValaCCodeCompilerClass ValaCCodeCompilerClass;
typedef struct _ValaCCodeCompilerPrivate ValaCCodeCompilerPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _vala_collection_object_unref0(var) ((var == NULL) ? NULL : (var = (vala_collection_object_unref (var), NULL)))
#define _vala_source_file_unref0(var) ((var == NULL) ? NULL : (var = (vala_source_file_unref (var), NULL)))
typedef struct _ValaParamSpecCCodeCompiler ValaParamSpecCCodeCompiler;

struct _ValaCCodeCompiler {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCCodeCompilerPrivate * priv;
};

struct _ValaCCodeCompilerClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCCodeCompiler *self);
};

struct _ValaParamSpecCCodeCompiler {
	GParamSpec parent_instance;
};


static gpointer vala_ccode_compiler_parent_class = NULL;

gpointer vala_ccode_compiler_ref (gpointer instance);
void vala_ccode_compiler_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_compiler (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_compiler (GValue* value, gpointer v_object);
void vala_value_take_ccode_compiler (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_compiler (const GValue* value);
GType vala_ccode_compiler_get_type (void) G_GNUC_CONST;
enum  {
	VALA_CCODE_COMPILER_DUMMY_PROPERTY
};
ValaCCodeCompiler* vala_ccode_compiler_new (void);
ValaCCodeCompiler* vala_ccode_compiler_construct (GType object_type);
static gboolean vala_ccode_compiler_package_exists (const char* package_name);
void vala_ccode_compiler_compile (ValaCCodeCompiler* self, ValaCodeContext* context, const char* cc_command, char** cc_options, int cc_options_length1);
static void vala_ccode_compiler_finalize (ValaCCodeCompiler* obj);
static int _vala_strcmp0 (const char * str1, const char * str2);



ValaCCodeCompiler* vala_ccode_compiler_construct (GType object_type) {
	ValaCCodeCompiler* self = (ValaCCodeCompiler*) g_type_create_instance (object_type);
	return self;
}


ValaCCodeCompiler* vala_ccode_compiler_new (void) {
	return vala_ccode_compiler_construct (VALA_TYPE_CCODE_COMPILER);
}


static gboolean vala_ccode_compiler_package_exists (const char* package_name) {
	gboolean result = FALSE;
	char* pc;
	gint exit_status = 0;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (package_name != NULL, FALSE);
	pc = g_strconcat ("pkg-config --exists ", package_name, NULL);
	{
		g_spawn_command_line_sync (pc, NULL, NULL, &exit_status, &_inner_error_);
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_SPAWN_ERROR) {
				goto __catch1_g_spawn_error;
			}
			_g_free0 (pc);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return FALSE;
		}
		result = 0 == exit_status;
		_g_free0 (pc);
		return result;
	}
	goto __finally1;
	__catch1_g_spawn_error:
	{
		GError * e;
		e = _inner_error_;
		_inner_error_ = NULL;
		{
			vala_report_error (NULL, e->message);
			result = FALSE;
			_g_error_free0 (e);
			_g_free0 (pc);
			return result;
		}
	}
	__finally1:
	{
		_g_free0 (pc);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return FALSE;
	}
	_g_free0 (pc);
}


/**
 * Compile generated C code to object code and optionally link object
 * files.
 *
 * @param context a code context
 */
static char* string_strip (const char* self) {
	char* result = NULL;
	char* _result_;
	g_return_val_if_fail (self != NULL, NULL);
	_result_ = g_strdup (self);
	g_strstrip (_result_);
	result = _result_;
	return result;
}


void vala_ccode_compiler_compile (ValaCCodeCompiler* self, ValaCodeContext* context, const char* cc_command, char** cc_options, int cc_options_length1) {
	gboolean use_pkgconfig;
	char* pc;
	char* pkgflags;
	char* cmdline;
	ValaList* source_files;
	ValaList* c_source_files;
	char* _tmp25_;
	char* _tmp26_;
	char* _tmp27_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (context != NULL);
	use_pkgconfig = FALSE;
	pc = g_strdup ("pkg-config --cflags");
	if (!vala_code_context_get_compile_only (context)) {
		char* _tmp0_;
		pc = (_tmp0_ = g_strconcat (pc, " --libs", NULL), _g_free0 (pc), _tmp0_);
	}
	if (vala_code_context_get_profile (context) == VALA_PROFILE_GOBJECT) {
		char* _tmp1_;
		use_pkgconfig = TRUE;
		pc = (_tmp1_ = g_strconcat (pc, " gobject-2.0", NULL), _g_free0 (pc), _tmp1_);
		if (vala_code_context_get_thread (context)) {
			char* _tmp2_;
			pc = (_tmp2_ = g_strconcat (pc, " gthread-2.0", NULL), _g_free0 (pc), _tmp2_);
		}
	}
	{
		ValaList* _tmp3_;
		ValaIterator* _tmp4_;
		ValaIterator* _pkg_it;
		_pkg_it = (_tmp4_ = vala_iterable_iterator ((ValaIterable*) (_tmp3_ = vala_code_context_get_packages (context))), _vala_collection_object_unref0 (_tmp3_), _tmp4_);
		while (TRUE) {
			char* pkg;
			if (!vala_iterator_next (_pkg_it)) {
				break;
			}
			pkg = (char*) vala_iterator_get (_pkg_it);
			if (vala_ccode_compiler_package_exists (pkg)) {
				char* _tmp5_;
				char* _tmp6_;
				use_pkgconfig = TRUE;
				pc = (_tmp6_ = g_strconcat (pc, _tmp5_ = g_strconcat (" ", pkg, NULL), NULL), _g_free0 (pc), _tmp6_);
				_g_free0 (_tmp5_);
			}
			_g_free0 (pkg);
		}
		_vala_collection_object_unref0 (_pkg_it);
	}
	pkgflags = g_strdup ("");
	if (use_pkgconfig) {
		{
			gint exit_status = 0;
			char* _tmp7_ = NULL;
			char* _tmp8_;
			g_spawn_command_line_sync (pc, &_tmp7_, NULL, &exit_status, &_inner_error_);
			pkgflags = (_tmp8_ = _tmp7_, _g_free0 (pkgflags), _tmp8_);
			if (_inner_error_ != NULL) {
				if (_inner_error_->domain == G_SPAWN_ERROR) {
					goto __catch2_g_spawn_error;
				}
				_g_free0 (pkgflags);
				_g_free0 (pc);
				g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return;
			}
			if (exit_status != 0) {
				char* _tmp9_;
				vala_report_error (NULL, _tmp9_ = g_strdup_printf ("pkg-config exited with status %d", exit_status));
				_g_free0 (_tmp9_);
				_g_free0 (pkgflags);
				_g_free0 (pc);
				return;
			}
		}
		goto __finally2;
		__catch2_g_spawn_error:
		{
			GError * e;
			e = _inner_error_;
			_inner_error_ = NULL;
			{
				vala_report_error (NULL, e->message);
				_g_error_free0 (e);
				_g_free0 (pkgflags);
				_g_free0 (pc);
				return;
			}
		}
		__finally2:
		if (_inner_error_ != NULL) {
			_g_free0 (pkgflags);
			_g_free0 (pc);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
	if (cc_command == NULL) {
		cc_command = "cc";
	}
	cmdline = g_strdup (cc_command);
	if (vala_code_context_get_debug (context)) {
		char* _tmp10_;
		cmdline = (_tmp10_ = g_strconcat (cmdline, " -g", NULL), _g_free0 (cmdline), _tmp10_);
	}
	if (vala_code_context_get_compile_only (context)) {
		char* _tmp11_;
		cmdline = (_tmp11_ = g_strconcat (cmdline, " -c", NULL), _g_free0 (cmdline), _tmp11_);
	} else {
		if (vala_code_context_get_output (context) != NULL) {
			char* output;
			gboolean _tmp12_ = FALSE;
			gboolean _tmp13_ = FALSE;
			char* _tmp15_;
			char* _tmp16_;
			char* _tmp17_;
			output = g_strdup (vala_code_context_get_output (context));
			if (vala_code_context_get_directory (context) != NULL) {
				_tmp13_ = _vala_strcmp0 (vala_code_context_get_directory (context), "") != 0;
			} else {
				_tmp13_ = FALSE;
			}
			if (_tmp13_) {
				_tmp12_ = !g_path_is_absolute (vala_code_context_get_output (context));
			} else {
				_tmp12_ = FALSE;
			}
			if (_tmp12_) {
				char* _tmp14_;
				output = (_tmp14_ = g_strdup_printf ("%s%c%s", vala_code_context_get_directory (context), (gint) G_DIR_SEPARATOR, vala_code_context_get_output (context)), _g_free0 (output), _tmp14_);
			}
			cmdline = (_tmp17_ = g_strconcat (cmdline, _tmp16_ = g_strconcat (" -o ", _tmp15_ = g_shell_quote (output), NULL), NULL), _g_free0 (cmdline), _tmp17_);
			_g_free0 (_tmp16_);
			_g_free0 (_tmp15_);
			_g_free0 (output);
		}
	}
	source_files = vala_code_context_get_source_files (context);
	{
		ValaIterator* _file_it;
		_file_it = vala_iterable_iterator ((ValaIterable*) source_files);
		while (TRUE) {
			ValaSourceFile* file;
			if (!vala_iterator_next (_file_it)) {
				break;
			}
			file = (ValaSourceFile*) vala_iterator_get (_file_it);
			if (!vala_source_file_get_external_package (file)) {
				char* _tmp18_;
				char* _tmp19_;
				char* _tmp20_;
				char* _tmp21_;
				cmdline = (_tmp21_ = g_strconcat (cmdline, _tmp20_ = g_strconcat (" ", _tmp19_ = g_shell_quote (_tmp18_ = vala_source_file_get_csource_filename (file)), NULL), NULL), _g_free0 (cmdline), _tmp21_);
				_g_free0 (_tmp20_);
				_g_free0 (_tmp19_);
				_g_free0 (_tmp18_);
			}
			_vala_source_file_unref0 (file);
		}
		_vala_collection_object_unref0 (_file_it);
	}
	c_source_files = vala_code_context_get_c_source_files (context);
	{
		ValaIterator* _file_it;
		_file_it = vala_iterable_iterator ((ValaIterable*) c_source_files);
		while (TRUE) {
			char* file;
			char* _tmp22_;
			char* _tmp23_;
			char* _tmp24_;
			if (!vala_iterator_next (_file_it)) {
				break;
			}
			file = (char*) vala_iterator_get (_file_it);
			cmdline = (_tmp24_ = g_strconcat (cmdline, _tmp23_ = g_strconcat (" ", _tmp22_ = g_shell_quote (file), NULL), NULL), _g_free0 (cmdline), _tmp24_);
			_g_free0 (_tmp23_);
			_g_free0 (_tmp22_);
			_g_free0 (file);
		}
		_vala_collection_object_unref0 (_file_it);
	}
	cmdline = (_tmp27_ = g_strconcat (cmdline, _tmp26_ = g_strconcat (" ", _tmp25_ = string_strip (pkgflags), NULL), NULL), _g_free0 (cmdline), _tmp27_);
	_g_free0 (_tmp26_);
	_g_free0 (_tmp25_);
	{
		char** cc_option_collection;
		int cc_option_collection_length1;
		int cc_option_it;
		cc_option_collection = cc_options;
		cc_option_collection_length1 = cc_options_length1;
		for (cc_option_it = 0; cc_option_it < cc_options_length1; cc_option_it = cc_option_it + 1) {
			char* cc_option;
			cc_option = g_strdup (cc_option_collection[cc_option_it]);
			{
				char* _tmp28_;
				char* _tmp29_;
				char* _tmp30_;
				cmdline = (_tmp30_ = g_strconcat (cmdline, _tmp29_ = g_strconcat (" ", _tmp28_ = g_shell_quote (cc_option), NULL), NULL), _g_free0 (cmdline), _tmp30_);
				_g_free0 (_tmp29_);
				_g_free0 (_tmp28_);
				_g_free0 (cc_option);
			}
		}
	}
	if (vala_code_context_get_verbose_mode (context)) {
		fprintf (stdout, "%s\n", cmdline);
	}
	{
		gint exit_status = 0;
		g_spawn_command_line_sync (cmdline, NULL, NULL, &exit_status, &_inner_error_);
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_SPAWN_ERROR) {
				goto __catch3_g_spawn_error;
			}
			_vala_collection_object_unref0 (c_source_files);
			_vala_collection_object_unref0 (source_files);
			_g_free0 (cmdline);
			_g_free0 (pkgflags);
			_g_free0 (pc);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		if (exit_status != 0) {
			char* _tmp31_;
			vala_report_error (NULL, _tmp31_ = g_strdup_printf ("cc exited with status %d", exit_status));
			_g_free0 (_tmp31_);
		}
	}
	goto __finally3;
	__catch3_g_spawn_error:
	{
		GError * e;
		e = _inner_error_;
		_inner_error_ = NULL;
		{
			vala_report_error (NULL, e->message);
			_g_error_free0 (e);
		}
	}
	__finally3:
	if (_inner_error_ != NULL) {
		_vala_collection_object_unref0 (c_source_files);
		_vala_collection_object_unref0 (source_files);
		_g_free0 (cmdline);
		_g_free0 (pkgflags);
		_g_free0 (pc);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	{
		ValaIterator* _file_it;
		_file_it = vala_iterable_iterator ((ValaIterable*) source_files);
		while (TRUE) {
			ValaSourceFile* file;
			if (!vala_iterator_next (_file_it)) {
				break;
			}
			file = (ValaSourceFile*) vala_iterator_get (_file_it);
			if (!vala_source_file_get_external_package (file)) {
				if (!vala_code_context_get_save_csources (context)) {
					char* _tmp32_;
					g_unlink (_tmp32_ = vala_source_file_get_csource_filename (file));
					_g_free0 (_tmp32_);
				}
			}
			_vala_source_file_unref0 (file);
		}
		_vala_collection_object_unref0 (_file_it);
	}
	_vala_collection_object_unref0 (c_source_files);
	_vala_collection_object_unref0 (source_files);
	_g_free0 (cmdline);
	_g_free0 (pkgflags);
	_g_free0 (pc);
}


static void vala_value_ccode_compiler_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void vala_value_ccode_compiler_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		vala_ccode_compiler_unref (value->data[0].v_pointer);
	}
}


static void vala_value_ccode_compiler_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = vala_ccode_compiler_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer vala_value_ccode_compiler_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* vala_value_ccode_compiler_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		ValaCCodeCompiler* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = vala_ccode_compiler_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* vala_value_ccode_compiler_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	ValaCCodeCompiler** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = vala_ccode_compiler_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* vala_param_spec_ccode_compiler (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ValaParamSpecCCodeCompiler* spec;
	g_return_val_if_fail (g_type_is_a (object_type, VALA_TYPE_CCODE_COMPILER), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer vala_value_get_ccode_compiler (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_CCODE_COMPILER), NULL);
	return value->data[0].v_pointer;
}


void vala_value_set_ccode_compiler (GValue* value, gpointer v_object) {
	ValaCCodeCompiler* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_CCODE_COMPILER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_CCODE_COMPILER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		vala_ccode_compiler_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_ccode_compiler_unref (old);
	}
}


void vala_value_take_ccode_compiler (GValue* value, gpointer v_object) {
	ValaCCodeCompiler* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_CCODE_COMPILER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_CCODE_COMPILER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_ccode_compiler_unref (old);
	}
}


static void vala_ccode_compiler_class_init (ValaCCodeCompilerClass * klass) {
	vala_ccode_compiler_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_COMPILER_CLASS (klass)->finalize = vala_ccode_compiler_finalize;
}


static void vala_ccode_compiler_instance_init (ValaCCodeCompiler * self) {
	self->ref_count = 1;
}


static void vala_ccode_compiler_finalize (ValaCCodeCompiler* obj) {
	ValaCCodeCompiler * self;
	self = VALA_CCODE_COMPILER (obj);
}


/**
 * Interface to the C compiler.
 */
GType vala_ccode_compiler_get_type (void) {
	static volatile gsize vala_ccode_compiler_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_compiler_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { vala_value_ccode_compiler_init, vala_value_ccode_compiler_free_value, vala_value_ccode_compiler_copy_value, vala_value_ccode_compiler_peek_pointer, "p", vala_value_ccode_compiler_collect_value, "p", vala_value_ccode_compiler_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeCompilerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_compiler_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeCompiler), 0, (GInstanceInitFunc) vala_ccode_compiler_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType vala_ccode_compiler_type_id;
		vala_ccode_compiler_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ValaCCodeCompiler", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&vala_ccode_compiler_type_id__volatile, vala_ccode_compiler_type_id);
	}
	return vala_ccode_compiler_type_id__volatile;
}


gpointer vala_ccode_compiler_ref (gpointer instance) {
	ValaCCodeCompiler* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void vala_ccode_compiler_unref (gpointer instance) {
	ValaCCodeCompiler* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		VALA_CCODE_COMPILER_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}


static int _vala_strcmp0 (const char * str1, const char * str2) {
	if (str1 == NULL) {
		return -(str1 != str2);
	}
	if (str2 == NULL) {
		return str1 != str2;
	}
	return strcmp (str1, str2);
}




