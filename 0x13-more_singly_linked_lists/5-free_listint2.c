#include "lists.h"

/**
 * @head: The pointer here to the listint_t list to be set free
 * free_listint2 - This will free a linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

