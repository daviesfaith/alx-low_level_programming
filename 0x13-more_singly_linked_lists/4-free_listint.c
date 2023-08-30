#include "lists.h"

/**
 * @head: listint_t the list that must be made free
 * free_listint - this will free a linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

