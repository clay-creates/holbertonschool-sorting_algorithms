#include "sort.h"

/**
 * swap - swaps two values
 * @a: first value
 * @b: second value
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - partitions an array using Lamuto scheme
 * @array: array to partition
 * @low: value / space before array starts
 * @high: final value in array
 *
 * Return: returns index of pivot after partitioning
 */

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

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	int low, high, part;

	low = 0;
	high = size - 1;

	print_array(array, size);

	if (low < high)
	{
		part = partition(array, low, high);

		quick_sort(array, part);
		quick_sort(array + part + 1, size - part - 1);
	}
}
