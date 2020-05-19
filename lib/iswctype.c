/* Test whether a wide character has a given property.
   Copyright (C) 2011-2020 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2011.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include <wctype.h>

#if GNULIB_defined_wint_t

int
iswctype (wint_t wc, wctype_t desc)
# undef iswctype
{
  return ((wchar_t) wc == wc ? iswctype ((wchar_t) wc, desc) : 0);
}

#else

# include "iswctype-impl.h"

#endif
