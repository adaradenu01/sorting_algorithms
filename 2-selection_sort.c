#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t first, second;

	if (array == NULL || size < 2)
		return;

	for (first = 0; first < size - 1; first++)
	{
		min = array + first;
		for (second = first + 1; second < size; second++)
			min = (array[second] < *min) ? (array + second) : min;

		if ((array + first) != min)
		{
			swap_ints(array + first, min);
			print_array(array, size);
		}
	}
}
