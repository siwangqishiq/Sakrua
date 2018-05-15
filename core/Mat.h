#ifndef _SAKRUA_MAT_H_
#define _SAKRUA_MAT_H_

#include "Sakrua.hpp"

class Vec2{
	public:
		Vec2(const Vec2 &v);
		Vec2(real _x , real _y): x(_x),y(_y){	}
		real x;
		real y;
		

		void print();
	protected:
	private:
};//end class Vec2

class Vec3{
	public:
		real x;
		real y;
		real z;
};

#endif
