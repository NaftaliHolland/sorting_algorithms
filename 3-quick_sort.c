#include "sort.h"
#include <stdio.h>
/**
 * swap - swaps two indices of an aray
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
 * partition - Partitions an array into two parts using the
 * Lomuto partition scheme
 *
 * @array: pointer to the array to be sorted
 * @high: the last index of the array
 * @low: the first index of the array
 * @size: size of the array
 *
 * Return: an integer representing the index of the pivot
 */
int partition(int *array, int high, int low)
{
	int p, i, j;

	i = low - 1;
	p = array[high];

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= p)
		{
			i += 1;
			swap(array, i, j);
		}
	}
	i += 1;
	swap(array, i, high);
	return (i);
}
/**
 * sort - A recursive function that sorts an array
 *
 * @array: the array
 * @high: the last index of the array
 * @low: the first index of the array
 * @size: size of the array
 *
 * Return: void
 */
void sort(int *array, int high, int low, size_t size)
{
	int p;

	if (low >= high || low < 0)
		return;

	p = partition(array, high, low);

	sort(array, p - 1, low, size);
	sort(array, high, p + 1, size);
	print_array(array, size);
}
/**
 * quick_sort - sorts an array using quick sort algotithm
 *
 * @array: the array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int high, low;

	high = size - 1;
	low = 0;

	sort(array, high, low, size);
}
