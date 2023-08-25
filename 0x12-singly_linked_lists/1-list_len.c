#include "lists.h"
/**
 * list_len - prints list no. of elements
 * @h: pointer
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
unsigned int i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
