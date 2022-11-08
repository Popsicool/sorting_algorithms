#include "sort.h"

void cocktail_sort_list(listint_t **list)
{
	int swapped = 1;
	int i;
	listint_t curr = *list;
	listint_t *forw;

	while (curr->prev != NULL)
		curr = curr->prev;

	while (swapped)
	{
		swapped = 0;
		while (curr->next != NULL)
		{
			forw = (*curr)->next
			if (curr->n > forw)
			{
				swap(
			}
			curr = curr->next;

		}
	}
}


/**
 * swap - swap two nodes
 * @head: head of the node
 * @first: first node to be swaped
 * @second: second node to be swaped
 * Return: void
 */
void swap(listint_t **head, listint_t *first, listint_t *second)
{
	listint_t *prev, *next;
	prev = first->prev;
	next = second->next;
	if (prev != NULL)
		prev->next = second;
	else
		*head = second;

	first->prev = second;
	first->next = next;
	second->prev = prev;
	second->next = first;
	
	if (next)
		next->prev = first;
}
