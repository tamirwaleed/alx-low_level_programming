#include "lists.h"
/**
 * add_dnodeint_end - adds node at end
 * @head: head
 * @n: data
 * Return: address or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t)), *point;

if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (!*head)
{
*head = new;
new->prev = NULL;
}
else
{
point = *head;
while (point->next)
point = point->next;
new->prev = point;
point->next = new;
}
return (new);
}
