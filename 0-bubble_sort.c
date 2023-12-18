#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the bubble sort algorithm
 * @array: array of integers
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}
