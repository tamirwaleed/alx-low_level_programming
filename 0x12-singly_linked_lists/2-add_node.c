#include "lists.h"
#include <string.h>
/**
 * add_node - adds new node
 * @head: old head
 * @str: new string
 * Return: pointer to head
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = strlen(str);
new->next = *head;
*head = new;
return (*head);
}
