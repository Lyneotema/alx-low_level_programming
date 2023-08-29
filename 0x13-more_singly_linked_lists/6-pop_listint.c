#include "lists.h"

/**
 * pop_listint - Func. that deletes head node of linked list
 * @head: Pointer to the head
 * Return: Integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}















