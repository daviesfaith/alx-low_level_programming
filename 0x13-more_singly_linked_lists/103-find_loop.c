#include "lists.h"

/**
 * find_listint_loop -  This will find the loop in a all the linked list
 * @head: The linked list to be thoroughly searched for
 *
 * Return: Will address of the node where the loop start, or NULL if it fails
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}

