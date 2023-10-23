#include "sort.h"
/**
 * swap - swaps arrays at two possitions
 *
 * @array: pointer to the array
 * @i: index of element to be swapped
 * @j: index of element to be swapped
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
