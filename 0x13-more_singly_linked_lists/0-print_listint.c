#include "lists.h"

/**
 * print_listint - This will print all the very elements of a linked list
 * @h: the linked list of type listint_t is to print
 *
 * Return: Should return the number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

