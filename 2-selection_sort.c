#include "sort.h"

/**
 * selection_sort - sort array of ints in ascending order
 * @array: array to sort
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, min_idx;

	if (array == NULL)
	{
		return;
	}

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
		if (min_idx != i)
		{
			temp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
