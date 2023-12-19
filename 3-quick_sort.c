#include "sort.h"

/***/

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *array, int low, int high)
{
    int i, j, pivot;

    pivot = array[high];
    i = (low - 1);

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void quick_sort(int *array, size_t size)
{
    int low, high, part;

    low = 0;
    high = size - 1;

    if (low < high)
    {
        part = partition(array, low, high);

        quick_sort(array, part);
        quick_sort(array + part + 1, size - part - 1);
    }
}
