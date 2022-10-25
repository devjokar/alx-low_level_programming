#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t
 * @h: pointer to the header address
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
