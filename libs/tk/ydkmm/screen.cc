// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/screen.h>
#include <gdkmm/private/screen_p.h>


// -*- c++ -*-
/* $Id: screen.ccg,v 1.1 2003/01/21 13:38:38 murrayc Exp $ */

/*
 *
 * Copyright 2002 The gtkmm Development Team
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

#include <gdkmm/display.h>
#include <gdkmm/visual.h>
#include <gdkmm/window.h>
#include <gdkmm/rectangle.h>
#include <ydk/gdk.h>

namespace Gdk
{

} //Gdk


namespace
{


static const Glib::SignalProxyInfo Screen_signal_size_changed_info =
{
  "size-changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Screen_signal_composited_changed_info =
{
  "composited-changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Screen_signal_monitors_changed_info =
{
  "monitors-changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::Screen> wrap(GdkScreen* object, bool take_copy)
{
  return Glib::RefPtr<Gdk::Screen>( dynamic_cast<Gdk::Screen*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& Screen_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Screen_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_screen_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Screen_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->size_changed = &size_changed_callback;
}


void Screen_Class::size_changed_callback(GdkScreen* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_size_changed();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->size_changed)
    (*base->size_changed)(self);
}


Glib::ObjectBase* Screen_Class::wrap_new(GObject* object)
{
  return new Screen((GdkScreen*)object);
}


/* The implementation: */

GdkScreen* Screen::gobj_copy()
{
  reference();
  return gobj();
}

Screen::Screen(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Screen::Screen(GdkScreen* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Screen::~Screen()
{}


Screen::CppClassType Screen::screen_class_; // initialize static member

GType Screen::get_type()
{
  return screen_class_.init().get_type();
}


GType Screen::get_base_type()
{
  return gdk_screen_get_type();
}


Glib::RefPtr<Colormap> Screen::get_default_colormap()
{
  Glib::RefPtr<Colormap> retvalue = Glib::wrap(gdk_screen_get_default_colormap(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Colormap> Screen::get_default_colormap() const
{
  return const_cast<Screen*>(this)->get_default_colormap();
}

void Screen::set_default_colormap(const Glib::RefPtr<const Colormap>& colormap)
{
  gdk_screen_set_default_colormap(gobj(), const_cast<GdkColormap*>(Glib::unwrap<Colormap>(colormap)));
}

Glib::RefPtr<Colormap> Screen::get_system_colormap()
{
  Glib::RefPtr<Colormap> retvalue = Glib::wrap(gdk_screen_get_system_colormap(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Colormap> Screen::get_system_colormap() const
{
  return const_cast<Screen*>(this)->get_system_colormap();
}

Glib::RefPtr<Visual> Screen::get_system_visual()
{
  Glib::RefPtr<Visual> retvalue = Glib::wrap(gdk_screen_get_system_visual(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Visual> Screen::get_system_visual() const
{
  return const_cast<Screen*>(this)->get_system_visual();
}

Glib::RefPtr<Colormap> Screen::get_rgb_colormap()
{
  Glib::RefPtr<Colormap> retvalue = Glib::wrap(gdk_screen_get_rgb_colormap(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Colormap> Screen::get_rgb_colormap() const
{
  return const_cast<Screen*>(this)->get_rgb_colormap();
}

Glib::RefPtr<Visual> Screen::get_rgb_visual()
{
  Glib::RefPtr<Visual> retvalue = Glib::wrap(gdk_screen_get_rgb_visual(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Visual> Screen::get_rgb_visual() const
{
  return const_cast<Screen*>(this)->get_rgb_visual();
}

Glib::RefPtr<Colormap> Screen::get_rgba_colormap()
{
  Glib::RefPtr<Colormap> retvalue = Glib::wrap(gdk_screen_get_rgba_colormap(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Colormap> Screen::get_rgba_colormap() const
{
  return const_cast<Screen*>(this)->get_rgba_colormap();
}

Glib::RefPtr<Visual> Screen::get_rgba_visual()
{
  Glib::RefPtr<Visual> retvalue = Glib::wrap(gdk_screen_get_rgba_visual(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Visual> Screen::get_rgba_visual() const
{
  return const_cast<Screen*>(this)->get_rgba_visual();
}

bool Screen::is_composited() const
{
  return gdk_screen_is_composited(const_cast<GdkScreen*>(gobj()));
}

Glib::RefPtr<Window> Screen::get_root_window()
{
  Glib::RefPtr<Window> retvalue = Glib::wrap((GdkWindowObject*)(gdk_screen_get_root_window(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Window> Screen::get_root_window() const
{
  return const_cast<Screen*>(this)->get_root_window();
}

Glib::RefPtr<Display> Screen::get_display()
{
  Glib::RefPtr<Display> retvalue = Glib::wrap(gdk_screen_get_display(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Display> Screen::get_display() const
{
  return const_cast<Screen*>(this)->get_display();
}

int Screen::get_number() const
{
  return gdk_screen_get_number(const_cast<GdkScreen*>(gobj()));
}

int Screen::get_width() const
{
  return gdk_screen_get_width(const_cast<GdkScreen*>(gobj()));
}

int Screen::get_height() const
{
  return gdk_screen_get_height(const_cast<GdkScreen*>(gobj()));
}

int Screen::get_width_mm() const
{
  return gdk_screen_get_width_mm(const_cast<GdkScreen*>(gobj()));
}

int Screen::get_height_mm() const
{
  return gdk_screen_get_height_mm(const_cast<GdkScreen*>(gobj()));
}

Glib::ListHandle< Glib::RefPtr<Visual> > Screen::list_visuals()
{
  return Glib::ListHandle< Glib::RefPtr<Visual> >(gdk_screen_list_visuals(gobj()), Glib::OWNERSHIP_SHALLOW);
}

Glib::ListHandle< Glib::RefPtr<Window> > Screen::get_toplevel_windows()
{
  return Glib::ListHandle< Glib::RefPtr<Window> >(gdk_screen_get_toplevel_windows(gobj()), Glib::OWNERSHIP_SHALLOW);
}

Glib::ustring Screen::make_display_name()
{
  return Glib::convert_return_gchar_ptr_to_ustring(gdk_screen_make_display_name(gobj()));
}

int Screen::get_n_monitors() const
{
  return gdk_screen_get_n_monitors(const_cast<GdkScreen*>(gobj()));
}

int Screen::get_primary_monitor() const
{
  return gdk_screen_get_primary_monitor(const_cast<GdkScreen*>(gobj()));
}

void Screen::get_monitor_geometry(int monitor_num, Rectangle& dest) const
{
  gdk_screen_get_monitor_geometry(const_cast<GdkScreen*>(gobj()), monitor_num, (dest).gobj());
}

int Screen::get_monitor_at_point(int x, int y) const
{
  return gdk_screen_get_monitor_at_point(const_cast<GdkScreen*>(gobj()), x, y);
}

int Screen::get_monitor_at_window(const Glib::RefPtr<Window>& window) const
{
  return gdk_screen_get_monitor_at_window(const_cast<GdkScreen*>(gobj()), Glib::unwrap(window));
}

int Screen::get_monitor_width_mm(int monitor_num) const
{
  return gdk_screen_get_monitor_width_mm(const_cast<GdkScreen*>(gobj()), monitor_num);
}

int Screen::get_monitor_height_mm(int monitor_num) const
{
  return gdk_screen_get_monitor_height_mm(const_cast<GdkScreen*>(gobj()), monitor_num);
}

Glib::ustring Screen::get_monitor_plug_name(int monitor_num) const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gdk_screen_get_monitor_plug_name(const_cast<GdkScreen*>(gobj()), monitor_num));
}

void Screen::broadcast_client_message(GdkEvent* event)
{
  gdk_screen_broadcast_client_message(gobj(), event);
}

Glib::RefPtr<Screen> Screen::get_default()
{

  Glib::RefPtr<Screen> retvalue = Glib::wrap(gdk_screen_get_default());
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}

void Screen::set_font_options(const Cairo::FontOptions& options)
{
  gdk_screen_set_font_options(gobj(), (options).cobj());
}

Cairo::FontOptions Screen::get_font_options() const
{
  return Cairo::FontOptions(const_cast<cairo_font_options_t*>(gdk_screen_get_font_options(const_cast<GdkScreen*>(gobj()))), true /* take_reference */);
}

void Screen::set_resolution(double dpi)
{
  gdk_screen_set_resolution(gobj(), dpi);
}

double Screen::get_resolution() const
{
  return gdk_screen_get_resolution(const_cast<GdkScreen*>(gobj()));
}

Glib::RefPtr<Gdk::Window> Screen::get_active_window()
{
  Glib::RefPtr<Gdk::Window> retvalue = Glib::wrap((GdkWindowObject*)(gdk_screen_get_active_window(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Window> Screen::get_active_window() const
{
  return const_cast<Screen*>(this)->get_active_window();
}

Glib::ListHandle< Glib::RefPtr<Window> > Screen::get_window_stack()
{
  return Glib::ListHandle< Glib::RefPtr<Window> >(gdk_screen_get_window_stack(gobj()), Glib::OWNERSHIP_DEEP);
}


Glib::SignalProxy0< void > Screen::signal_size_changed()
{
  return Glib::SignalProxy0< void >(this, &Screen_signal_size_changed_info);
}


Glib::SignalProxy0< void > Screen::signal_composited_changed()
{
  return Glib::SignalProxy0< void >(this, &Screen_signal_composited_changed_info);
}


Glib::SignalProxy0< void > Screen::signal_monitors_changed()
{
  return Glib::SignalProxy0< void >(this, &Screen_signal_monitors_changed_info);
}


Glib::PropertyProxy< Cairo::FontOptions > Screen::property_font_options() 
{
  return Glib::PropertyProxy< Cairo::FontOptions >(this, "font-options");
}

Glib::PropertyProxy_ReadOnly< Cairo::FontOptions > Screen::property_font_options() const
{
  return Glib::PropertyProxy_ReadOnly< Cairo::FontOptions >(this, "font-options");
}

Glib::PropertyProxy< double > Screen::property_resolution() 
{
  return Glib::PropertyProxy< double >(this, "resolution");
}

Glib::PropertyProxy_ReadOnly< double > Screen::property_resolution() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "resolution");
}


void Gdk::Screen::on_size_changed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->size_changed)
    (*base->size_changed)(gobj());
}


} // namespace Gdk


