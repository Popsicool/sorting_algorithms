#include "sort.h"

void swap(int *x, int *y);
void quick_sort_recursion(int array[], int low, int high, size_t size);
int partition(int array[], int low, int high, size_t size);

/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array to be sorted
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursion(array, 0, (size - 1), size);

}


/**
 * swap - swap two in n an array
 * @x: first int to swap
 * @y: second int to swap
 * Return: void
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * quick_sort_recursion - sort the array
 * @array: array to be sorted
 * @low: lower bound of the array part to be sorted
 * @high: higher bound of the array to be sorted
 * @size: size of the array
 * Return: void
 */
void quick_sort_recursion(int array[], int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{

	pivot = partition(array, low, high, size);
	quick_sort_recursion(array, low, pivot - 1, size);
	quick_sort_recursion(array, pivot + 1, high, size);
	}

}

/**
 * partition - partition the array and swap base on partition
 * @array: array to be partitioned
 * @low: lower bound of the part of array to partition
 * @high: upper bound of array to be paritioned
 * @size: size of the array to be sorted
 * Return: the parttion index
 */
int partition(int array[], int low, int high, size_t size)
{
	int j;
	int pivot_value = array[high];
	int i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		
		}
	}
	swap(&array[i], &array[high]);
	print_array(array, size);

	return (i);
}
