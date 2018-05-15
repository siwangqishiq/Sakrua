#include "Mat.h"
#include <iostream>

#include "Mat.h"

using namespace std;

//Vec2::Vec2(real _x , real _y):x(_x) , y(_y){
//
//}

Vec2::Vec2(const Vec2 &v){
	this->x = v.x;
	this->y = v.y;
}

void Vec2::print(){
	cout << "<" << x << " , " << y << ">" <<endl; 
}


