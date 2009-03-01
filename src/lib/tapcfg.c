/**
 *  tapcfg - A cross-platform configuration utility for TAP driver
 *  Copyright (C) 2008-2009  Juho Vähä-Herttua
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 */

#include <string.h>

#if defined(_WIN32) || defined(_WIN64)
#  include <ws2tcpip.h>
#else
#  include <sys/types.h>
#  include <sys/socket.h>
#  include <netdb.h>
#endif

#include "tapcfg.h"
#include "taplog.h"

#define TAPCFG_BUFSIZE 4096

#if defined(_WIN32) || defined(_WIN64)
#  include "tapcfg_windows.c"
#else
#  include "tapcfg_unix.c"
#endif

