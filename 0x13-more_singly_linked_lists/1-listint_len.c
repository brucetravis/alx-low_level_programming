#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: linked list of type listint_t to traverse
 *
 * Return: the number of elements/nodes
 */

size_t listint_len(const listint_t *h)
{
const listint_t *current = h;
size_t count = 0;

while (current != 0)
{
current = current->next;
count++;
}

return (count);
}
