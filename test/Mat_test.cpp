#include <iostream>
#include "../core/Mat.h"
#include "gtest/gtest.h"
#include <limits.h>


TEST(Vec2_Test, build){
	Vec2 v(1 , 2);

	EXPECT_EQ(1 ,v.x);
	EXPECT_EQ(2 ,v.y);
}

TEST(Vec2_Test , show){
	Vec2 v(10,20);
	v.print();
}

TEST(MatTest , default){
	Vec2 v;
	EXPECT_EQ(v.x , 0);
	EXPECT_EQ(v.y , 0);
}

TEST(Vec2_TEST , assign){
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

