#include "sort.h"

void shell_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, gap = 1;

	while ((gap * 3 + 1) < size)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i += 1)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
