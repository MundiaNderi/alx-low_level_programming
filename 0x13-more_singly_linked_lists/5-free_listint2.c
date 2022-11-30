#include "lists.h"

/**
* free_listint2 -  frees a listint_t list
* @head: double poibter to the head of the list.
* Return: nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
