#include "lists.h"
#include <string.h>
/**
 * add_node - adds new node
 * @head: old head
 * @str: new string
 * Return: pointer to head
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t)), *last;
last = *head;
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;
while (last->next != NULL)
last = last->next;
last->next = new;
return (*head);
}
