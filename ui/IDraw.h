//
//  IDraw.h
//  Nana
//
//  Created by  潘易  on 18/5/5.
//  Copyright (c) 2018年 xinlan. All rights reserved.
//

#ifndef __Nana__IDraw__
#define __Nana__IDraw__

class IDraw{

public:
    // draw point
    virtual void pixel(int x, int y) = 0;
    
    //draw Line
    virtual void draw_line(int x , int y) = 0;
};

#endif /* defined(__Nana__IDraw__) */
