#include "lists.h"
/**
 * listint_len - counts no. of elements in  linked lists
 * @h: Pointer to head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}

