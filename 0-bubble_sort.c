#include "sort.h"
/**
 * bubble_sort - sort array lements from lowest to highest value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, j, t = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1] && array[j + 1])
			{
			tmp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = t;
			print_array(array, size);
			}
		}
}
