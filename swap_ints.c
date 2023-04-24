#include "sort.h"

/**
 * swap_ints - Swap two  given integers
 * @a: First integer
 * @b: Second integer
 */

void swap_ints(int *a,int *b)
{
	int temp;
	temp = *a; 
	*a = *b;
	*b = temp;
}
