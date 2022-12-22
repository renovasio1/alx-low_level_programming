#include "main.h"

/**
 * reverse_array - reverses array
 *
 * @n: elements of the array
 *
 * @a: -  array to be reserved
 *
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
