#include "my_class.h"
#include <gtest/gtest.h>

TEST(MyClassTest, DefaultTest) {
    my_class_namespace::its_int test_class;
    ASSERT_EQ(test_class.value(), 0);
}

TEST(MyClassTest, DefaultTest2) {
    my_class_namespace::its_int test_class{123};
    ASSERT_EQ(test_class.value(), 123);
}
