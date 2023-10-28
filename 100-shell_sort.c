#include "sort.h"
#include <stdio.h>

/**
 * swap - swaps two indices of an array
 *
 * @array: the array
 * @i: first index
 * @j: second index
 *
 * Return: void
 */
void swap(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
/**
 * shell_sort - sorts an array using shell sort
 *
 * @array: the array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, j, i;

	gap = 1;
	while ((gap * 3 + 1) < size)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = 0; i <= gap; i++)
		{
			for (j = 0; j + gap <= size - 1; j++)
			{
				if (array[j] > array[j + gap])
					swap(array, (int)j, (int)(gap + j));
			}
		}

		gap /= 3;
		print_array(array, size);
	}
}
