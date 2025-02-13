// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <ytkmm/entry.h>
#include <ytkmm/private/entry_p.h>


// -*- c++ -*-
/* $Id: entry.ccg,v 1.1 2003/01/21 13:38:48 murrayc Exp $ */

/* 
 *
 * Copyright 1998-2002 The gtkmm Development Team
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


void Entry::set_icon_from_pixbuf(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf, EntryIconPosition icon_pos)
{
  gtk_entry_set_icon_from_pixbuf(gobj(), ((GtkEntryIconPosition)(icon_pos)), Glib::unwrap(pixbuf)); 
}

void Entry::set_icon_from_stock(const StockID& stock_id, EntryIconPosition icon_pos)
{
  gtk_entry_set_icon_from_stock(gobj(), ((GtkEntryIconPosition)(icon_pos)), (stock_id).get_c_str()); 
}

void Entry::set_icon_from_icon_name(const Glib::ustring& icon_name, EntryIconPosition icon_pos)
{
  gtk_entry_set_icon_from_icon_name(gobj(), ((GtkEntryIconPosition)(icon_pos)), icon_name.c_str()); 
}

void Entry::set_icon_from_gicon(const Glib::RefPtr<Gio::Icon>& icon, EntryIconPosition icon_pos)
{
  gtk_entry_set_icon_from_gicon(gobj(), ((GtkEntryIconPosition)(icon_pos)), const_cast<GIcon*>(Glib::unwrap<Gio::Icon>(icon))); 
}

void Entry::set_icon_activatable(bool activatable, EntryIconPosition icon_pos)
{
  gtk_entry_set_icon_activatable(gobj(), ((GtkEntryIconPosition)(icon_pos)), static_cast<int>(activatable)); 
}

void Entry::set_icon_tooltip_text(const Glib::ustring& tooltip, EntryIconPosition icon_pos)
{
  gtk_entry_set_icon_tooltip_text(gobj(), ((GtkEntryIconPosition)(icon_pos)), tooltip.c_str()); 
}

void Entry::set_icon_tooltip_markup(const Glib::ustring& tooltip, EntryIconPosition icon_pos)
{
  gtk_entry_set_icon_tooltip_markup(gobj(), ((GtkEntryIconPosition)(icon_pos)), tooltip.c_str()); 
}

void Entry::set_icon_drag_source(const Glib::RefPtr<TargetList>& target_list, Gdk::DragAction actions, EntryIconPosition icon_pos)
{
  gtk_entry_set_icon_drag_source(gobj(), ((GtkEntryIconPosition)(icon_pos)), const_cast<GtkTargetList*>(Glib::unwrap(target_list)), ((GdkDragAction)(actions))); 
}


} //namespace Gtk

namespace
{


static void Entry_signal_populate_popup_callback(GtkEntry* self, GtkMenu* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,Menu* > SlotType;

  Entry* obj = dynamic_cast<Entry*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo Entry_signal_populate_popup_info =
{
  "populate_popup",
  (GCallback) &Entry_signal_populate_popup_callback,
  (GCallback) &Entry_signal_populate_popup_callback
};


static void Entry_signal_insert_at_cursor_callback(GtkEntry* self, const gchar* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::ustring& > SlotType;

  Entry* obj = dynamic_cast<Entry*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Entry_signal_insert_at_cursor_info =
{
  "insert_at_cursor",
  (GCallback) &Entry_signal_insert_at_cursor_callback,
  (GCallback) &Entry_signal_insert_at_cursor_callback
};


static const Glib::SignalProxyInfo Entry_signal_activate_info =
{
  "activate",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static void Entry_signal_icon_release_callback(GtkEntry* self, GtkEntryIconPosition p0,const GdkEventButton* p1,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,EntryIconPosition,const GdkEventButton* > SlotType;

  Entry* obj = dynamic_cast<Entry*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(((EntryIconPosition)(p0))
, p1);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Entry_signal_icon_release_info =
{
  "icon-release",
  (GCallback) &Entry_signal_icon_release_callback,
  (GCallback) &Entry_signal_icon_release_callback
};


static void Entry_signal_icon_press_callback(GtkEntry* self, GtkEntryIconPosition p0,const GdkEventButton* p1,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,EntryIconPosition,const GdkEventButton* > SlotType;

  Entry* obj = dynamic_cast<Entry*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(((EntryIconPosition)(p0))
, p1);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Entry_signal_icon_press_info =
{
  "icon-press",
  (GCallback) &Entry_signal_icon_press_callback,
  (GCallback) &Entry_signal_icon_press_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::EntryIconPosition>::value_type()
{
  return gtk_entry_icon_position_get_type();
}


namespace Glib
{

Gtk::Entry* wrap(GtkEntry* object, bool take_copy)
{
  return dynamic_cast<Gtk::Entry *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Entry_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Entry_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_entry_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Editable::add_interface(get_type());
  CellEditable::add_interface(get_type());

  }

  return *this;
}


void Entry_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->populate_popup = &populate_popup_callback;
  klass->insert_at_cursor = &insert_at_cursor_callback;
  klass->activate = &activate_callback;
}


void Entry_Class::populate_popup_callback(GtkEntry* self, GtkMenu* p0)
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
        obj->on_populate_popup(Glib::wrap(p0)
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
  if(base && base->populate_popup)
    (*base->populate_popup)(self, p0);
}
void Entry_Class::insert_at_cursor_callback(GtkEntry* self, const gchar* p0)
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
        obj->on_insert_at_cursor(Glib::convert_const_gchar_ptr_to_ustring(p0)
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
  if(base && base->insert_at_cursor)
    (*base->insert_at_cursor)(self, p0);
}
void Entry_Class::activate_callback(GtkEntry* self)
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
        obj->on_activate();
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
  if(base && base->activate)
    (*base->activate)(self);
}


Glib::ObjectBase* Entry_Class::wrap_new(GObject* o)
{
  return manage(new Entry((GtkEntry*)(o)));

}


/* The implementation: */

Entry::Entry(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Entry::Entry(GtkEntry* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }

Entry::~Entry()
{
  destroy_();
}

Entry::CppClassType Entry::entry_class_; // initialize static member

GType Entry::get_type()
{
  return entry_class_.init().get_type();
}


GType Entry::get_base_type()
{
  return gtk_entry_get_type();
}


Entry::Entry()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Widget(Glib::ConstructParams(entry_class_.init()))
{
  

}

Entry::Entry(const Glib::RefPtr<EntryBuffer>& buffer)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Widget(Glib::ConstructParams(entry_class_.init(), "buffer", Glib::unwrap(buffer), static_cast<char*>(0)))
{
  

}

Glib::RefPtr<EntryBuffer> Entry::get_buffer()
{
  Glib::RefPtr<EntryBuffer> retvalue = Glib::wrap(gtk_entry_get_buffer(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const EntryBuffer> Entry::get_buffer() const
{
  return const_cast<Entry*>(this)->get_buffer();
}

void Entry::set_buffer(const Glib::RefPtr<EntryBuffer>& buffer)
{
  gtk_entry_set_buffer(gobj(), Glib::unwrap(buffer));
}

Glib::RefPtr<Gdk::Window> Entry::get_text_window()
{
  Glib::RefPtr<Gdk::Window> retvalue = Glib::wrap((GdkWindowObject*)(gtk_entry_get_text_window(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Window> Entry::get_text_window() const
{
  return const_cast<Entry*>(this)->get_text_window();
}

void Entry::set_visibility(bool visible)
{
  gtk_entry_set_visibility(gobj(), static_cast<int>(visible));
}

bool Entry::get_visibility() const
{
  return gtk_entry_get_visibility(const_cast<GtkEntry*>(gobj()));
}

void Entry::set_invisible_char(gunichar ch)
{
  gtk_entry_set_invisible_char(gobj(), ch);
}

void Entry::unset_invisible_char()
{
  gtk_entry_unset_invisible_char(gobj());
}

gunichar Entry::get_invisible_char() const
{
  return gtk_entry_get_invisible_char(const_cast<GtkEntry*>(gobj()));
}

void Entry::set_has_frame(bool setting)
{
  gtk_entry_set_has_frame(gobj(), static_cast<int>(setting));
}

bool Entry::get_has_frame() const
{
  return gtk_entry_get_has_frame(const_cast<GtkEntry*>(gobj()));
}

void Entry::set_inner_border(const Border& border)
{
  gtk_entry_set_inner_border(gobj(), &(border));
}

Border Entry::get_inner_border() const
{
  return *(gtk_entry_get_inner_border(const_cast<GtkEntry*>(gobj())));
}

void Entry::set_overwrite_mode(bool overwrite)
{
  gtk_entry_set_overwrite_mode(gobj(), static_cast<int>(overwrite));
}

bool Entry::get_overwrite_mode() const
{
  return gtk_entry_get_overwrite_mode(const_cast<GtkEntry*>(gobj()));
}

void Entry::set_max_length(int max)
{
  gtk_entry_set_max_length(gobj(), max);
}

int Entry::get_max_length() const
{
  return gtk_entry_get_max_length(const_cast<GtkEntry*>(gobj()));
}

guint16 Entry::get_text_length() const
{
  return gtk_entry_get_text_length(const_cast<GtkEntry*>(gobj()));
}

void Entry::set_activates_default(bool setting)
{
  gtk_entry_set_activates_default(gobj(), static_cast<int>(setting));
}

gboolean Entry::get_activates_default() const
{
  return gtk_entry_get_activates_default(const_cast<GtkEntry*>(gobj()));
}

void Entry::set_width_chars(int n_chars)
{
  gtk_entry_set_width_chars(gobj(), n_chars);
}

int Entry::get_width_chars() const
{
  return gtk_entry_get_width_chars(const_cast<GtkEntry*>(gobj()));
}

void Entry::set_text(const Glib::ustring & text)
{
  gtk_entry_set_text(gobj(), text.c_str());
}

Glib::ustring Entry::get_text() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_entry_get_text(const_cast<GtkEntry*>(gobj())));
}

Glib::RefPtr<Pango::Layout> Entry::get_layout()
{
  Glib::RefPtr<Pango::Layout> retvalue = Glib::wrap(gtk_entry_get_layout(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Pango::Layout> Entry::get_layout() const
{
  return const_cast<Entry*>(this)->get_layout();
}

void Entry::get_layout_offsets(int& x, int& y)
{
  gtk_entry_get_layout_offsets(gobj(), &(x), &(y));
}

int Entry::layout_index_to_text_index(int layout_index) const
{
  return gtk_entry_layout_index_to_text_index(const_cast<GtkEntry*>(gobj()), layout_index);
}

int Entry::text_index_to_layout_index(int text_index) const
{
  return gtk_entry_text_index_to_layout_index(const_cast<GtkEntry*>(gobj()), text_index);
}

void Entry::set_cursor_hadjustment(Adjustment& adjustment)
{
  gtk_entry_set_cursor_hadjustment(gobj(), (adjustment).gobj());
}

Adjustment* Entry::get_cursor_hadjustment()
{
  Adjustment* retvalue = Glib::wrap(gtk_entry_get_cursor_hadjustment(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

const Adjustment* Entry::get_cursor_hadjustment() const
{
  return const_cast<Entry*>(this)->get_cursor_hadjustment();
}

void Entry::set_alignment(float xalign)
{
  gtk_entry_set_alignment(gobj(), xalign);
}

void Entry::set_alignment(AlignmentEnum xalign)
{
  gtk_entry_set_alignment(gobj(), _gtkmm_align_float_from_enum(xalign));
}

float Entry::get_alignment() const
{
  return gtk_entry_get_alignment(const_cast<GtkEntry*>(gobj()));
}

void Entry::set_completion(const Glib::RefPtr<EntryCompletion>& completion)
{
  gtk_entry_set_completion(gobj(), Glib::unwrap(completion));
}

Glib::RefPtr<EntryCompletion> Entry::get_completion()
{
  Glib::RefPtr<EntryCompletion> retvalue = Glib::wrap(gtk_entry_get_completion(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const EntryCompletion> Entry::get_completion() const
{
  return const_cast<Entry*>(this)->get_completion();
}

void Entry::set_progress_fraction(double fraction)
{
  gtk_entry_set_progress_fraction(gobj(), fraction);
}

double Entry::get_progress_fraction() const
{
  return gtk_entry_get_progress_fraction(const_cast<GtkEntry*>(gobj()));
}

void Entry::set_progress_pulse_step(double fraction)
{
  gtk_entry_set_progress_pulse_step(gobj(), fraction);
}

double Entry::get_progress_pulse_step()
{
  return gtk_entry_get_progress_pulse_step(gobj());
}

void Entry::progress_pulse()
{
  gtk_entry_progress_pulse(gobj());
}

ImageType Entry::get_icon_storage_type(EntryIconPosition icon_pos) const
{
  return ((ImageType)(gtk_entry_get_icon_storage_type(const_cast<GtkEntry*>(gobj()), ((GtkEntryIconPosition)(icon_pos)))));
}

Glib::RefPtr<Gdk::Pixbuf> Entry::get_icon_pixbuf(EntryIconPosition icon_pos)
{
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_entry_get_icon_pixbuf(gobj(), ((GtkEntryIconPosition)(icon_pos))));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Pixbuf> Entry::get_icon_pixbuf(EntryIconPosition icon_pos) const
{
  return const_cast<Entry*>(this)->get_icon_pixbuf(icon_pos);
}

StockID Entry::get_icon_stock(EntryIconPosition icon_pos) const
{
  return StockID(gtk_entry_get_icon_stock(const_cast<GtkEntry*>(gobj()), ((GtkEntryIconPosition)(icon_pos))));
}

Glib::ustring Entry::get_icon_name(EntryIconPosition icon_pos) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_entry_get_icon_name(const_cast<GtkEntry*>(gobj()), ((GtkEntryIconPosition)(icon_pos))));
}

Glib::RefPtr<Gio::Icon> Entry::get_icon_gicon(EntryIconPosition icon_pos)
{
  Glib::RefPtr<Gio::Icon> retvalue = Glib::wrap(gtk_entry_get_icon_gicon(gobj(), ((GtkEntryIconPosition)(icon_pos))));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gio::Icon> Entry::get_icon_gicon(EntryIconPosition icon_pos) const
{
  return const_cast<Entry*>(this)->get_icon_gicon(icon_pos);
}

bool Entry::get_icon_activatable(EntryIconPosition icon_pos) const
{
  return gtk_entry_get_icon_activatable(const_cast<GtkEntry*>(gobj()), ((GtkEntryIconPosition)(icon_pos)));
}

void Entry::set_icon_sensitive(EntryIconPosition icon_pos, bool sensitive)
{
  gtk_entry_set_icon_sensitive(gobj(), ((GtkEntryIconPosition)(icon_pos)), static_cast<int>(sensitive));
}

bool Entry::get_icon_sensitive(EntryIconPosition icon_pos)
{
  return gtk_entry_get_icon_sensitive(gobj(), ((GtkEntryIconPosition)(icon_pos)));
}

int Entry::get_icon_at_pos(int x, int y) const
{
  return gtk_entry_get_icon_at_pos(const_cast<GtkEntry*>(gobj()), x, y);
}

Glib::ustring Entry::get_icon_tooltip_text(EntryIconPosition icon_pos) const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_entry_get_icon_tooltip_text(const_cast<GtkEntry*>(gobj()), ((GtkEntryIconPosition)(icon_pos))));
}

Glib::ustring Entry::get_icon_tooltip_markup(EntryIconPosition icon_pos) const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_entry_get_icon_tooltip_markup(const_cast<GtkEntry*>(gobj()), ((GtkEntryIconPosition)(icon_pos))));
}

int Entry::get_current_icon_drag_source()
{
  return gtk_entry_get_current_icon_drag_source(gobj());
}

Glib::RefPtr<Gdk::Window> Entry::get_icon_window(EntryIconPosition icon_pos)
{
  Glib::RefPtr<Gdk::Window> retvalue = Glib::wrap((GdkWindowObject*)(gtk_entry_get_icon_window(gobj(), ((GtkEntryIconPosition)(icon_pos)))));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Window> Entry::get_icon_window(EntryIconPosition icon_pos) const
{
  return const_cast<Entry*>(this)->get_icon_window(icon_pos);
}

bool Entry::im_context_filter_keypress(GdkEventKey* event)
{
  return gtk_entry_im_context_filter_keypress(gobj(), event);
}

void Entry::reset_im_context()
{
  gtk_entry_reset_im_context(gobj());
}


Glib::SignalProxy1< void,Menu* > Entry::signal_populate_popup()
{
  return Glib::SignalProxy1< void,Menu* >(this, &Entry_signal_populate_popup_info);
}


Glib::SignalProxy1< void,const Glib::ustring& > Entry::signal_insert_at_cursor()
{
  return Glib::SignalProxy1< void,const Glib::ustring& >(this, &Entry_signal_insert_at_cursor_info);
}


Glib::SignalProxy0< void > Entry::signal_activate()
{
  return Glib::SignalProxy0< void >(this, &Entry_signal_activate_info);
}


Glib::SignalProxy2< void,EntryIconPosition,const GdkEventButton* > Entry::signal_icon_release()
{
  return Glib::SignalProxy2< void,EntryIconPosition,const GdkEventButton* >(this, &Entry_signal_icon_release_info);
}


Glib::SignalProxy2< void,EntryIconPosition,const GdkEventButton* > Entry::signal_icon_press()
{
  return Glib::SignalProxy2< void,EntryIconPosition,const GdkEventButton* >(this, &Entry_signal_icon_press_info);
}


Glib::PropertyProxy< Glib::RefPtr<EntryBuffer> > Entry::property_buffer() 
{
  return Glib::PropertyProxy< Glib::RefPtr<EntryBuffer> >(this, "buffer");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<EntryBuffer> > Entry::property_buffer() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<EntryBuffer> >(this, "buffer");
}

Glib::PropertyProxy_ReadOnly< int > Entry::property_cursor_position() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "cursor-position");
}

Glib::PropertyProxy_ReadOnly< int > Entry::property_selection_bound() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "selection-bound");
}

Glib::PropertyProxy< bool > Entry::property_editable() 
{
  return Glib::PropertyProxy< bool >(this, "editable");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_editable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "editable");
}

Glib::PropertyProxy< int > Entry::property_max_length() 
{
  return Glib::PropertyProxy< int >(this, "max-length");
}

Glib::PropertyProxy_ReadOnly< int > Entry::property_max_length() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "max-length");
}

Glib::PropertyProxy< bool > Entry::property_visibility() 
{
  return Glib::PropertyProxy< bool >(this, "visibility");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_visibility() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "visibility");
}

Glib::PropertyProxy< bool > Entry::property_has_frame() 
{
  return Glib::PropertyProxy< bool >(this, "has-frame");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_has_frame() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "has-frame");
}

Glib::PropertyProxy< Border > Entry::property_inner_border() 
{
  return Glib::PropertyProxy< Border >(this, "inner-border");
}

Glib::PropertyProxy_ReadOnly< Border > Entry::property_inner_border() const
{
  return Glib::PropertyProxy_ReadOnly< Border >(this, "inner-border");
}

Glib::PropertyProxy< gunichar > Entry::property_invisible_char() 
{
  return Glib::PropertyProxy< gunichar >(this, "invisible-char");
}

Glib::PropertyProxy_ReadOnly< gunichar > Entry::property_invisible_char() const
{
  return Glib::PropertyProxy_ReadOnly< gunichar >(this, "invisible-char");
}

Glib::PropertyProxy< bool > Entry::property_invisible_char_set() 
{
  return Glib::PropertyProxy< bool >(this, "invisible-char-set");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_invisible_char_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "invisible-char-set");
}

Glib::PropertyProxy< bool > Entry::property_activates_default() 
{
  return Glib::PropertyProxy< bool >(this, "activates-default");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_activates_default() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "activates-default");
}

Glib::PropertyProxy< int > Entry::property_width_chars() 
{
  return Glib::PropertyProxy< int >(this, "width-chars");
}

Glib::PropertyProxy_ReadOnly< int > Entry::property_width_chars() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "width-chars");
}

Glib::PropertyProxy_ReadOnly< int > Entry::property_scroll_offset() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "scroll-offset");
}

Glib::PropertyProxy< ShadowType > Entry::property_shadow_type() 
{
  return Glib::PropertyProxy< ShadowType >(this, "shadow-type");
}

Glib::PropertyProxy_ReadOnly< ShadowType > Entry::property_shadow_type() const
{
  return Glib::PropertyProxy_ReadOnly< ShadowType >(this, "shadow-type");
}

Glib::PropertyProxy< Glib::ustring > Entry::property_text() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "text");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Entry::property_text() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "text");
}

Glib::PropertyProxy< float > Entry::property_xalign() 
{
  return Glib::PropertyProxy< float >(this, "xalign");
}

Glib::PropertyProxy_ReadOnly< float > Entry::property_xalign() const
{
  return Glib::PropertyProxy_ReadOnly< float >(this, "xalign");
}

Glib::PropertyProxy< bool > Entry::property_truncate_multiline() 
{
  return Glib::PropertyProxy< bool >(this, "truncate-multiline");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_truncate_multiline() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "truncate-multiline");
}

Glib::PropertyProxy< bool > Entry::property_overwrite_mode() 
{
  return Glib::PropertyProxy< bool >(this, "overwrite-mode");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_overwrite_mode() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "overwrite-mode");
}

Glib::PropertyProxy_ReadOnly< guint > Entry::property_text_length() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "text-length");
}

Glib::PropertyProxy< bool > Entry::property_caps_lock_warning() 
{
  return Glib::PropertyProxy< bool >(this, "caps-lock-warning");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_caps_lock_warning() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "caps-lock-warning");
}

Glib::PropertyProxy< double > Entry::property_progress_fraction() 
{
  return Glib::PropertyProxy< double >(this, "progress-fraction");
}

Glib::PropertyProxy_ReadOnly< double > Entry::property_progress_fraction() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "progress-fraction");
}

Glib::PropertyProxy< double > Entry::property_progress_pulse_step() 
{
  return Glib::PropertyProxy< double >(this, "progress-pulse-step");
}

Glib::PropertyProxy_ReadOnly< double > Entry::property_progress_pulse_step() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "progress-pulse-step");
}

Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> > Entry::property_primary_icon_pixbuf() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> >(this, "primary-icon-pixbuf");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> > Entry::property_primary_icon_pixbuf() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> >(this, "primary-icon-pixbuf");
}

Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> > Entry::property_secondary_icon_pixbuf() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> >(this, "secondary-icon-pixbuf");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> > Entry::property_secondary_icon_pixbuf() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> >(this, "secondary-icon-pixbuf");
}

Glib::PropertyProxy< StockID > Entry::property_primary_icon_stock() 
{
  return Glib::PropertyProxy< StockID >(this, "primary-icon-stock");
}

Glib::PropertyProxy_ReadOnly< StockID > Entry::property_primary_icon_stock() const
{
  return Glib::PropertyProxy_ReadOnly< StockID >(this, "primary-icon-stock");
}

Glib::PropertyProxy< StockID > Entry::property_secondary_icon_stock() 
{
  return Glib::PropertyProxy< StockID >(this, "secondary-icon-stock");
}

Glib::PropertyProxy_ReadOnly< StockID > Entry::property_secondary_icon_stock() const
{
  return Glib::PropertyProxy_ReadOnly< StockID >(this, "secondary-icon-stock");
}

Glib::PropertyProxy< Glib::ustring > Entry::property_primary_icon_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "primary-icon-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Entry::property_primary_icon_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "primary-icon-name");
}

Glib::PropertyProxy< Glib::ustring > Entry::property_secondary_icon_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "secondary-icon-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Entry::property_secondary_icon_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "secondary-icon-name");
}

Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> > Entry::property_primary_icon_gicon() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> >(this, "primary-icon-gicon");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> > Entry::property_primary_icon_gicon() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> >(this, "primary-icon-gicon");
}

Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> > Entry::property_secondary_icon_gicon() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> >(this, "secondary-icon-gicon");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> > Entry::property_secondary_icon_gicon() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> >(this, "secondary-icon-gicon");
}

Glib::PropertyProxy_ReadOnly< ImageType > Entry::property_primary_icon_storage_type() const
{
  return Glib::PropertyProxy_ReadOnly< ImageType >(this, "primary-icon-storage-type");
}

Glib::PropertyProxy_ReadOnly< ImageType > Entry::property_secondary_icon_storage_type() const
{
  return Glib::PropertyProxy_ReadOnly< ImageType >(this, "secondary-icon-storage-type");
}

Glib::PropertyProxy< bool > Entry::property_primary_icon_activatable() 
{
  return Glib::PropertyProxy< bool >(this, "primary-icon-activatable");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_primary_icon_activatable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "primary-icon-activatable");
}

Glib::PropertyProxy< bool > Entry::property_secondary_icon_activatable() 
{
  return Glib::PropertyProxy< bool >(this, "secondary-icon-activatable");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_secondary_icon_activatable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "secondary-icon-activatable");
}

Glib::PropertyProxy< bool > Entry::property_primary_icon_sensitive() 
{
  return Glib::PropertyProxy< bool >(this, "primary-icon-sensitive");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_primary_icon_sensitive() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "primary-icon-sensitive");
}

Glib::PropertyProxy< bool > Entry::property_secondary_icon_sensitive() 
{
  return Glib::PropertyProxy< bool >(this, "secondary-icon-sensitive");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_secondary_icon_sensitive() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "secondary-icon-sensitive");
}

Glib::PropertyProxy< bool > Entry::property_primary_icon_tooltip_text() 
{
  return Glib::PropertyProxy< bool >(this, "primary-icon-tooltip-text");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_primary_icon_tooltip_text() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "primary-icon-tooltip-text");
}

Glib::PropertyProxy< bool > Entry::property_secondary_icon_tooltip_text() 
{
  return Glib::PropertyProxy< bool >(this, "secondary-icon-tooltip-text");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_secondary_icon_tooltip_text() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "secondary-icon-tooltip-text");
}

Glib::PropertyProxy< bool > Entry::property_primary_icon_tooltip_markup() 
{
  return Glib::PropertyProxy< bool >(this, "primary-icon-tooltip-markup");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_primary_icon_tooltip_markup() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "primary-icon-tooltip-markup");
}

Glib::PropertyProxy< bool > Entry::property_secondary_icon_tooltip_markup() 
{
  return Glib::PropertyProxy< bool >(this, "secondary-icon-tooltip-markup");
}

Glib::PropertyProxy_ReadOnly< bool > Entry::property_secondary_icon_tooltip_markup() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "secondary-icon-tooltip-markup");
}

Glib::PropertyProxy< Glib::ustring > Entry::property_im_module() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "im-module");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Entry::property_im_module() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "im-module");
}


void Gtk::Entry::on_populate_popup(Menu* menu)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->populate_popup)
    (*base->populate_popup)(gobj(),(GtkMenu*)Glib::unwrap(menu));
}
void Gtk::Entry::on_insert_at_cursor(const Glib::ustring& str)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->insert_at_cursor)
    (*base->insert_at_cursor)(gobj(),str.c_str());
}
void Gtk::Entry::on_activate()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->activate)
    (*base->activate)(gobj());
}


} // namespace Gtk


