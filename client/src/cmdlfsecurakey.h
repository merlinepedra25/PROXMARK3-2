//-----------------------------------------------------------------------------
// Copyright (C) Proxmark3 contributors. See AUTHORS.md for details.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// See LICENSE.txt for the text of the license.
//-----------------------------------------------------------------------------
// Low frequency Securakey tag commands
//-----------------------------------------------------------------------------
#ifndef CMDLFSECURAKEY_H__
#define CMDLFSECURAKEY_H__

#include "common.h"

int CmdLFSecurakey(const char *Cmd);

int demodSecurakey(bool verbose);
int detectSecurakey(uint8_t *dest, size_t *size);

#endif

