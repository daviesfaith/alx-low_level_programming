#include "lists.h"

/**
 * @h: Lists of type listint_t to traverse
 * listint_len - Will return the number of the elements in a linked lists
 *
 * Return: Returning the very number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
