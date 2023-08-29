#include "lists.h"

/**
 * free_listint - Func. that frees linked list
 * @head: listint_t list to free
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}











