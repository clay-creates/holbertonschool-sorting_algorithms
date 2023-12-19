#include "sort.h"

/***/

void selection_sort(int *array, size_t size)
{
    int a, b, i, j, temp, min_idx;

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_idx])
            {
                min_idx = j;
            }
        }
        temp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = temp;

        print_array(array, size);
    }
}
