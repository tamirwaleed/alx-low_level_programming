#include "function_pointers.h"
/*
 * array_iterator - applies function to each array element
 *@array: array
 *@size: array size
 *@action: function
 * Return: null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
exit(98);
for (i = 0; i < size; i++)
action(array[i]); 
return;
}
