// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <ytkmm/menubar.h>
#include <ytkmm/private/menubar_p.h>


// -*- c++ -*-
/* $Id: menubar.ccg,v 1.5 2004/04/07 12:49:39 murrayc Exp $ */

/* Copyright 1998-2002 The gtkmm Development Team
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

#include <ytk/ytk.h>

namespace Gtk
{

MenuBar::MenuBar()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::MenuShell(Glib::ConstructParams(menubar_class_.init()))
{
  // Connect to the signal instead of overriding the on_hierarchy_changed()
  // method because invocation of C++ default signal handlers is skipped
  // for gtkmmproc-generated classes (a gtkmm-wide optimization).

  signal_realize().connect(sigc::mem_fun(*this, &MenuBar::init_accels_handler_));
}

void MenuBar::init_accels_handler_()
{
  if(gobj())
  {
    if(Window *const toplevel = dynamic_cast<Window*>(get_toplevel()))
    {
      accelerate(*toplevel);
    }
  }
}

} // namespace Gtk


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::PackDirection>::value_type()
{
  return gtk_pack_direction_get_type();
}


namespace Glib
{

Gtk::MenuBar* wrap(GtkMenuBar* object, bool take_copy)
{
  return dynamic_cast<Gtk::MenuBar *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& MenuBar_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &MenuBar_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_menu_bar_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void MenuBar_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* MenuBar_Class::wrap_new(GObject* o)
{
  return manage(new MenuBar((GtkMenuBar*)(o)));

}


/* The implementation: */

MenuBar::MenuBar(const Glib::ConstructParams& construct_params)
:
  Gtk::MenuShell(construct_params)
{
  }

MenuBar::MenuBar(GtkMenuBar* castitem)
:
  Gtk::MenuShell((GtkMenuShell*)(castitem))
{
  }

MenuBar::~MenuBar()
{
  destroy_();
}

MenuBar::CppClassType MenuBar::menubar_class_; // initialize static member

GType MenuBar::get_type()
{
  return menubar_class_.init().get_type();
}


GType MenuBar::get_base_type()
{
  return gtk_menu_bar_get_type();
}


PackDirection MenuBar::get_pack_direction() const
{
  return ((PackDirection)(gtk_menu_bar_get_pack_direction(const_cast<GtkMenuBar*>(gobj()))));
}

void MenuBar::set_pack_direction(PackDirection pack_dir)
{
  gtk_menu_bar_set_pack_direction(gobj(), ((GtkPackDirection)(pack_dir)));
}

PackDirection MenuBar::get_child_pack_direction() const
{
  return ((PackDirection)(gtk_menu_bar_get_child_pack_direction(const_cast<GtkMenuBar*>(gobj()))));
}

void MenuBar::set_child_pack_direction(PackDirection child_pack_dir)
{
  gtk_menu_bar_set_child_pack_direction(gobj(), ((GtkPackDirection)(child_pack_dir)));
}


Glib::PropertyProxy< PackDirection > MenuBar::property_pack_direction() 
{
  return Glib::PropertyProxy< PackDirection >(this, "pack-direction");
}

Glib::PropertyProxy_ReadOnly< PackDirection > MenuBar::property_pack_direction() const
{
  return Glib::PropertyProxy_ReadOnly< PackDirection >(this, "pack-direction");
}

Glib::PropertyProxy< PackDirection > MenuBar::property_child_pack_direction() 
{
  return Glib::PropertyProxy< PackDirection >(this, "child-pack-direction");
}

Glib::PropertyProxy_ReadOnly< PackDirection > MenuBar::property_child_pack_direction() const
{
  return Glib::PropertyProxy_ReadOnly< PackDirection >(this, "child-pack-direction");
}


} // namespace Gtk


