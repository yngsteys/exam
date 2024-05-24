#include <gtest/gtest.h>

#include "vector.hpp"

using AS::Vector;

TEST(default_constructor, size) {
	Vector<int> v;
	ASSERT_EQ(0, v.get_size());
}

TEST(add, full) {
	Vector<int> v;
	v.add(1);
	v.add(2);
	v.add(3);
	ASSERT_EQ(3, v.get_size());
	EXPECT_TRUE(v.has_item(1));
	EXPECT_FALSE(v.has_item(4));
}


TEST(remove, full) {
	Vector<int> v;
	v.add(1);
	v.add(2);
	v.add(3);
	v.add(3);
	ASSERT_EQ(4, v.get_size());
	
	v.remove(3);
	ASSERT_EQ(3, v.get_size());
	EXPECT_TRUE(v.has_item(3));
	
	v.remove(3);
	ASSERT_EQ(2, v.get_size());
	EXPECT_FALSE(v.has_item(3));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
