
#include "lists.h"

/**
 * @head: This is the pointer to the first node in the entire list
 * add_nodeint - This will add a new node at the beginning of a linked list
 * @n: This shoudl actually insert data in that new node
 * Return: The pointer to the new node, or NULL if perhaps it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

