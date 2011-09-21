/* clutter-gtk-0.10.vapi generated by vapigen, do not modify. */

[CCode (cprefix = "GtkClutter", lower_case_cprefix = "gtk_clutter_")]
namespace GtkClutter {
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public class Embed : Gtk.Container, Atk.Implementor, Gtk.Buildable {
		[CCode (type = "GtkWidget*", has_construct_function = false)]
		public Embed ();
		public unowned Clutter.Actor get_stage ();
	}
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public class Viewport : Clutter.Actor, GtkClutter.Zoomable, GtkClutter.Scrollable, Clutter.Container, Clutter.Scriptable {
		[CCode (type = "ClutterActor*", has_construct_function = false)]
		public Viewport (Gtk.Adjustment h_adjust, Gtk.Adjustment v_adjust, Gtk.Adjustment z_adjust);
		public void get_origin (float x, float y, float z);
		[NoAccessorMethod]
		public Clutter.Actor child { owned get; set; }
		public Clutter.Vertex origin { get; }
	}
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public interface Scrollable {
		public abstract void get_adjustments (out unowned Gtk.Adjustment h_adjust, out unowned Gtk.Adjustment v_adjust);
		public abstract void set_adjustments (Gtk.Adjustment h_adjust, Gtk.Adjustment v_adjust);
	}
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public interface Zoomable {
		public abstract unowned Gtk.Adjustment get_adjustment ();
		public abstract void set_adjustment (Gtk.Adjustment z_adjust);
	}
	[CCode (cprefix = "CLUTTER_INIT_ERROR_", has_type_id = false, cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public enum ClutterGtkInitError {
		LAST,
		GTK
	}
	[CCode (cprefix = "CLUTTER_GTK_TEXTURE_", has_type_id = false, cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public enum ClutterGtkTextureError {
		INVALID_STOCK_ID,
		ERROR_LAST
	}
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static void get_base_color (Gtk.Widget widget, Gtk.StateType state, out Clutter.Color color);
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static void get_bg_color (Gtk.Widget widget, Gtk.StateType state, out Clutter.Color color);
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static void get_dark_color (Gtk.Widget widget, Gtk.StateType state, out Clutter.Color color);
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static void get_fg_color (Gtk.Widget widget, Gtk.StateType state, out Clutter.Color color);
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static void get_light_color (Gtk.Widget widget, Gtk.StateType state, out Clutter.Color color);
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static void get_mid_color (Gtk.Widget widget, Gtk.StateType state, out Clutter.Color color);
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static void get_text_aa_color (Gtk.Widget widget, Gtk.StateType state, out Clutter.Color color);
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static void get_text_color (Gtk.Widget widget, Gtk.StateType state, out Clutter.Color color);
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static Clutter.InitError init ([CCode (array_length_pos = 0.9)] ref unowned string[] argv);
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static Clutter.InitError init_with_args ([CCode (array_length_pos = 0.9)] ref unowned string[] argv, string parameter_string, [CCode (array_length = false)] GLib.OptionEntry[] entries, string? translation_domain) throws GLib.Error;
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static GLib.Quark texture_error_quark ();
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static unowned Clutter.Actor texture_new_from_icon_name (Gtk.Widget widget, string icon_name, Gtk.IconSize size);
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static unowned Clutter.Actor texture_new_from_pixbuf (Gdk.Pixbuf pixbuf);
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static unowned Clutter.Actor texture_new_from_stock (Gtk.Widget widget, string stock_id, Gtk.IconSize size);
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static bool texture_set_from_icon_name (Clutter.Texture texture, Gtk.Widget widget, string icon_name, Gtk.IconSize size) throws GLib.Error;
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static bool texture_set_from_pixbuf (Clutter.Texture texture, Gdk.Pixbuf pixbuf) throws GLib.Error;
	[CCode (cheader_filename = "clutter-gtk/clutter-gtk.h")]
	public static bool texture_set_from_stock (Clutter.Texture texture, Gtk.Widget widget, string stock_id, Gtk.IconSize size) throws GLib.Error;
}
