#include "lists.h"

/**
 * @n: We insert data in the new element
 * add_nodeint_end - At the end of the linked list, it adds nodes
 * @head: This is the very pointer to the first element in the entire list
 *
 * Return: You see the pointer to the new node, or NULL, if perhaps it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

