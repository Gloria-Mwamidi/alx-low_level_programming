#include "lists.h"
#include <stdio.h>

/**
 * loop_listint_count - a function that counts the nuber of nodes
 * @head: a pointer to the node
 *
 * Return: number of node on sucess and 0 on failure
 */
size_t loop_listint_count(const listint_t *head)
{
	const listint_t *last, *first;
	size_t len = 1;

	if (head->next == NULL || head == NULL)
		return (0);
	first = head->next;
	last = (head->next)->next;

	while (last)
	{
		if (first == last)
		{
			first = head;
			while (first != last)
			{
				len++;
				first = first->next;
				last = last->next;
			}
			first = first->next;
			while (first != last)
			{
				len++;
				first = first->next;
			}
			return (len);
		}
		first = first->next;
		last = (last->next)->next;
	}
	return (0);

}

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: pointer to the node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len, i = 0;

	len = loop_listint_count(head);
	if (len == 0)
	{
		for (; head != NULL; len++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p} %d\n", (void *)head, head->n);
	}
	return (len);
}
