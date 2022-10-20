#include "lists.h"

/**
 * free_list - free memory of all nodes in list
 * @head: pointer to head in fucntion
 */
void free_list(list_t *head)
{
	list_t *curr_node, *next_node;

	curr_node = head;
	while (curr_node != NULL)
	{
		next_node = curr_node;
		free(curr_node->str);
		free(curr_node);
		curr_node = next_node->next;
	}
}
