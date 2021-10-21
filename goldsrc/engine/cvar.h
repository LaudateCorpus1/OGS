/*
 * This file is part of OGS Engine
 * Copyright (C) 1996-1997 Id Software, Inc.
 * Copyright (C) 2018, 2020 BlackPhrase
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

/*

cvar_t variables are used to hold scalar or string variables that can be changed or displayed at the console or prog code as well as accessed directly
in C code.

it is sufficient to initialize a cvar_t with just the first two fields, or
you can add a flags bitsum for variables that you want to be applied on a cvar:

cvar_t	r_draworder = {"r_draworder","1"};
cvar_t	scr_screensize = {"screensize","1",FCVAR_ARCHIVE};

Cvars must be registered before use, or they will have a 0 value instead of the float interpretation of the string.  Generally, all cvar_t declarations should be registered in the apropriate init function before any console commands are executed:
Cvar_RegisterVariable (&host_framerate);

C code usually just references a cvar in place:
if ( r_draworder.value )

It could optionally ask for the value to be looked up for a string name:
if (Cvar_VariableValue ("r_draworder"))

Interpreted prog code can access cvars with the cvar(name) or
cvar_set (name, value) internal functions:
teamplay = cvar("teamplay");
cvar_set ("gl_ztrick", "1");

The user can access cvars from the console in two ways:
r_draworder			prints the current value
r_draworder 0		sets the current value to 0
Cvars are restricted from having the same names as commands to keep this
interface from being ambiguous.
*/

#include "cvardef.h"

extern cvar_t *cvar_vars;

void Cvar_Init();

void Cvar_RegisterVariable(cvar_t *variable);
// registers a cvar that already has the name, string, and optionally the
// archive elements set.

cvar_t *Cvar_RegisterClientVariable(const char *name, const char *value, int flags);

cvar_t *Cvar_RegisterGameVariable(const char *name, const char *value, int flags);

void Cvar_Set(const char *var_name, const char *value);
// equivelant to "<name> <variable>" typed at the console

void Cvar_SetValue(const char *var_name, float value);
// expands value to a string and calls Cvar_Set

float Cvar_VariableValue(const char *var_name);
// returns 0 if not defined or non numeric

const char *Cvar_VariableString(const char *var_name);
// returns an empty string if not defined

/// returns 0 if not defined or non numeric
int Cvar_VariableInt(const char *var_name);

const char *Cvar_CompleteVariable(const char *partial);
// attempts to match a partial variable name for command line completion
// returns NULL if nothing fits

qboolean Cvar_Command();
// called by Cmd_ExecuteString when Cmd_Argv(0) doesn't match a known
// command.  Returns true if the command was a variable reference that
// was handled. (print or change)

void Cvar_WriteVariables(FILE *f);
// Writes lines containing "set variable value" for all variables
// with the archive flag set to true.

cvar_t *Cvar_FindVar(const char *var_name);