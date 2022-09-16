int search_in_array(int value_to_find,
                    int *array_to_search,
                    int first_index,
                    int last_index)
{
    if (last_index >= first_index)
    {
        int half_size = (last_index - first_index) / 2;
        int mid_index = half_size + first_index;

        if (value_to_find == array_to_search[mid_index])
        {
            return mid_index;
        }
        else if (value_to_find < array_to_search[mid_index])
        {
            return search_in_array(value_to_find,
                                   array_to_search,
                                   first_index,
                                   mid_index - 1);
        }

        return search_in_array(value_to_find,
                               array_to_search,
                               mid_index + 1,
                               last_index);
    }

    return -1;
}