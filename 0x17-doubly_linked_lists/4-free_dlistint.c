#include "lists.h"
/**
 * free_dlistint - frees
 * @head: head
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *node;
if (!head)
return;
while (head->next)
{
node = head;
head = head->next;
free(node);
}
return;
}
