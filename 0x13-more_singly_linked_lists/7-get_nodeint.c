#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @index: index of the node, starting at .
 * @head: pointer to the elements
 *
 * Return:  nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
return (current);

current = current->next;
count++;
}

return (NULL);
}
