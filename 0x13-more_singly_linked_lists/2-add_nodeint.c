#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning.
 * @head: pointer to a pointer to the head of the list
 * @n: data to be added to the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;

*head = new_node;

return (new_node);
}
