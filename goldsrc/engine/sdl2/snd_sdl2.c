/*
 *	This file is part of OGS Engine
 *	Copyright (C) 1996-1997 Id Software, Inc.
 *	Copyright (C) 2018-2019 BlackPhrase
 *
 *	OGS Engine is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	OGS Engine is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with OGS Engine. If not, see <http://www.gnu.org/licenses/>.
 */

/// @file
/// @brief SDL2 sound driver implementation

#include "quakedef.h"

cvar_t bgmvolume = { "bgmvolume", "1", true };
cvar_t volume = { "volume", "0.7", true };

void S_Init()
{
}

void S_AmbientOff()
{
}

void S_AmbientOn()
{
}

void S_Shutdown()
{
}

void S_TouchSound(const char *sample)
{
}

void S_ClearBuffer()
{
}

void S_StaticSound(sfx_t *sfx, vec3_t origin, float vol, float attenuation)
{
}

void S_StartSound(int entnum, int entchannel, sfx_t *sfx, vec3_t origin, float fvol, float attenuation)
{
}

void S_StopSound(int entnum, int entchannel)
{
}

sfx_t *S_PrecacheSound(const char *sample)
{
	return NULL;
}

void S_ClearPrecache()
{
}

void S_Update(vec3_t origin, vec3_t v_forward, vec3_t v_right, vec3_t v_up)
{
}

void S_StopAllSounds(qboolean clear)
{
}

void S_BeginPrecaching()
{
}

void S_EndPrecaching()
{
}

void S_ExtraUpdate()
{
}

void S_LocalSound(const char *s)
{
}