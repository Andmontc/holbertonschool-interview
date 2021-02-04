#include "lists.h"
/**
 * insert_node - insert a node in a sorted linked list
 * @head: pointer to the head of the linked list
 * @number: number to insert in the list
 * Return: the new node or null
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode, *actualnode;

	actualnode = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode)
	{
		newnode->n = number;
		newnode->next = NULL;

		if (*head == NULL || actualnode->n >= newnode->n)
		{
			newnode->next = *head;
			*head = newnode;
		}
		else
		{
			while (actualnode->next != NULL && actualnode->next->n < newnode->n)
			{
				actualnode = actualnode->next;
			}
			newnode->next = actualnode->next;
			actualnode->next = newnode;
		}
		return (newnode);
	}
	return (NULL);
}
