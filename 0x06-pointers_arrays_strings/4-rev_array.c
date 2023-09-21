#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: Pointer to the array
 * @n: Number of elements in the array
 *
 * Description: This function takes an array of integers and reverses
 * the order of its elements.

*/
void reverse_array(int *a, int n)
{
	int sta;
	int end;

	sta = 0;
	end = n - 1;
	while (sta < end)
	{
		n = a[sta];
		a[sta] = a[end];
		a[end] = n;
		sta++;
		end--;
	}
}
