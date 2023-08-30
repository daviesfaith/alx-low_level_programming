#include "lists.h"

/**
 * @head: The pointer here lead  to the first element in the linked list
 * pop_listint - This should delete the head node of a linked list
 *
 * Return: This is exactly the data inside the elements that was deleted,
 * or return 0 if the list is actually empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
