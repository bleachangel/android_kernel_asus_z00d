/*
 * Support for Intel Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 - 2014 Intel Corporation. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef __QUEUE_H_INCLUDED__
#define __QUEUE_H_INCLUDED__

/*
 * This file is included on every cell {SP,ISP,host} and is system agnostic
 *
 * System and cell specific interfaces and inline code are included
 * conditionally through Makefile path settings.
 *
 *  - system and cell agnostic interfaces, constants and identifiers
 *	- public:  cell specific interfaces
 *	- private: cell specific inline implementations
 *	- global:  inter cell constants and identifiers
 *	- local:   cell specific constants and identifiers
 *
 */

#include <storage_class.h>

#include "queue_local.h"

#ifndef __INLINE_QUEUE__
#define STORAGE_CLASS_QUEUE_H STORAGE_CLASS_EXTERN
#define STORAGE_CLASS_QUEUE_C 
/* #include "queue_public.h" */
#include "ia_css_queue.h"
#else  /* __INLINE_QUEUE__ */
#define STORAGE_CLASS_QUEUE_H STORAGE_CLASS_INLINE
#define STORAGE_CLASS_QUEUE_C STORAGE_CLASS_INLINE
#include "queue_private.h"
#endif /* __INLINE_QUEUE__ */

#endif /* __QUEUE_H_INCLUDED__ */
