#ifndef SORT_H
#define SORT_H
#include <stddef.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap(int *aray, int i, int j);
void insertion_sort_list(listint_t **list);
void swap_list(listint_t *list, listint_t *node1, listint_t *node2);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void sort(int *array, int high, int low, size_t size);
int partition(int *array, int high, int low);
void shell_sort(int *array, size_t size);
void insertion_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void make_heap(int *array, size_t size, int i);
void heap_sort(int *array, size_t size);
#endif
