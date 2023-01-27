#include "lists.h"
/**
 * free_list - frees
 * @head: head
 * Return: 0
 */

void free_list(list_t *head)
{

	list_t *current;

	while ((current = head) != NULL)
	{
	head = head->next;
	free(current->str);
	free(current);
	}
}
