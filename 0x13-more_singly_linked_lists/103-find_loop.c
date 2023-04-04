#include "lists.h"
/**
 * *find_listint_loop - a function that finds the loop in a linked list
 * @head: pointer to a node
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	slow = slow->next;
	fast = fast->next->next;

	if (slow == fast)
	break;
	}

	if (!slow || !fast || !fast->next)
		return (NULL);

	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (fast);
}
