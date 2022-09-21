#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers..
 * @a: one of two points to be swaped
 * @b: two of two points to be swapped
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
