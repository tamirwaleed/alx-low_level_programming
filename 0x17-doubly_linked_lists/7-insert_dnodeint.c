#include "lists.h"
/**
* insert_dnodeint_at_index - adds new node
* @head: head
* @idx: index
*@n: data
* Return: address of new node or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *temp = *h;
if (idx == 0)
return (add_dnodeint(h, n));
for (; idx != 1; idx--)
{
temp = temp->next;
if (!temp)
return (NULL);
}
if (temp->next == NULL)
return (add_dnodeint_end(h, n));
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->prev = temp;
new->next = temp->next;
temp->next->prev = new;
temp->next = new;
return (new);
}
