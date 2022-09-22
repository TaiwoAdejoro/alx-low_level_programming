#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int j, k, tmp;

	k = n - 1;

	for (j = 0; j < n / 2; j++)
	{
		tmp = a[j];
		a[j] = a[k];
		a[k--] = tmp;
	}
}
