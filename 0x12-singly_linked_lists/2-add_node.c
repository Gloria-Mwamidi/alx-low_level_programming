#include "lists.h"
#include <string.h>
/**
 * *add_node -  function that adds a new node at the beginning of a list_t list
 * @str: string to be duplicated
 * @head: pointer to the head of lists_t list
 *
 * Return: the address of the new element and NULL if the function fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	int new_len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (new_len = 0; str[new_len];)
		new_len++;

	new_node->str = new_str;
	new_node->len = new_len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
