#include "lists.h"
/**
 * get_dnodeint_at_index - returns node
 * @head: head
 * @index: required index
 * Return: 0 or required node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *node;
if (!head)
return (NULL);
node = head;
while (node->next)
{
if (i == index)
return (node);
else
{
node = node->next;
i++;
}
}
return (node);
}
