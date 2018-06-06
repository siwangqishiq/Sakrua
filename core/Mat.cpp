#include "Mat.h"
#include <iostream>

#include "Mat.h"

using namespace std;
using namespace Sakrua;

//Vec2::Vec2(real _x , real _y):x(_x) , y(_y){
//
//}

Vec2::Vec2(const Vec2 &v){
	this->x = v.x;
	this->y = v.y;
}

Vec2::Vec2(){
	x = 0;
	y = 0;
}

void Vec2::print(){
	cout << "<" << x << " , " << y << ">" <<endl; 
}

Vec2& Vec2::operator=(Vec2 &rgh){
	this->x = rgh.x;
	this->y = rgh.y;
	return *this;
}

Vec2& Vec2::operator+(Vec2 &r){
	this->x += r.x;
	this->y += r.y;
	return *this;
}

Vec2& Vec2::operator-(Vec2 &r){
	this->x -= r.x;
	this->y -= r.y;
	return *this;
}

real Vec2::operator*(Vec2 &r){
	return this->x * r.x + this->y * r.y;
}


