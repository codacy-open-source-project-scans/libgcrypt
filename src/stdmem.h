/* stdmem.h -  internal definitions for stdmem
 *	Copyright (C) 2000, 2002, 2005 Free Software Foundation, Inc.
 *
 * This file is part of Libgcrypt.
 *
 * Libgcrypt is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * Libgcrypt is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, see <https://www.gnu.org/licenses/>.
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#ifndef G10_STDMEM_H
#define G10_STDMEM_H 1

void *_gcry_private_malloc (size_t n) _GCRY_GCC_ATTR_MALLOC;
void *_gcry_private_malloc_secure (size_t n, int xhint) _GCRY_GCC_ATTR_MALLOC;
void *_gcry_private_realloc (void *a, size_t n, int xhint);
void _gcry_private_free (void *a);

#endif /* G10_STDMEM_H */
