/* gee.vapi generated by valac, do not modify. */

[CCode (cprefix = "Vala", lower_case_cprefix = "vala_")]
namespace Vala {
	[CCode (cheader_filename = "valagee.h")]
	public class ArrayList<G> : Vala.CollectionObject, Vala.Iterable<G>, Vala.Collection<G>, Vala.List<G> {
		public ArrayList (GLib.EqualFunc equal_func = GLib.direct_equal);
		public GLib.EqualFunc equal_func { set; }
	}
	[CCode (ref_function = "vala_collection_object_ref", unref_function = "vala_collection_object_unref", cheader_filename = "valagee.h")]
	public class CollectionObject {
		public CollectionObject ();
	}
	[CCode (cheader_filename = "valagee.h")]
	public class HashMap<K,V> : Vala.CollectionObject, Vala.Map<K,V> {
		public HashMap (GLib.HashFunc key_hash_func = GLib.direct_hash, GLib.EqualFunc key_equal_func = GLib.direct_equal, GLib.EqualFunc value_equal_func = GLib.direct_equal);
		public GLib.EqualFunc key_equal_func { set; }
		public GLib.HashFunc key_hash_func { set; }
		public GLib.EqualFunc value_equal_func { set; }
	}
	[CCode (cheader_filename = "valagee.h")]
	public class HashSet<G> : Vala.CollectionObject, Vala.Iterable<G>, Vala.Collection<G>, Vala.Set<G> {
		public HashSet (GLib.HashFunc hash_func = GLib.direct_hash, GLib.EqualFunc equal_func = GLib.direct_equal);
		public GLib.EqualFunc equal_func { set; }
		public GLib.HashFunc hash_func { set; }
	}
	[CCode (cheader_filename = "valagee.h")]
	public interface Collection<G> : Vala.Iterable<G> {
		public abstract bool add (G item);
		public abstract void clear ();
		public abstract bool contains (G item);
		public abstract bool remove (G item);
		public abstract int size { get; }
	}
	[CCode (cheader_filename = "valagee.h")]
	public interface Iterable<G> : Vala.CollectionObject {
		public abstract GLib.Type get_element_type ();
		public abstract Vala.Iterator<G> iterator ();
	}
	[CCode (cheader_filename = "valagee.h")]
	public interface Iterator<G> : Vala.CollectionObject {
		public abstract G @get ();
		public abstract bool next ();
	}
	[CCode (cheader_filename = "valagee.h")]
	public interface List<G> : Vala.Collection<G> {
		public abstract G @get (int index);
		public abstract int index_of (G item);
		public abstract void insert (int index, G item);
		public abstract void remove_at (int index);
		public abstract void @set (int index, G item);
	}
	[CCode (cheader_filename = "valagee.h")]
	public interface Map<K,V> : Vala.CollectionObject {
		public abstract void clear ();
		public abstract bool contains (K key);
		public abstract V @get (K key);
		public abstract Vala.Set<K> get_keys ();
		public abstract Vala.Collection<V> get_values ();
		public abstract bool remove (K key);
		public abstract void @set (K key, V value);
		public abstract int size { get; }
	}
	[CCode (cheader_filename = "valagee.h")]
	public interface Set<G> : Vala.Collection<G> {
	}
}
