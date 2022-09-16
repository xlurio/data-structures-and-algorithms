#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <stdlib.h>

extern "C"
{
#include "../src/linear_search.h"
}

TEST(SearchTests, test_valid_search)
{
    int array_to_search[] = {5, 1, 3, 2, 4};
    int found_index = search_in_array(3, array_to_search);

    int expected_result = 2;

    EXPECT_EQ(found_index, expected_result);
}

TEST(SearchTests, test_invalid_search)
{
    int array_to_search[5] = {5, 1, 3, 2, 4};
    int found_index = search_in_array(6, array_to_search);

    int expected_result = -1;

    EXPECT_EQ(found_index, expected_result);
}