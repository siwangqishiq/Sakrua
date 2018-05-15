#include <iostream>
#include "../core/Mat.h"
#include "gtest/gtest.h"
#include <limits.h>


TEST(MatTest, build) {
	Vec2 v(1 , 2);

	EXPECT_EQ(1 ,v.x);
	EXPECT_EQ(2 ,v.y);
}

