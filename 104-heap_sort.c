#include "sort.h"
/**
 * swap - swaps two indices in an array
 *
 * @array: the array
 * @i: index 1
 * @j: index 2
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
 * make_heap - creates a heap structure from array
 *
 * @array: the array
 * @size: size of the array
 * @i: right start
 *
 * Return: void
 */
void make_heap(int *array, size_t size, int i)
{
	int lg, left_child_index, right_child_index;

	lg = i;
	left_child_index = 2 * i + 1;
	right_child_index = 2 * i + 2;

	if ((left_child_index) < (int)size - 1 && array[left_child_index] > array[lg])
		lg = left_child_index;
	if (right_child_index < (int)size - 1 && array[right_child_index] > array[lg])
		lg = right_child_index;
	if (lg != i)
	{
		swap(array, i, lg);
		print_array(array, size);
		make_heap(array, size, lg);
	}
}
/**
 * heap_sort - sorts an array
 *
 * @array: the array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void heap_sort(int *array, size_t size)
{
	int i;

	for (i = size / 2 - 1; i >= 0; i--)
		make_heap(array, size, i);

	for (i = size - 1; i >= 0; i--)
	{
		swap(array, 0, i);
		print_array(array, size);
		make_heap(array, size, 0);
	}
}
