#include <gtest/gtest.h>
#include "/Users/tarasneridnyi/Desktop/Lab6_4_it/src/functions.cpp"

TEST(ArrayTests, FindDobutok) {
    int arr1[] = {0, 1, 4, 3, 6};
    EXPECT_EQ(findDobutok(arr1, 5), 0);

    int arr2[] = {2, 1, 4, 3, 6};
    EXPECT_EQ(findDobutok(arr2, 5), 48);

    int arr3[] = {1, 3, 5, 7, 9};
    EXPECT_EQ(findDobutok(arr3, 5), 45);
}

TEST(ArrayTests, FindSumBetweenTwoZeroes) {
    int arr1[] = {1, 0, 2, 3, 0};
    EXPECT_EQ(findSumBetweenTwoZeroes(arr1, 5), 5);

    int arr2[] = {1, 0, 0, 3, 0};
    EXPECT_EQ(findSumBetweenTwoZeroes(arr2, 5), 3);

    int arr3[] = {1, 2, 3, 0, 0};
    EXPECT_EQ(findSumBetweenTwoZeroes(arr3, 5), 0);

    int arr4[] = {0, 1, 2, 3, 0};
    EXPECT_EQ(findSumBetweenTwoZeroes(arr4, 5), 6);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
