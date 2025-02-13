// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <ytkmm/accelgroup.h>
#include <ytkmm/private/accelgroup_p.h>


// -*- c++ -*-
/* $Id: accelgroup.ccg,v 1.1 2003/01/21 13:38:41 murrayc Exp $ */

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

bool AccelGroup::valid(guint keyval, Gdk::ModifierType modifiers) 
{
  return gtk_accelerator_valid(keyval, (GdkModifierType) modifiers);
}

void AccelGroup::parse(const Glib::ustring& accelerator,
                       guint&               accelerator_key,
                       Gdk::ModifierType&   accelerator_mods)
{
  GdkModifierType mods = GdkModifierType(0);
  gtk_accelerator_parse(accelerator.c_str(), &accelerator_key, &mods);

  accelerator_mods = (Gdk::ModifierType) mods;
}

Glib::ustring AccelGroup::name(guint accelerator_key, Gdk::ModifierType accelerator_mods) 
{
  return gtk_accelerator_name(accelerator_key, (GdkModifierType) accelerator_mods);
}

void AccelGroup::set_default_mod_mask(Gdk::ModifierType default_mod_mask) 
{
  gtk_accelerator_set_default_mod_mask((GdkModifierType) default_mod_mask);
}

Gdk::ModifierType AccelGroup::get_default_mod_mask() 
{
  return (Gdk::ModifierType) gtk_accelerator_get_default_mod_mask();
}

} // namespace Gtk


namespace
{


static gboolean AccelGroup_signal_accel_activate_callback(GtkAccelGroup* self, GObject* p0,guint p1,GdkModifierType p2,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< bool,const Glib::RefPtr<Glib::Object>&,guint,Gdk::ModifierType > SlotType;

  AccelGroup* obj = dynamic_cast<AccelGroup*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, p1, ((Gdk::ModifierType)(p2))
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

static gboolean AccelGroup_signal_accel_activate_notify_callback(GtkAccelGroup* self, GObject* p0,guint p1,GdkModifierType p2, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::RefPtr<Glib::Object>&,guint,Gdk::ModifierType > SlotType;

  AccelGroup* obj = dynamic_cast<AccelGroup*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, p1, ((Gdk::ModifierType)(p2))
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

static const Glib::SignalProxyInfo AccelGroup_signal_accel_activate_info =
{
  "accel_activate",
  (GCallback) &AccelGroup_signal_accel_activate_callback,
  (GCallback) &AccelGroup_signal_accel_activate_notify_callback
};


static void AccelGroup_signal_accel_changed_callback(GtkAccelGroup* self, guint p0,GdkModifierType p1,GClosure* p2,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,guint,Gdk::ModifierType,GClosure* > SlotType;

  AccelGroup* obj = dynamic_cast<AccelGroup*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0, ((Gdk::ModifierType)(p1))
, p2);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo AccelGroup_signal_accel_changed_info =
{
  "accel_changed",
  (GCallback) &AccelGroup_signal_accel_changed_callback,
  (GCallback) &AccelGroup_signal_accel_changed_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::AccelGroup> wrap(GtkAccelGroup* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::AccelGroup>( dynamic_cast<Gtk::AccelGroup*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& AccelGroup_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &AccelGroup_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_accel_group_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void AccelGroup_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->accel_changed = &accel_changed_callback;
}


void AccelGroup_Class::accel_changed_callback(GtkAccelGroup* self, guint p0, GdkModifierType p1, GClosure* p2)
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
        obj->on_accel_changed(p0, ((Gdk::ModifierType)(p1))
, p2);
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
  if(base && base->accel_changed)
    (*base->accel_changed)(self, p0, p1, p2);
}


Glib::ObjectBase* AccelGroup_Class::wrap_new(GObject* object)
{
  return new AccelGroup((GtkAccelGroup*)object);
}


/* The implementation: */

GtkAccelGroup* AccelGroup::gobj_copy()
{
  reference();
  return gobj();
}

AccelGroup::AccelGroup(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

AccelGroup::AccelGroup(GtkAccelGroup* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


AccelGroup::~AccelGroup()
{}


AccelGroup::CppClassType AccelGroup::accelgroup_class_; // initialize static member

GType AccelGroup::get_type()
{
  return accelgroup_class_.init().get_type();
}


GType AccelGroup::get_base_type()
{
  return gtk_accel_group_get_type();
}


AccelGroup::AccelGroup()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(accelgroup_class_.init()))
{
  

}

Glib::RefPtr<AccelGroup> AccelGroup::create()
{
  return Glib::RefPtr<AccelGroup>( new AccelGroup() );
}

bool AccelGroup::get_is_locked() const
{
  return gtk_accel_group_get_is_locked(const_cast<GtkAccelGroup*>(gobj()));
}

Gdk::ModifierType AccelGroup::get_modifier_mask() const
{
  return ((Gdk::ModifierType)(gtk_accel_group_get_modifier_mask(const_cast<GtkAccelGroup*>(gobj()))));
}

void AccelGroup::lock()
{
  gtk_accel_group_lock(gobj());
}

void AccelGroup::unlock()
{
  gtk_accel_group_unlock(gobj());
}

bool AccelGroup::disconnect_key(guint accel_key, Gdk::ModifierType accel_mods)
{
  return gtk_accel_group_disconnect_key(gobj(), accel_key, ((GdkModifierType)(accel_mods)));
}

Glib::ustring AccelGroup::get_label(guint accelerator_key, Gdk::ModifierType accelerator_mods)
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_accelerator_get_label(accelerator_key, ((GdkModifierType)(accelerator_mods))));
}

bool AccelGroup::activate(GQuark accel_quark, const Glib::RefPtr<Glib::Object>& acceleratable, guint accel_key, Gdk::ModifierType accel_mods)
{
  return gtk_accel_group_activate(gobj(), accel_quark, Glib::unwrap(acceleratable), accel_key, ((GdkModifierType)(accel_mods)));
}

bool AccelGroup::activate(Gtk::Object& object, guint accel_key, Gdk::ModifierType accel_mods)
{
  return gtk_accel_groups_activate((object).Glib::Object::gobj(), accel_key, ((GdkModifierType)(accel_mods)));
}


Glib::SignalProxy3< bool,const Glib::RefPtr<Glib::Object>&,guint,Gdk::ModifierType > AccelGroup::signal_accel_activate()
{
  return Glib::SignalProxy3< bool,const Glib::RefPtr<Glib::Object>&,guint,Gdk::ModifierType >(this, &AccelGroup_signal_accel_activate_info);
}


Glib::SignalProxy3< void,guint,Gdk::ModifierType,GClosure* > AccelGroup::signal_accel_changed()
{
  return Glib::SignalProxy3< void,guint,Gdk::ModifierType,GClosure* >(this, &AccelGroup_signal_accel_changed_info);
}


Glib::PropertyProxy_ReadOnly< bool > AccelGroup::property_is_locked() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "is-locked");
}

Glib::PropertyProxy_ReadOnly< Gdk::ModifierType > AccelGroup::property_modifier_mask() const
{
  return Glib::PropertyProxy_ReadOnly< Gdk::ModifierType >(this, "modifier-mask");
}


void Gtk::AccelGroup::on_accel_changed(guint keyval, Gdk::ModifierType modifier, GClosure* accel_closure)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->accel_changed)
    (*base->accel_changed)(gobj(),keyval,((GdkModifierType)(modifier)),accel_closure);
}


} // namespace Gtk


