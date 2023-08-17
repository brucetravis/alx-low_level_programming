#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 * @head: Double pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted.
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i = 0;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}
while (current != NULL && i < index)
{
current = current->next;
i++;
}
if (current == NULL)
return (-1);


temp = current;
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(temp);

return (1);
}
