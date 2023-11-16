#include "lists.h"
/**
* sum_dlistint - sums all list elements 
* @head: head
* Return: Sum or 0
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
