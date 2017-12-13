#include <iostream>
#include <limits.h>
#include "../core/Oper.h"
#include "gtest/gtest.h"

TEST(OperTest, build) {
	Oper p(1,2);
	//p.debug();
	EXPECT_EQ(1 ,p.getA());
	EXPECT_EQ(2 ,p.getB());
}

TEST(OperTest, build2) {
	Oper p(3,4);
	//p.debug();
	EXPECT_EQ(3 ,p.getA());
	EXPECT_EQ(4 ,p.getB());
}

TEST(OperTest, add) {
	Oper p(3,4);
	//p.debug();
	EXPECT_EQ(7 ,p.add());

	Oper p2(5,10000);
	EXPECT_EQ(10005 ,p2.add());

	ASSERT_EQ(7, p.add());
}

TEST(OperTest, minus) {
	Oper p(3,4);
	//p.debug();
	EXPECT_EQ(-1 ,p.minus());

	Oper p2(5000,1000);
	EXPECT_EQ(4000 ,p2.minus());

	EXPECT_EQ(4000, p2.minus());
}

TEST(OperTest, multi) {
	Oper p(3,4);
	//p.debug();
	EXPECT_EQ(12 ,p.multi());

	Oper p2(100,-100);
	EXPECT_EQ(-10000 ,p2.multi());
}


