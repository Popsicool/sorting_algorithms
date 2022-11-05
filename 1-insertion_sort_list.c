#include "sort.h"

void swap(listint_t **head, listint_t *node1, listint_t *node2);
/**
 * insertion_sort_list - function that sorts a doubly linked
 * list of integers in ascending order using the Insertion sort algorithm
 *
 * @list: list to be sorted
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *forw, *tmp;

	for (forw = (*list)->next; forw && forw->prev; forw = forw->next)
	{
		for (; forw && forw->prev && forw->n < forw->prev->n;
		     forw = forw->prev)
		{
			tmp = forw->prev;
			swap(list, tmp, forw);
			print_list(*list);
			forw = forw->next;
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
