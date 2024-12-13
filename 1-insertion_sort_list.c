#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers in 
 * ascending order using the Insertion sort algorithm
 * @list: Pointer to pointer structure.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *sorted, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	sorted = *list;
	current = sorted->next;

	while (current)
	{
		temp = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;
			if (current->prev)
				current->prev->next = current;
			else
				*list = current;
			print_list(*list);
		}
		current = temp;
	}
}
