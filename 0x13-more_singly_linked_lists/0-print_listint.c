#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list of type listint_t  to print
 *
 * Return: the number of node
 */

size_t print_listint(const listint_t *h)
{
const listint_t *current = h;
size_t count = 0;

while (current != 0)
{
printf("%d\n", current->n);
current = current->next;
count++;
}

return (count);
}
