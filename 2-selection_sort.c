#include "sort.h"
/**
 * swap - swaps array inices
 *
 * @array: pointer to the array
 * @i: index of the element
 * @j: index of element
 *
 * Return: void
 */
void swap(int *array, size_t i, size_t j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: pointer to the array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t min, i, j;

	if (array == NULL || size < 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			swap(array, min, i);
			print_array(array, size);
		}
	}
}
