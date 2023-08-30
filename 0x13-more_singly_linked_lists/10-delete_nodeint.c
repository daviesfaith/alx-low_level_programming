#include "lists.h"

/**
 * @index: This is the index of the node to be deleted
 * @head: This is the pointer to the very first element located in the list
 * delete_nodeint_at_index - Will delete a node in a linked list at an index
 *
 * Return: (Success) 1, or (Fail) -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		a++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

