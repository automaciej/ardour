// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <ytkmm/alignment.h>
#include <ytkmm/private/alignment_p.h>


// -*- c++ -*-
/* $Id: alignment.ccg,v 1.1 2003/01/21 13:38:41 murrayc Exp $ */

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


} //namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Alignment* wrap(GtkAlignment* object, bool take_copy)
{
  return dynamic_cast<Gtk::Alignment *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Alignment_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Alignment_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_alignment_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Alignment_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Alignment_Class::wrap_new(GObject* o)
{
  return manage(new Alignment((GtkAlignment*)(o)));

}


/* The implementation: */

Alignment::Alignment(const Glib::ConstructParams& construct_params)
:
  Gtk::Bin(construct_params)
{
  }

Alignment::Alignment(GtkAlignment* castitem)
:
  Gtk::Bin((GtkBin*)(castitem))
{
  }

Alignment::~Alignment()
{
  destroy_();
}

Alignment::CppClassType Alignment::alignment_class_; // initialize static member

GType Alignment::get_type()
{
  return alignment_class_.init().get_type();
}


GType Alignment::get_base_type()
{
  return gtk_alignment_get_type();
}


Alignment::Alignment(float xalign, float yalign, float xscale, float yscale)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(alignment_class_.init(), "xalign", xalign, "yalign", yalign, "xscale", xscale, "yscale", yscale, static_cast<char*>(0)))
{
  

}

Alignment::Alignment(AlignmentEnum xalign, AlignmentEnum yalign, float xscale, float yscale)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Bin(Glib::ConstructParams(alignment_class_.init(), "xalign", _gtkmm_align_float_from_enum(xalign), "yalign", _gtkmm_align_float_from_enum(yalign), "xscale", xscale, "yscale", yscale, static_cast<char*>(0)))
{
  

}

void Alignment::set(float xalign, float yalign, float xscale, float yscale)
{
  gtk_alignment_set(gobj(), xalign, yalign, xscale, yscale);
}

void Alignment::set(AlignmentEnum xalign, AlignmentEnum yalign, float xscale, float yscale)
{
  gtk_alignment_set(gobj(), _gtkmm_align_float_from_enum(xalign), _gtkmm_align_float_from_enum(yalign), xscale, yscale);
}

void Alignment::set_padding(guint padding_top, guint padding_bottom, guint padding_left, guint padding_right)
{
  gtk_alignment_set_padding(gobj(), padding_top, padding_bottom, padding_left, padding_right);
}

void Alignment::get_padding(guint& padding_top, guint& padding_bottom, guint& padding_left, guint& padding_right)
{
  gtk_alignment_get_padding(gobj(), &(padding_top), &(padding_bottom), &(padding_left), &(padding_right));
}


Glib::PropertyProxy< float > Alignment::property_xalign() 
{
  return Glib::PropertyProxy< float >(this, "xalign");
}

Glib::PropertyProxy_ReadOnly< float > Alignment::property_xalign() const
{
  return Glib::PropertyProxy_ReadOnly< float >(this, "xalign");
}

Glib::PropertyProxy< float > Alignment::property_yalign() 
{
  return Glib::PropertyProxy< float >(this, "yalign");
}

Glib::PropertyProxy_ReadOnly< float > Alignment::property_yalign() const
{
  return Glib::PropertyProxy_ReadOnly< float >(this, "yalign");
}

Glib::PropertyProxy< float > Alignment::property_xscale() 
{
  return Glib::PropertyProxy< float >(this, "xscale");
}

Glib::PropertyProxy_ReadOnly< float > Alignment::property_xscale() const
{
  return Glib::PropertyProxy_ReadOnly< float >(this, "xscale");
}

Glib::PropertyProxy< float > Alignment::property_yscale() 
{
  return Glib::PropertyProxy< float >(this, "yscale");
}

Glib::PropertyProxy_ReadOnly< float > Alignment::property_yscale() const
{
  return Glib::PropertyProxy_ReadOnly< float >(this, "yscale");
}

Glib::PropertyProxy< guint > Alignment::property_top_padding() 
{
  return Glib::PropertyProxy< guint >(this, "top-padding");
}

Glib::PropertyProxy_ReadOnly< guint > Alignment::property_top_padding() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "top-padding");
}

Glib::PropertyProxy< guint > Alignment::property_bottom_padding() 
{
  return Glib::PropertyProxy< guint >(this, "bottom-padding");
}

Glib::PropertyProxy_ReadOnly< guint > Alignment::property_bottom_padding() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "bottom-padding");
}

Glib::PropertyProxy< guint > Alignment::property_left_padding() 
{
  return Glib::PropertyProxy< guint >(this, "left-padding");
}

Glib::PropertyProxy_ReadOnly< guint > Alignment::property_left_padding() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "left-padding");
}

Glib::PropertyProxy< guint > Alignment::property_right_padding() 
{
  return Glib::PropertyProxy< guint >(this, "right-padding");
}

Glib::PropertyProxy_ReadOnly< guint > Alignment::property_right_padding() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "right-padding");
}


} // namespace Gtk


