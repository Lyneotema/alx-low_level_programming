#include "lists.h"
/**
 * get_nodeint_at_index - Retrieve node at a certain index in a linked list
 * @head: Pointer to the head
 * @index: The index of node to retrieve
 * Return: pointer to the node being looked for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
















