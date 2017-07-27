/*  =========================================================================
    fty-info - generated layer of public API

    Copyright (C) 2014 - 2017 Eaton                                        
                                                                           
    This program is free software; you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by   
    the Free Software Foundation; either version 2 of the License, or      
    (at your option) any later version.                                    
                                                                           
    This program is distributed in the hope that it will be useful,        
    but WITHOUT ANY WARRANTY; without even the implied warranty of         
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          
    GNU General Public License for more details.                           
                                                                           
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.            

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_INFO_LIBRARY_H_INCLUDED
#define FTY_INFO_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>
#include <malamute.h>
#include <cxxtools/allocator.h>
#include <ftyproto.h>

//  FTY_INFO version macros for compile-time API detection
#define FTY_INFO_VERSION_MAJOR 1
#define FTY_INFO_VERSION_MINOR 0
#define FTY_INFO_VERSION_PATCH 0

#define FTY_INFO_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define FTY_INFO_VERSION \
    FTY_INFO_MAKE_VERSION(FTY_INFO_VERSION_MAJOR, FTY_INFO_VERSION_MINOR, FTY_INFO_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined FTY_INFO_STATIC
#       define FTY_INFO_EXPORT
#   elif defined FTY_INFO_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define FTY_INFO_EXPORT __declspec(dllexport)
#       else
#           define FTY_INFO_EXPORT
#       endif
#   elif defined FTY_INFO_EXPORTS
#       define FTY_INFO_EXPORT __declspec(dllexport)
#   else
#       define FTY_INFO_EXPORT __declspec(dllimport)
#   endif
#   define FTY_INFO_PRIVATE
#else
#   define FTY_INFO_EXPORT
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define FTY_INFO_PRIVATE __attribute__ ((visibility ("hidden")))
#   else
#       define FTY_INFO_PRIVATE
#   endif
#endif

//  Project has no stable classes, so we build the draft API
#undef  FTY_INFO_BUILD_DRAFT_API
#define FTY_INFO_BUILD_DRAFT_API

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
//  Draft classes are by default not built in stable releases
#ifdef FTY_INFO_BUILD_DRAFT_API
typedef struct _linuxinfo_t linuxinfo_t;
#define LINUXINFO_T_DEFINED
typedef struct _fty_info_server_t fty_info_server_t;
#define FTY_INFO_SERVER_T_DEFINED
#endif // FTY_INFO_BUILD_DRAFT_API


//  Public classes, each with its own header file
#ifdef FTY_INFO_BUILD_DRAFT_API
#include "linuxinfo.h"
#include "fty_info_server.h"
#endif // FTY_INFO_BUILD_DRAFT_API

#ifdef FTY_INFO_BUILD_DRAFT_API
//  Self test for private classes
FTY_INFO_EXPORT void
    fty_info_private_selftest (bool verbose);
#endif // FTY_INFO_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
