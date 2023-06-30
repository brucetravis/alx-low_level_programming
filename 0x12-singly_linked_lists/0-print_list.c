#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: string of elements
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->value == 0)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %d\n", h->value, h->value);
}

h = h->next;
count++;
}

printf("-> %lu element %s", count, (count != 1) ? "s" : " ");

return (count);
}
