// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/gc.h>
#include <gdkmm/private/gc_p.h>


// -*- c++ -*-
/* $Id: gc.ccg,v 1.1 2003/01/21 13:38:08 murrayc Exp $ */

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

#include <ydk/gdk.h>
#include <gdkmm/color.h>
//#include <gdkmm/font.h>
//#include <gdkmm/pixmap.h>
#include <gdkmm/bitmap.h>
#include <gdkmm/colormap.h>

namespace Gdk
{

GC::GC(const Glib::RefPtr<Drawable>& drawable)
: Object( G_OBJECT( gdk_gc_new(Glib::unwrap(drawable)) ) )
{
  //We need a construct function if we really want to use our own GClass. Bug #86867
}


}


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gdk::LineStyle>::value_type()
{
  return gdk_line_style_get_type();
}

// static
GType Glib::Value<Gdk::CapStyle>::value_type()
{
  return gdk_cap_style_get_type();
}

// static
GType Glib::Value<Gdk::JoinStyle>::value_type()
{
  return gdk_join_style_get_type();
}

// static
GType Glib::Value<Gdk::Fill>::value_type()
{
  return gdk_fill_get_type();
}

// static
GType Glib::Value<Gdk::Function>::value_type()
{
  return gdk_function_get_type();
}

// static
GType Glib::Value<Gdk::SubwindowMode>::value_type()
{
  return gdk_subwindow_mode_get_type();
}

// static
GType Glib::Value<Gdk::GCValuesMask>::value_type()
{
  return gdk_gc_values_mask_get_type();
}


namespace Glib
{

Glib::RefPtr<Gdk::GC> wrap(GdkGC* object, bool take_copy)
{
  return Glib::RefPtr<Gdk::GC>( dynamic_cast<Gdk::GC*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& GC_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &GC_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_gc_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void GC_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* GC_Class::wrap_new(GObject* object)
{
  return new GC((GdkGC*)object);
}


/* The implementation: */

GdkGC* GC::gobj_copy()
{
  reference();
  return gobj();
}

GC::GC(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

GC::GC(GdkGC* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


GC::~GC()
{}


GC::CppClassType GC::gc_class_; // initialize static member

GType GC::get_type()
{
  return gc_class_.init().get_type();
}


GType GC::get_base_type()
{
  return gdk_gc_get_type();
}


GC::GC()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(gc_class_.init()))
{
  

}

Glib::RefPtr<GC> GC::create()
{
  return Glib::RefPtr<GC>( new GC() );
}

Glib::RefPtr<GC> GC::create(const Glib::RefPtr<Drawable>& drawable)
{
  return Glib::RefPtr<GC>( new GC(drawable) );
}

void GC::set_foreground(const Color& color)
{
  gdk_gc_set_foreground(gobj(), (color).gobj());
}

void GC::set_background(const Color& color)
{
  gdk_gc_set_background(gobj(), (color).gobj());
}

void GC::set_function(Function function)
{
  gdk_gc_set_function(gobj(), ((GdkFunction)(function)));
}

void GC::set_fill(Fill fill)
{
  gdk_gc_set_fill(gobj(), ((GdkFill)(fill)));
}

void GC::set_tile(const Glib::RefPtr<Pixmap>& tile)
{
  gdk_gc_set_tile(gobj(), Glib::unwrap(tile));
}

void GC::set_stipple(const Glib::RefPtr<Pixmap>& stipple)
{
  gdk_gc_set_stipple(gobj(), Glib::unwrap(stipple));
}

void GC::set_ts_origin(int x, int y)
{
  gdk_gc_set_ts_origin(gobj(), x, y);
}

void GC::set_clip_origin(int x, int y)
{
  gdk_gc_set_clip_origin(gobj(), x, y);
}

void GC::set_clip_mask(const Glib::RefPtr<Bitmap>& mask)
{
  gdk_gc_set_clip_mask(gobj(), Glib::unwrap(mask));
}

#ifndef GDKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void GC::set_clip_rectangle(Rectangle& rectangle)
{
  gdk_gc_set_clip_rectangle(gobj(), (rectangle).gobj());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GDKMM_DISABLE_DEPRECATED

void GC::set_clip_rectangle(const Rectangle& rectangle)
{
  gdk_gc_set_clip_rectangle(gobj(), (rectangle).gobj());
}

void GC::set_clip_region(const Region& region)
{
  gdk_gc_set_clip_region(gobj(), (region).gobj());
}

void GC::set_subwindow(SubwindowMode mode)
{
  gdk_gc_set_subwindow(gobj(), ((GdkSubwindowMode)(mode)));
}

void GC::set_exposures(bool exposures)
{
  gdk_gc_set_exposures(gobj(), static_cast<int>(exposures));
}

void GC::set_line_attributes(int line_width, LineStyle line_style, CapStyle cap_style, JoinStyle join_style)
{
  gdk_gc_set_line_attributes(gobj(), line_width, ((GdkLineStyle)(line_style)), ((GdkCapStyle)(cap_style)), ((GdkJoinStyle)(join_style)));
}

void GC::set_dashes(int dash_offset, gint8* dash_list, int n)
{
  gdk_gc_set_dashes(gobj(), dash_offset, dash_list, n);
}

void GC::offset(int x_offset, int y_offset)
{
  gdk_gc_offset(gobj(), x_offset, y_offset);
}

void GC::set_colormap(const Glib::RefPtr<Colormap>& colormap)
{
  gdk_gc_set_colormap(gobj(), Glib::unwrap(colormap));
}

Glib::RefPtr<Colormap> GC::get_colormap()
{
  Glib::RefPtr<Colormap> retvalue = Glib::wrap(gdk_gc_get_colormap(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

void GC::set_rgb_fg_color(const Color& color)
{
  gdk_gc_set_rgb_fg_color(gobj(), (color).gobj());
}

void GC::set_rgb_bg_color(const Color& color)
{
  gdk_gc_set_rgb_bg_color(gobj(), (color).gobj());
}

Glib::RefPtr<Screen> GC::get_screen()
{
  Glib::RefPtr<Screen> retvalue = Glib::wrap(gdk_gc_get_screen(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Screen> GC::get_screen() const
{
  return const_cast<GC*>(this)->get_screen();
}


} // namespace Gdk


