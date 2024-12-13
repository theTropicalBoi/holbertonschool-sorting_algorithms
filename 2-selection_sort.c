#include "sort.h"
#include <stdlib.h>

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 *
 * @array: int
 * @size: size
 */

void selection_sort(int *array, size_t size)
{
	int i, j;
	int min;
	int temp;
	int s = size;

	for (i = 0; i < s - 1; i++)
	{
		min = i;
		for (j = i + 1; j < s; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
