#include "sort.h"
/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using the Selection sort algorithm
 *
 * @array: array to be sorted
 * @size: size of the array
 * Return: none
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	int smallest = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[i])
				smallest = j;
		}
		if (smallest)
		{
			tmp = array[i];
			array[i] = array[smallest];
			array[smallest] = tmp;
			print_array(array, size);
		}
		smallest = 0;
	}
}
