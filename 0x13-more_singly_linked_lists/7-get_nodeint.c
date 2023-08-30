#include "lists.h"

/**
 * @head: The first node in the linked list
 * get_nodeint_at_index - Returns the node at a certain index in a linked list
 * @index: This is the index of the node to return
 *
 * Return: The pointer to the node that we are looking for, or NULL if it fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}

