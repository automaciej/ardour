// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <ytkmm/filefilter.h>
#include <ytkmm/private/filefilter_p.h>


// -*- c++ -*-
/* $Id: filefilter.ccg,v 1.8 2006/05/11 11:40:24 murrayc Exp $ */

/* Copyright 2003 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <ytk/ytk.h> //For gtk_file_filter_flags_get_type().

static gboolean SignalProxy_Custom_gtk_callback(const GtkFileFilterInfo* filter_info, gpointer data)
{
  Gtk::FileFilter::SlotCustom* the_slot = static_cast<Gtk::FileFilter::SlotCustom*>(data);

  try
  {
    //Create a suitable C++ instance to pass to the C++ method:
    Gtk::FileFilter::Info cppInfo;
    cppInfo.contains = (Gtk::FileFilterFlags)filter_info->contains;
    cppInfo.filename = Glib::convert_const_gchar_ptr_to_ustring(filter_info->filename);
    cppInfo.uri = Glib::convert_const_gchar_ptr_to_ustring(filter_info->uri);
    cppInfo.display_name = Glib::convert_const_gchar_ptr_to_ustring(filter_info->display_name);
    cppInfo.mime_type = Glib::convert_const_gchar_ptr_to_ustring(filter_info->mime_type);
  
    return (*the_slot)(cppInfo);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
    return false; //arbitrary default;
  }
}

static void SignalProxy_Custom_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::FileFilter::SlotCustom*>(data);
}


namespace Gtk
{

void FileFilter::add_custom(FileFilterFlags needed, const SlotCustom& slot)
{
  //Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  //It will be deleted when SignalProxy_Custom::gtk_callback_destroy() is called.
  SlotCustom* slot_copy = new SlotCustom(slot);
      
  gtk_file_filter_add_custom(gobj(), (GtkFileFilterFlags)needed,
                             &SignalProxy_Custom_gtk_callback,
                             slot_copy,
                             &SignalProxy_Custom_gtk_callback_destroy);     
}
 
} // namespace Gtk


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::FileFilterFlags>::value_type()
{
  return gtk_file_filter_flags_get_type();
}


namespace Glib
{

Gtk::FileFilter* wrap(GtkFileFilter* object, bool take_copy)
{
  return dynamic_cast<Gtk::FileFilter *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& FileFilter_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FileFilter_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_file_filter_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void FileFilter_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* FileFilter_Class::wrap_new(GObject* o)
{
  return manage(new FileFilter((GtkFileFilter*)(o)));

}


/* The implementation: */

FileFilter::FileFilter(const Glib::ConstructParams& construct_params)
:
  Gtk::Object(construct_params)
{
  }

FileFilter::FileFilter(GtkFileFilter* castitem)
:
  Gtk::Object((GtkObject*)(castitem))
{
  }

FileFilter::~FileFilter()
{
  destroy_();
}

FileFilter::CppClassType FileFilter::filefilter_class_; // initialize static member

GType FileFilter::get_type()
{
  return filefilter_class_.init().get_type();
}


GType FileFilter::get_base_type()
{
  return gtk_file_filter_get_type();
}


FileFilter::FileFilter()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Object(Glib::ConstructParams(filefilter_class_.init()))
{
  

}

void FileFilter::set_name(const Glib::ustring& name)
{
  gtk_file_filter_set_name(gobj(), name.c_str());
}

Glib::ustring FileFilter::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_file_filter_get_name(const_cast<GtkFileFilter*>(gobj())));
}

void FileFilter::add_mime_type(const Glib::ustring& mime_type)
{
  gtk_file_filter_add_mime_type(gobj(), mime_type.c_str());
}

void FileFilter::add_pattern(const Glib::ustring& pattern)
{
  gtk_file_filter_add_pattern(gobj(), pattern.c_str());
}

void FileFilter::add_pixbuf_formats()
{
  gtk_file_filter_add_pixbuf_formats(gobj());
}

FileFilterFlags FileFilter::get_needed() const
{
  return ((FileFilterFlags)(gtk_file_filter_get_needed(const_cast<GtkFileFilter*>(gobj()))));
}


} // namespace Gtk


