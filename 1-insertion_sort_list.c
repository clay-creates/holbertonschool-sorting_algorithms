#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * @list: the double linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted, *current, *next, *current_sorted;

	sorted = NULL;
	current = *list;

	while (current != NULL)
	{
		next = current->next;
		current_sorted = sorted;

		current->prev = current->next = NULL;

		if (sorted == NULL || sorted->n >= current->n)
		{
			current->next = sorted;
			if (sorted != NULL)
			{
				sorted->prev = current;
				sorted = current;
			}
			else
			{
				while (current_sorted->next != NULL && current_sorted->next->n < current->n)
				{
					current_sorted = current_sorted->next;
					current->next = current_sorted->next;
				}
				if (current_sorted->next != NULL)
				{
					current_sorted->next->prev = current;
					current_sorted->next = current;
					current->prev = current_sorted;
				}
			}
			print_list(sorted);
			current = next;
		}
		*list = sorted;
	}
}
