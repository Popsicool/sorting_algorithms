#include "sort.h"

/**
 * bubble_sort - function that sorts an array of
 * integers in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array to be sorted
 */
void bubble_sort(int *array, size_t size)
{

size_t i, j;
int t;

for (j = 0; j < (size - 1); j++)
{

	for (i = 0; i < (size - 1) ; i++)
	{
		if (array[i] > array[i + 1])
		{
			t = array[i];
			array[i] = array[i + 1];
			array[i + 1] = t;
			print_array(array, size);
		}
	}

}

}
