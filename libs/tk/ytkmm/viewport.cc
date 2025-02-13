// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <ytkmm/viewport.h>
#include <ytkmm/private/viewport_p.h>


// -*- c++ -*-
/* $Id: viewport.ccg,v 1.1 2003/01/21 13:40:53 murrayc Exp $ */

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

#include <ytkmm/viewport.h>
#include <ytkmm/adjustment.h>
#include <ytk/ytk.h>

namespace
{


static void Viewport_signal_set_scroll_adjustments_callback(GtkViewport* self, GtkAdjustment* p0,GtkAdjustment* p1,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,Gtk::Adjustment*,Gtk::Adjustment* > SlotType;

  Viewport* obj = dynamic_cast<Viewport*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0)
, Glib::wrap(p1)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Viewport_signal_set_scroll_adjustments_info =
{
  "set_scroll_adjustments",
  (GCallback) &Viewport_signal_set_scroll_adjustments_callback,
  (GCallback) &Viewport_signal_set_scroll_adjustments_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::Viewport* wrap(GtkViewport* object, bool take_copy)
{
  return dynamic_cast<Gtk::Viewport *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Viewport_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Viewport_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_viewport_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Viewport_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->set_scroll_adjustments = &set_scroll_adjustments_callback;
}


void Viewport_Class::set_scroll_adjustments_callback(GtkViewport* self, GtkAdjustment* p0, GtkAdjustment* p1)
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
        obj->on_set_scroll_adjustments(Glib::wrap(p0)
, Glib::wrap(p1)
);
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
  if(base && base->set_scroll_adjustments)
    (*base->set_scroll_adjustments)(self, p0, p1);
}


Glib::ObjectBase* Viewport_Class::wrap_new(GObject* o)
{
  return manage(new Viewport((GtkViewport*)(o)));

}


/* The implementation: */

Viewport::Viewport(const Glib::ConstructParams& construct_params)
:
  Gtk::Bin(construct_params)
{
  }

Viewport::Viewport(GtkViewport* castitem)
:
  Gtk::Bin((GtkBin*)(castitem))
{
  }

Viewport::~Viewport()
{
  destroy_();
}

Viewport::CppClassType Viewport::viewport_class_; // initialize static member

GType Viewport::get_type()
{
  return viewport_class_.init().get_type();
}


GType Viewport::get_base_type()
{
  return gtk_viewport_get_type();
}


Viewport::Viewport(Adjustment& hadjustment, Adjustment& vadjustment)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(viewport_class_.init(), "hadjustment", (hadjustment).gobj(), "vadjustment", (vadjustment).gobj(), static_cast<char*>(0)))
{
  

}

Gtk::Adjustment* Viewport::get_hadjustment()
{
  return Glib::wrap(gtk_viewport_get_hadjustment(gobj()));
}

const Gtk::Adjustment* Viewport::get_hadjustment() const
{
  return const_cast<Viewport*>(this)->get_hadjustment();
}

Gtk::Adjustment* Viewport::get_vadjustment()
{
  return Glib::wrap(gtk_viewport_get_vadjustment(gobj()));
}

const Gtk::Adjustment* Viewport::get_vadjustment() const
{
  return const_cast<Viewport*>(this)->get_vadjustment();
}

void Viewport::set_hadjustment(Gtk::Adjustment* adjustment)
{
  gtk_viewport_set_hadjustment(gobj(), (GtkAdjustment*)Glib::unwrap(adjustment));
}

void Viewport::set_hadjustment(Gtk::Adjustment& adjustment)
{
  gtk_viewport_set_hadjustment(gobj(), (adjustment).gobj());
}

void Viewport::set_vadjustment(Gtk::Adjustment* adjustment)
{
  gtk_viewport_set_vadjustment(gobj(), (GtkAdjustment*)Glib::unwrap(adjustment));
}

void Viewport::set_vadjustment(Gtk::Adjustment& adjustment)
{
  gtk_viewport_set_vadjustment(gobj(), (adjustment).gobj());
}

void Viewport::set_shadow_type(ShadowType type)
{
  gtk_viewport_set_shadow_type(gobj(), ((GtkShadowType)(type)));
}

ShadowType Viewport::get_shadow_type() const
{
  return ((ShadowType)(gtk_viewport_get_shadow_type(const_cast<GtkViewport*>(gobj()))));
}

Glib::RefPtr<Gdk::Window> Viewport::get_bin_window()
{
  Glib::RefPtr<Gdk::Window> retvalue = Glib::wrap((GdkWindowObject*)(gtk_viewport_get_bin_window(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Window> Viewport::get_bin_window() const
{
  return const_cast<Viewport*>(this)->get_bin_window();
}

Glib::RefPtr<Gdk::Window> Viewport::get_view_window()
{
  Glib::RefPtr<Gdk::Window> retvalue = Glib::wrap((GdkWindowObject*)(gtk_viewport_get_view_window(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Window> Viewport::get_view_window() const
{
  return const_cast<Viewport*>(this)->get_view_window();
}


Glib::SignalProxy2< void,Gtk::Adjustment*,Gtk::Adjustment* > Viewport::signal_set_scroll_adjustments()
{
  return Glib::SignalProxy2< void,Gtk::Adjustment*,Gtk::Adjustment* >(this, &Viewport_signal_set_scroll_adjustments_info);
}


Glib::PropertyProxy< Gtk::Adjustment* > Viewport::property_hadjustment() 
{
  return Glib::PropertyProxy< Gtk::Adjustment* >(this, "hadjustment");
}

Glib::PropertyProxy_ReadOnly< Gtk::Adjustment* > Viewport::property_hadjustment() const
{
  return Glib::PropertyProxy_ReadOnly< Gtk::Adjustment* >(this, "hadjustment");
}

Glib::PropertyProxy< Gtk::Adjustment* > Viewport::property_vadjustment() 
{
  return Glib::PropertyProxy< Gtk::Adjustment* >(this, "vadjustment");
}

Glib::PropertyProxy_ReadOnly< Gtk::Adjustment* > Viewport::property_vadjustment() const
{
  return Glib::PropertyProxy_ReadOnly< Gtk::Adjustment* >(this, "vadjustment");
}

Glib::PropertyProxy< ShadowType > Viewport::property_shadow_type() 
{
  return Glib::PropertyProxy< ShadowType >(this, "shadow-type");
}

Glib::PropertyProxy_ReadOnly< ShadowType > Viewport::property_shadow_type() const
{
  return Glib::PropertyProxy_ReadOnly< ShadowType >(this, "shadow-type");
}


void Gtk::Viewport::on_set_scroll_adjustments(Gtk::Adjustment* hadjustment, Gtk::Adjustment* vadjustment)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->set_scroll_adjustments)
    (*base->set_scroll_adjustments)(gobj(),(GtkAdjustment*)Glib::unwrap(hadjustment),(GtkAdjustment*)Glib::unwrap(vadjustment));
}


} // namespace Gtk


