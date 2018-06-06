#include <iostream>
#include "../core/Mat.h"
#include "gtest/gtest.h"
#include <limits.h>

using namespace Sakrua;

TEST(Vec2_Test1, build){
	Vec2 v(1 , 2);

	EXPECT_EQ(1 ,v.x);
	EXPECT_EQ(2 ,v.y);
}

TEST(Vec2_Test2 , show){
	Vec2 v(10,20);
	v.print();
}

TEST(Vec2_Test3 , default){
	Vec2 v;
	EXPECT_EQ(v.x , 0);
	EXPECT_EQ(v.y , 0);
}

TEST(Vec2_TEST4 , assign){
	Vec2 v1(3, 4);
	Vec2 v2;
	
	EXPECT_EQ(v1.x , 3);
	EXPECT_EQ(v1.y , 4);

	v1 = v2;
	EXPECT_EQ(v1.x , 0);
	EXPECT_EQ(v1.y , 0);

	Vec2 v3(100, 200);
	Vec2 v4 = v3;

	EXPECT_EQ(v4.x , 100);
	EXPECT_EQ(v4.y , 200);
}

TEST(Vec2_Test5 , cal_add){
	Vec2 v1(1 , 2);
	Vec2 v2(3 , 4);
	v1 + v2;
	
	EXPECT_EQ(v1.x , 4);
	EXPECT_EQ(v1.y , 6);
	EXPECT_EQ(v2.x , 3);
	EXPECT_EQ(v2.y , 4);
}

TEST(Vec2_TEST6 , cal_sub){
	Vec2 v1(1 , 2);
	Vec2 v2(3 , 4);
	Vec2 v3 = v1 - v2;
	
	EXPECT_EQ(v1.x , -2);
	EXPECT_EQ(v1.y , -2);
	EXPECT_EQ(v3.x , -2);
	EXPECT_EQ(v3.y , -2);
}

TEST(Vec2_TEST7 , cal_mul){
	Vec2 v1(1,0);
	Vec2 v2(0,1);

	EXPECT_EQ(0 , v1 * v2);

	Vec2 v3(3,4);
	Vec2 v4 = v3;
	EXPECT_EQ(25 , v3 * v4);
}


