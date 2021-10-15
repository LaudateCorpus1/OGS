/*
 * This file is part of OGS Engine
 * Copyright (C) 2018, 2021 BlackPhrase
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

#include "quakedef.h"

qpic_t *draw_disc = NULL;

void Draw_Init(){};

void Draw_Character(int x, int y, int num){};

void Draw_Pic(int x, int y, qpic_t *pic){};

void Draw_TransPic(int x, int y, qpic_t *pic){};

void Draw_ConsoleBackground(int lines){};

void Draw_BeginDisc(){};

void Draw_EndDisc(){};

void Draw_TileClear(int x, int y, int w, int h){};

void Draw_Fill(int x, int y, int w, int h, int c){};

void Draw_FadeScreen(){};

void Draw_String(int x, int y, const char *str){};

qpic_t *Draw_PicFromWad(const char *name)
{
	return NULL;
};

qpic_t *Draw_CachePic(const char *path)
{
	return NULL;
};