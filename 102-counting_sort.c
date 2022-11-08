#include "sort.h"

void counting_sort(int *array, size_t size)
{
	int largest = -1, i;
	int count, j, n;
	int array2[100];
	size_t p;
	int array3[100];

	if (array == NULL || size < 2)
		return;

	for (p = 0; p < size; p++)
	{
		if (largest == -1)
			largest = array[p];

		else if (largest < array[p])
		{
			largest = array[p];
		}
	}
	printf("largest is %d\n", largest);
	largest++;
	for (i = 0; i < largest; i++)
		array2[i] = 0;

	count = 0;
	for (i = 0; i < (largest); i++)
	{

		for (p = 0; p < size ; p++)
		{
			if (array[p] == i)
				count++;
		}
		array2[i] = count;
	}

	for (p = 0; array2[p] != '\0';p++)
		printf("%d\n", array2[p]);

	count = 0;

	for (j = 0; j < largest; j++)
	{
		if (array2[j] != 0)
		{
			n = array2[j];

			for (i = 0; i < n; i++)
			{
				array3[count] = j;
				count++;
			}
		}
	}
	
	for (i = 0; array3[i] != '\0'; i++)
		array[i] = array3[i];
}
