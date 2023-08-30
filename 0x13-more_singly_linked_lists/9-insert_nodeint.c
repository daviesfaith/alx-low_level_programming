#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node and puts it in a linked list,
 * you can find it at a given position
 * @head: This is the pointer to the first node in the list
 * @idx: Describes the index where the new node is added
 * @n: This is the data to be inserted in the new node
 *
 * Return: This will return the pointer to the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (a = 0; temp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

