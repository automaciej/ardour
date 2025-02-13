// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <ytkmm/assistant.h>
#include <ytkmm/private/assistant_p.h>


// -*- c++ -*-
/* $Id: assistant.ccg,v 1.3 2006/05/11 11:40:24 murrayc Exp $ */

/* 
 *
 * Copyright 2006 The gtkmm Development Team
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


static gint SignalProxy_SlotForwardPage_gtk_callback(gint current_page, gpointer data)
{
  Gtk::Assistant::SlotForwardPage* the_slot = static_cast<Gtk::Assistant::SlotForwardPage*>(data);

  try
  {
    return (*the_slot)(current_page);
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
    return gint();
  }
}

static void SignalProxy_SlotForwardPage_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::Assistant::SlotForwardPage*>(data);
}


namespace Gtk
{

void Assistant::set_forward_page_func(const SlotForwardPage& slot)
{
  // Create a copy of the slot object. A pointer to this will be passed
  // through the callback's data parameter.  It will be deleted
  // when SignalProxy_SlotForwardPage_gtk_callback_destroy() is called.
  SlotForwardPage* slot_copy = new SlotForwardPage(slot);

  gtk_assistant_set_forward_page_func(gobj(), 
      &SignalProxy_SlotForwardPage_gtk_callback, slot_copy,
      &SignalProxy_SlotForwardPage_gtk_callback_destroy);
}
  

} // namespace Gtk


namespace
{


static void Assistant_signal_prepare_callback(GtkAssistant* self, GtkWidget* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,Gtk::Widget* > SlotType;

  Assistant* obj = dynamic_cast<Assistant*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Assistant_signal_prepare_info =
{
  "prepare",
  (GCallback) &Assistant_signal_prepare_callback,
  (GCallback) &Assistant_signal_prepare_callback
};


static const Glib::SignalProxyInfo Assistant_signal_apply_info =
{
  "apply",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Assistant_signal_close_info =
{
  "close",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Assistant_signal_cancel_info =
{
  "cancel",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::AssistantPageType>::value_type()
{
  return gtk_assistant_page_type_get_type();
}


namespace Glib
{

Gtk::Assistant* wrap(GtkAssistant* object, bool take_copy)
{
  return dynamic_cast<Gtk::Assistant *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Assistant_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Assistant_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_assistant_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Assistant_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->prepare = &prepare_callback;
  klass->apply = &apply_callback;
  klass->close = &close_callback;
  klass->cancel = &cancel_callback;
}


void Assistant_Class::prepare_callback(GtkAssistant* self, GtkWidget* p0)
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
        obj->on_prepare(Glib::wrap(p0)
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
  if(base && base->prepare)
    (*base->prepare)(self, p0);
}
void Assistant_Class::apply_callback(GtkAssistant* self)
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
        obj->on_apply();
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
  if(base && base->apply)
    (*base->apply)(self);
}
void Assistant_Class::close_callback(GtkAssistant* self)
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
        obj->on_close();
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
  if(base && base->close)
    (*base->close)(self);
}
void Assistant_Class::cancel_callback(GtkAssistant* self)
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
        obj->on_cancel();
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
  if(base && base->cancel)
    (*base->cancel)(self);
}


Glib::ObjectBase* Assistant_Class::wrap_new(GObject* o)
{
  return new Assistant((GtkAssistant*)(o)); //top-level windows can not be manage()ed.

}


/* The implementation: */

Assistant::Assistant(const Glib::ConstructParams& construct_params)
:
  Gtk::Window(construct_params)
{
  }

Assistant::Assistant(GtkAssistant* castitem)
:
  Gtk::Window((GtkWindow*)(castitem))
{
  }

Assistant::~Assistant()
{
  destroy_();
}

Assistant::CppClassType Assistant::assistant_class_; // initialize static member

GType Assistant::get_type()
{
  return assistant_class_.init().get_type();
}


GType Assistant::get_base_type()
{
  return gtk_assistant_get_type();
}


Assistant::Assistant()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Window(Glib::ConstructParams(assistant_class_.init()))
{
  

}

int Assistant::get_current_page() const
{
  return gtk_assistant_get_current_page(const_cast<GtkAssistant*>(gobj()));
}

void Assistant::set_current_page(int page_num)
{
  gtk_assistant_set_current_page(gobj(), page_num);
}

int Assistant::get_n_pages() const
{
  return gtk_assistant_get_n_pages(const_cast<GtkAssistant*>(gobj()));
}

Widget* Assistant::get_nth_page(int page_num)
{
  return Glib::wrap(gtk_assistant_get_nth_page(gobj(), page_num));
}

const Widget* Assistant::get_nth_page(int page_num) const
{
  return const_cast<Assistant*>(this)->get_nth_page(page_num);
}

int Assistant::prepend_page(Widget& page)
{
  return gtk_assistant_prepend_page(gobj(), (page).gobj());
}

int Assistant::append_page(Widget& page)
{
  return gtk_assistant_append_page(gobj(), (page).gobj());
}

int Assistant::insert_page(Widget& page, int position)
{
  return gtk_assistant_insert_page(gobj(), (page).gobj(), position);
}

void Assistant::set_page_type(const Widget& page, AssistantPageType type)
{
  gtk_assistant_set_page_type(gobj(), const_cast<GtkWidget*>((page).gobj()), ((GtkAssistantPageType)(type)));
}

AssistantPageType Assistant::get_page_type(const Widget& page) const
{
  return ((AssistantPageType)(gtk_assistant_get_page_type(const_cast<GtkAssistant*>(gobj()), const_cast<GtkWidget*>((page).gobj()))));
}

void Assistant::set_page_title(const Widget& page, const Glib::ustring& title)
{
  gtk_assistant_set_page_title(gobj(), const_cast<GtkWidget*>((page).gobj()), title.c_str());
}

Glib::ustring Assistant::get_page_title(const Widget& page) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_assistant_get_page_title(const_cast<GtkAssistant*>(gobj()), const_cast<GtkWidget*>((page).gobj())));
}

void Assistant::set_page_header_image(const Widget& page, const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
{
  gtk_assistant_set_page_header_image(gobj(), const_cast<GtkWidget*>((page).gobj()), Glib::unwrap(pixbuf));
}

Glib::RefPtr<Gdk::Pixbuf> Assistant::get_page_header_image(const Widget& page)
{
  return Glib::wrap(gtk_assistant_get_page_header_image(gobj(), const_cast<GtkWidget*>((page).gobj())));
}

Glib::RefPtr<const Gdk::Pixbuf> Assistant::get_page_header_image(const Widget& page) const
{
  return const_cast<Assistant*>(this)->get_page_header_image(page);
}

void Assistant::set_page_side_image(const Widget& page, const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
{
  gtk_assistant_set_page_side_image(gobj(), const_cast<GtkWidget*>((page).gobj()), Glib::unwrap(pixbuf));
}

Glib::RefPtr<Gdk::Pixbuf> Assistant::get_page_side_image(const Widget& page)
{
  return Glib::wrap(gtk_assistant_get_page_side_image(gobj(), const_cast<GtkWidget*>((page).gobj())));
}

Glib::RefPtr<const Gdk::Pixbuf> Assistant::get_page_side_image(const Widget& page) const
{
  return const_cast<Assistant*>(this)->get_page_side_image(page);
}

void Assistant::set_page_complete(const Widget& page, bool complete)
{
  gtk_assistant_set_page_complete(gobj(), const_cast<GtkWidget*>((page).gobj()), static_cast<int>(complete));
}

bool Assistant::get_page_complete(const Widget& page) const
{
  return gtk_assistant_get_page_complete(const_cast<GtkAssistant*>(gobj()), const_cast<GtkWidget*>((page).gobj()));
}

void Assistant::add_action_widget(Widget& child)
{
  gtk_assistant_add_action_widget(gobj(), (child).gobj());
}

void Assistant::remove_action_widget(Widget& child)
{
  gtk_assistant_remove_action_widget(gobj(), (child).gobj());
}

void Assistant::update_buttons_state()
{
  gtk_assistant_update_buttons_state(gobj());
}

void Assistant::commit()
{
  gtk_assistant_commit(gobj());
}


Glib::SignalProxy1< void,Gtk::Widget* > Assistant::signal_prepare()
{
  return Glib::SignalProxy1< void,Gtk::Widget* >(this, &Assistant_signal_prepare_info);
}


Glib::SignalProxy0< void > Assistant::signal_apply()
{
  return Glib::SignalProxy0< void >(this, &Assistant_signal_apply_info);
}


Glib::SignalProxy0< void > Assistant::signal_close()
{
  return Glib::SignalProxy0< void >(this, &Assistant_signal_close_info);
}


Glib::SignalProxy0< void > Assistant::signal_cancel()
{
  return Glib::SignalProxy0< void >(this, &Assistant_signal_cancel_info);
}


void Gtk::Assistant::on_prepare(Gtk::Widget* page)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->prepare)
    (*base->prepare)(gobj(),(GtkWidget*)Glib::unwrap(page));
}
void Gtk::Assistant::on_apply()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->apply)
    (*base->apply)(gobj());
}
void Gtk::Assistant::on_close()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->close)
    (*base->close)(gobj());
}
void Gtk::Assistant::on_cancel()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->cancel)
    (*base->cancel)(gobj());
}


} // namespace Gtk


