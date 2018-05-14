//
//  SdlRenderDraw.cpp
//  Nana
//
//  Created by  潘易  on 18/5/5.
//  Copyright (c) 2018年 xinlan. All rights reserved.
//

#ifdef _WIN32
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif

#include <iostream>
#include "IDraw.h"


using namespace std;

class SdlRenderDraw : public IDraw{
protected:
    SDL_Renderer* renderer;
public:
    SdlRenderDraw(SDL_Renderer *r):renderer(r){
    }
    
    void pixel(int x, int y){
       // cout << "draw point" << x << " "<< y << endl;
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderDrawLine(renderer, 100, 100, 500, 500);
        
        //SDL_render
    }
    
    void draw_line(int x , int y){
       // cout << "draw line" << x << " "<< y << endl;
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderDrawLine(renderer, 100, 100, 500, 500);
    }
    
    ~SdlRenderDraw(){
    }
};
