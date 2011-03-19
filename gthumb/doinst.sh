schema_install() {
  SCHEMA="$1"
  GCONF_CONFIG_SOURCE="xml::etc/gconf/gconf.xml.defaults" \
  chroot . gconftool-2 --makefile-install-rule \
    /etc/gconf/schemas/$SCHEMA \
    1>/dev/null
}

schema_install gthumb_crop_options.schemas
schema_install gthumb-pixbuf-savers.schemas
schema_install gthumb-gstreamer.schemas
schema_install gthumb_resize_options.schemas
schema_install gthumb_convert_format.schemas
schema_install gthumb_image_print.schemas
schema_install gthumb-picasaweb.schemas
schema_install gthumb_resize_images.schemas
schema_install gthumb_photo_importer.schemas
schema_install gthumb-importer.schemas
schema_install gthumb.schemas
schema_install gthumb_rename_series.schemas
schema_install gthumb_webalbums.schemas
schema_install gthumb-comments.schemas
schema_install gthumb-slideshow.schemas
schema_install gthumb-image-viewer.schemas

# update rarian database
if [ -x usr/bin/rarian-sk-update ]; then
  usr/bin/rarian-sk-update 1> /dev/null 2> /dev/null
fi

# update desktop entries
if [ -x usr/bin/update-desktop-database ]; then
  usr/bin/update-desktop-database 1> /dev/null 2> /dev/null
fi

# update hicolor icons
if [ -e usr/share/icons/hicolor/icon-theme.cache ]; then
    rm -f usr/share/icons/hicolor/icon-theme.cache
    usr/bin/gtk-update-icon-cache -f -q usr/share/icons/hicolor 1>/dev/null 2>/dev/null
fi

# Restart gconfd-2 if running to reload new gconf settings
if ps acx | grep -q gconfd-2 ; then
    killall -HUP gconfd-2 ;
fi

# run gsettings schemas conversion
if [ -x usr/bin/glib-compile-schemas -a -d usr/share/glib-2.0/schemas ]; then
  usr/bin/glib-compile-schemas usr/share/glib-2.0/schemas
fi