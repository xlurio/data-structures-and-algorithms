#include <gtest/gtest.h>
#include <stdlib.h>

extern "C"
{
#include "../src/binary_search.h"
}

TEST(SearchTests, test_valid_search)
{
    int array_to_search[] = {1, 2, 3, 4, 5};
    int found_index = search_in_array(5, array_to_search, 0, 4);

    int expected_result = 4;

    EXPECT_EQ(found_index, expected_result);
}

TEST(SearchTests, test_invalid_search)
{
    int array_to_search[5] = {1, 2, 3, 4, 5};
    int found_index = search_in_array(6, array_to_search, 0, 4);

    int expected_result = -1;

    EXPECT_EQ(found_index, expected_result);
}