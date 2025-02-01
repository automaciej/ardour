// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/displaymanager.h>
#include <gdkmm/private/displaymanager_p.h>


// -*- c++ -*-
/* $Id: displaymanager.ccg,v 1.1 2003/01/21 13:38:07 murrayc Exp $ */

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

#include <ydk/gdk.h>
namespace Gdk
{


} //Gdk


namespace
{


static void DisplayManager_signal_display_opened_callback(GdkDisplayManager* self, GdkDisplay* p0,void* data)
{
  using namespace Gdk;
  typedef sigc::slot< void,const Glib::RefPtr<Display>& > SlotType;

  DisplayManager* obj = dynamic_cast<DisplayManager*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo DisplayManager_signal_display_opened_info =
{
  "display-opened",
  (GCallback) &DisplayManager_signal_display_opened_callback,
  (GCallback) &DisplayManager_signal_display_opened_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::DisplayManager> wrap(GdkDisplayManager* object, bool take_copy)
{
  return Glib::RefPtr<Gdk::DisplayManager>( dynamic_cast<Gdk::DisplayManager*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& DisplayManager_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &DisplayManager_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_display_manager_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void DisplayManager_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->display_opened = &display_opened_callback;
}


void DisplayManager_Class::display_opened_callback(GdkDisplayManager* self, GdkDisplay* p0)
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
        obj->on_display_opened(Glib::wrap(p0, true)
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
  if(base && base->display_opened)
    (*base->display_opened)(self, p0);
}


Glib::ObjectBase* DisplayManager_Class::wrap_new(GObject* object)
{
  return new DisplayManager((GdkDisplayManager*)object);
}


/* The implementation: */

GdkDisplayManager* DisplayManager::gobj_copy()
{
  reference();
  return gobj();
}

DisplayManager::DisplayManager(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

DisplayManager::DisplayManager(GdkDisplayManager* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


DisplayManager::~DisplayManager()
{}


DisplayManager::CppClassType DisplayManager::displaymanager_class_; // initialize static member

GType DisplayManager::get_type()
{
  return displaymanager_class_.init().get_type();
}


GType DisplayManager::get_base_type()
{
  return gdk_display_manager_get_type();
}


Glib::RefPtr<DisplayManager> DisplayManager::get()
{

  Glib::RefPtr<DisplayManager> retvalue = Glib::wrap(gdk_display_manager_get());
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}

Glib::RefPtr<Display> DisplayManager::get_default_display()
{
  Glib::RefPtr<Display> retvalue = Glib::wrap(gdk_display_manager_get_default_display(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Display> DisplayManager::get_default_display() const
{
  return const_cast<DisplayManager*>(this)->get_default_display();
}

void DisplayManager::set_default_display(const Glib::RefPtr<Display>& display)
{
  gdk_display_manager_set_default_display(gobj(), Glib::unwrap(display));
}

Glib::SListHandle< Glib::RefPtr<Display> > DisplayManager::list_displays()
{
  return Glib::SListHandle< Glib::RefPtr<Display> >(gdk_display_manager_list_displays(gobj()), Glib::OWNERSHIP_SHALLOW);
}


Glib::SignalProxy1< void,const Glib::RefPtr<Display>& > DisplayManager::signal_display_opened()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Display>& >(this, &DisplayManager_signal_display_opened_info);
}


Glib::PropertyProxy< Glib::RefPtr<Display> > DisplayManager::property_default_display() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Display> >(this, "default-display");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Display> > DisplayManager::property_default_display() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Display> >(this, "default-display");
}


void Gdk::DisplayManager::on_display_opened(const Glib::RefPtr<Display>& display)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->display_opened)
    (*base->display_opened)(gobj(),Glib::unwrap(display));
}


} // namespace Gdk


