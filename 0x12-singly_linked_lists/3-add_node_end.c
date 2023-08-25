#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds new node at tail
 * @head: old head
 * @str: new string
 * Return: pointer to head
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t)), *last;
if (new == NULL)
return (NULL);
last = *head;
new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (*head);
}
while (last->next != NULL)
last = last->next;
last->next = new;
return (*head);
}
