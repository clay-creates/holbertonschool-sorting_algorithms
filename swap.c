#include "sort.h"

/**
 * swap - swaps two values
 * @a: value one
 * @b: value two
 */

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
