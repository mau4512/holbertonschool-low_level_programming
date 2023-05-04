#include "lists.h"

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: The head of the doubly linked list
  * @index: The index to find in the doubly linked list
  * Return: The specific node of the doubly linked list
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *actual = head;
	unsigned int iterator = 0;

	if (head)
	{
		while (actual != NULL)
		{
			if (iterator == index)
				return (actual);

			actual = actual->next;
			++iterator;
		}
	}

	return (NULL);
}
