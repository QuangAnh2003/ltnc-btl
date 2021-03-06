#ifndef GAME_H
#define GAME_H

#include "common.h"
#include "Character.h"
#include "Enemy.h"
#include "Text.h"

bool check (SDL_Rect object1Rect, SDL_Rect& characterRect);
bool CheckInside (int &x, int &y, SDL_Rect& Rect);
int Selection(SDL_Event &e, Text Button[]);
int MoreHeart(int time, int& heart, Mix_Chunk* Boost);
#endif // GAME_H
