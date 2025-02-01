// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/colormap.h>
#include <gdkmm/private/colormap_p.h>


// -*- c++ -*-
/* $Id: colormap.ccg,v 1.3 2005/11/29 16:38:10 murrayc Exp $ */

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

namespace Gdk
{

Colormap::Colormap(const Glib::RefPtr<Visual>& visual, bool allocate)
: Glib::Object( G_OBJECT( gdk_colormap_new(Glib::unwrap(visual), (gboolean)allocate) ) )
  {}

#ifndef GDKMM_DISABLE_DEPRECATED

int Colormap::alloc_colors(ArrayHandle_Color& colors, int ncolors, bool writeable, bool best_match, Glib::ArrayHandle<bool>& success)
{
  return gdk_colormap_alloc_colors(gobj(), const_cast<GdkColor*>(colors.data()), ncolors, static_cast<int>(writeable), static_cast<int>(best_match), (gboolean*)(success.data()));
}

void Colormap::free_colors(Color& colors, int ncolors)
{
  gdk_colormap_free_colors(gobj(), (colors).gobj(), ncolors);
}
#endif // GDKMM_DISABLE_DEPRECATED


void Colormap::free_color(Color& color)
{
  gdk_colormap_free_colors(gobj(), color.gobj(), 1);
}

} // namespace Gdk


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::Colormap> wrap(GdkColormap* object, bool take_copy)
{
  return Glib::RefPtr<Gdk::Colormap>( dynamic_cast<Gdk::Colormap*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& Colormap_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Colormap_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_colormap_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Colormap_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Colormap_Class::wrap_new(GObject* object)
{
  return new Colormap((GdkColormap*)object);
}


/* The implementation: */

GdkColormap* Colormap::gobj_copy()
{
  reference();
  return gobj();
}

Colormap::Colormap(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Colormap::Colormap(GdkColormap* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Colormap::~Colormap()
{}


Colormap::CppClassType Colormap::colormap_class_; // initialize static member

GType Colormap::get_type()
{
  return colormap_class_.init().get_type();
}


GType Colormap::get_base_type()
{
  return gdk_colormap_get_type();
}


Glib::RefPtr<Colormap> Colormap::create(const Glib::RefPtr<Visual>& visual, bool allocate)
{
  return Glib::RefPtr<Colormap>( new Colormap(visual, allocate) );
}

Glib::RefPtr<Colormap> Colormap::get_system()
{

  Glib::RefPtr<Colormap> retvalue = Glib::wrap(gdk_colormap_get_system());
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}

bool Colormap::alloc_color(Color& color, bool writeable, bool best_match)
{
  return gdk_colormap_alloc_color(gobj(), (color).gobj(), static_cast<int>(writeable), static_cast<int>(best_match));
}

void Colormap::query_color(gulong pixel, Color& result)
{
  gdk_colormap_query_color(gobj(), pixel, (result).gobj());
}

Glib::RefPtr<Visual> Colormap::get_visual()
{
  Glib::RefPtr<Visual> retvalue = Glib::wrap(gdk_colormap_get_visual(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Visual> Colormap::get_visual() const
{
  return const_cast<Colormap*>(this)->get_visual();
}

Glib::RefPtr<Screen> Colormap::get_screen()
{
  Glib::RefPtr<Screen> retvalue = Glib::wrap(gdk_colormap_get_screen(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Screen> Colormap::get_screen() const
{
  return const_cast<Colormap*>(this)->get_screen();
}


} // namespace Gdk


