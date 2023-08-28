#include "lists.h"
#include <stdio.h>
/**
 * size_t print_listint - Print elements of singly linked list
 * @h: Head pointer to singly linked list
 * @n: pointer to data
 * @next: pointer to the next data
 * Return: no. of nodes
 */
 size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

