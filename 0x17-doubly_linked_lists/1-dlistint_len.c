#include "lists.h"
/**
 * dlistint_len - prints number
 * @h: head
 * Return: Number 
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
