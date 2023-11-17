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
unsigned int i = 0;
dlistint_t *new, *temp;
if (idx == 0)
new = add_dnodeint(h, n);
else
{
temp = *h;
i = 1;
if (temp)
while (temp->prev)
temp = temp->prev;
while(temp)
{
if (i == idx)
{
if (temp->next == NULL)
new = add_dnodeint_end(h, n);
else
{
new = malloc(sizeof(dlistint_t));
if (!new)
{
new->n = n;
new->next = temp->next;
new->prev = temp;
temp->next->prev = new;
temp->next = new;
}
}
break;
}
temp = temp->next;
i++;
}
}
return (new);
}
