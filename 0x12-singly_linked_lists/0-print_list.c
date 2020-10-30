#include "lists.h"

/**
 * print_list - print a list
 * @h: parameter
 * 
 * 
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t l = 0;
int i;
const list_t *x = h;
for (i = 0; x; i++)
{
if (x->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", x->len, x->str);
x = x->next;
l++;
}
return (l);
}
