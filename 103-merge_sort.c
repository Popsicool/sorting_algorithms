#include "sort.h"

/**
 * merge_compare - compares merges
 * @array: the integer array to be sortted
 * @start: the start index in question
 * @stop: the stop index in question
 * @new: array
 * Return: void.
 */
void merge_compare(int *array, size_t start, size_t stop, int *new)
{
	size_t i = start, j, b, middle;

	j = middle = (start + stop) / 2;
	printf("Merging...\n");

	printf("[left]: ");

	print_array(array + start, middle - start);

	printf("[right]: ");

	print_array(array + middle, stop - middle);

	for (b = start; b < stop; b++)
		if (i < middle && (j >= stop || array[i] <= array[j]))
		{

			new[b] = array[i++];
		}
		else
		{
			new[b] = array[j++];
		}
	printf("[Done]: ");
	print_array(new + start, stop - start);
}

/**
 * merge_sort_recursion - sort recursively
 * @array: array
 * @start: start
 * @stop: stop
 * @new: output
 *
 * Return: void.
 */
void merge_sort_recursion(int *array, size_t start, size_t stop, int *new)
{
	size_t middle;

	middle = (start + stop) / 2;
	if (stop - start < 2)
	{
		return;
	}
	merge_sort_recursion(new, start, middle, array);
	merge_sort_recursion(new, middle, stop, array);
	merge_compare(new, start, stop, array);
}


/**
 * merge_sort - sorts by merge sort algorithm
 * @array: the integer array to be sort
 * @size: array length
 *
 * Return: void.
 */
void merge_sort(int *array, size_t size)
{
	int *new;
	size_t i;


	if (!array || size < 2)
		return;

	new = malloc(sizeof(int) * size);
	if (!new)
		return;
	for (i = 0; i < size; i++)
		new[i] = array[i];
	merge_sort_recursion(array, 0, size, new);
	free(new);
}
