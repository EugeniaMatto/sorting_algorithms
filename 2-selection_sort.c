#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
	int min, i = 0, j, aux;

	if (size == 0)
		return;

	for (i = 0; i < (int)size; i++)
	{
		min = array[i];
		for (j = i + 1; j < (int)size; j++)
		{
			if (array[j] < min)
			{
				aux = j;
				min = array[j];
			}
		}
		if (min != array[i])
		{
			array[aux] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
