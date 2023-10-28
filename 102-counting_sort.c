#include "sort.h"
#include <stdlib.h>
/**
 * counting_sort - sorts an array in ascending order
 *
 * @array: the array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void counting_sort(int *array, size_t size)
{
	int *count, *output, max, i;

	if (array == NULL)
		return;
	max = array[0];
	i = 1;
	while (i < (int)size - 1)
	{
		if (array[i] > max)
			max = array[i];
		i++;
	}
	count = malloc(sizeof(int) * (max + 1));
	if (count == NULL)
		return;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
	{
		free(count);
		return;
	}
	for (i = 0; i < (int)size - 1; i++)
		count[i] = 0;
	for (i = 0; i < (int)size; i++)
		count[array[i]] += 1;
	for (i = 1; i <= max; i++)
		count[i] += count[i - 1];
	print_array(count, max + 1);
	for (i = 0; i < (int)size; i++)
	{
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}
	for (i = 0; i < (int)size; i++)
		array[i] = output[i];
	free(output);
	free(count);
}
