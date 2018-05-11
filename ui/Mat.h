//
//  Mat.h
//  Nana
//
//  Created by  潘易  on 18/5/6.
//  Copyright (c) 2018年 xinlan. All rights reserved.
//

#ifndef __Nana__Mat__
#define __Nana__Mat__

#include <iostream>

class vec2{
public:
    float x;
    float y;
    vec2(float _x , float _y):x(_x),y(_y){
    }
    vec2():x(0),y(0){}
    
    void operator+(vec2 r);
    
    void show();
};

#endif /* defined(__Nana__Mat__) */
