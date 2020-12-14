#include "lists.h"

/**
 * insert_dnodeint_at_index - main function
 * @h:parameter
 * @idx:parameter
 * @n:parameter
 * Return: adress of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *test, *new;
unsigned int i;
if (idx == 0)
return (add_dnodeint(h, n));
test = *h;
for (i = 0; i < idx - 1 && test; i++)
test = test->next;
if (i < (idx - 1))
return (NULL);
if (i + 1 == idx)
return (add_dnodeint_end(h, n));
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
test = *h;
test->next->prev = new;
new->next = test->next;
test->next = new;
new->prev = test;
new->n = n;
return (new);
}
