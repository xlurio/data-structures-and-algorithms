#include <gmock/gmock.h>
#include <gtest/gtest.h>

extern "C"
{
#include "../src/merge_sort.h"
}

TEST(SortTests, test_sorting)
{
    int expected_result[5] = {1, 2, 3, 4, 5};

    int *array_to_sort = (int *)malloc(5 * sizeof(short));
    array_to_sort[0] = 5;
    array_to_sort[1] = 1;
    array_to_sort[2] = 3;
    array_to_sort[3] = 2;
    array_to_sort[4] = 4;

    sort(&array_to_sort);

    int result[] = {array_to_sort[0],
                    array_to_sort[1],
                    array_to_sort[2],
                    array_to_sort[3],
                    array_to_sort[4]};

    EXPECT_THAT(result, ::testing::ElementsAreArray(expected_result));
}