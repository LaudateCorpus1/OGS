/*
 * This file is part of OGS Engine
 * Copyright (C) 1996-1997 Id Software, Inc.
 * Copyright (C) 2018, 2020-2021 BlackPhrase
 *
 * OGS Engine is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OGS Engine is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OGS Engine. If not, see <http://www.gnu.org/licenses/>.
 */

/// @file

#pragma once

#include "pm_shared/pm_defs.h"
#include "pm_shared/pm_movevars.h"

extern playermove_t *pmove;

void PlayerMove();

void PM_Init(playermove_t *ppmove);

int PM_HullPointContents(hull_t *hull, int num, vec3_t p);

int PM_PointContents(vec3_t point, int *truecontents);
qboolean PM_TestPlayerPosition(vec3_t point);
pmtrace_t PM_PlayerTrace(vec3_t start, vec3_t stop);

int PM_WaterEntity(float *p);
struct pmtrace_s *PM_TraceLine(float *start, float *end, int flags, int usehull, int ignore_pe);