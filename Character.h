#ifndef CHARACTER_H
#define CHARACTER_H

#include "common.h"

#define CHARACTER_WIDTH 200
#define CHARACTER_HEIGHT 200
using namespace std;

const int step = 200;

struct Character{
    int x;
    int y;

    void setpos(int _x, int  _y);
    void render(SDL_Renderer* renderer, SDL_Texture* characterTexture, SDL_Rect &characterRect);
    void move(SDL_Event &e);
    void goin();
};

#endif // CHARACTER_H

