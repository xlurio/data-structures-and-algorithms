int search_in_array(int value_to_find, int *array_to_search)
{
    int last_index = sizeof(array_to_search) / sizeof(short);

    for (int i = 0; i <= last_index; i++)
    {
        if (array_to_search[i] == value_to_find)
        {
            return i;
        }
    }

    return -1;
}