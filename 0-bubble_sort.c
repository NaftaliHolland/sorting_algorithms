#include "sort.h"

/**
 * bubble_sort - sorts an array and prints the array after each swap
 *
 * @array: pointer to the array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	char swapped;

	if (array == NULL || size < 1)
		return;

	swapped = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < (size - i) - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapped = 1;
				swap(array, j + 1, j);
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
