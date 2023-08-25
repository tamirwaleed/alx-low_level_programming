#include "lists.h"
#include <string.h>
/**
 * free_list - frees
 * @head: old head
 * Return: null
 */
void free_list(list_t *head)
{
list_t *temp;
if (head == NULL)
return;
while (head != NULL)
{
temp = head;
free(head->str);
head = head->next;
free(temp);
}
return;
}
