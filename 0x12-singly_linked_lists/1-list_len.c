
#include "lists.h"

/**
 * list_len - number of elements in a list
 * @h: parameter
 * 
 * 
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
size_t l = 0;
int i;
const list_t *x = h;
for (i = 0; x; i++)
{
x = x->next;
l++;
}
return (l);
}
