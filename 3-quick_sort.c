#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	int i = 0, aux, j, temp, k;

	if (size == 0)
		return;

	for (; i < size; i++)
	{
		aux = array[i];
		for (j = size - 1; j >= 0; j--)
		{
			if (aux > array[j])
			{
				array[i] = array[j];
				array[j] = aux;
				break;
			}
		}
		for (k = i + 1; k < j; k++)
		{
			if (aux < array[k])
			{
				array
			}
		}
	}
}
