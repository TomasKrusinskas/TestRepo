#include <iostream>
#include <gtest/gtest.h>

TEST(ExampleTest, BasicAssertion) {
    std::cout << "Test work" << std::endl;
    EXPECT_EQ(1, 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
