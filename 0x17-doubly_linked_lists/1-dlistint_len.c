#include "lists.h"

/**
 * dlistint_len - main function
 * @h: parameter
 * Return: n
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);
}
