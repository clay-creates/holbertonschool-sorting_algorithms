#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	int i, j, temp, pivot;

	if (array == NULL || size <= 1)
	{
		return;
	}

	pivot = array[size / 2];
	i = 0;
	j = size - 1;

	while (i <= j)
	{
		while (array[i] < pivot)
		{
			i++;
		}
		while (array[j] > pivot)
		{
			j--;
		}
		if (i <= j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
		quick_sort(array, j + 1);
		quick_sort(array + i, size - i);
	}
	print_array(array, size);
}
