#include "lists.h"

/**
 * add_dnodeint_end - main function
 * @head:parameter
 * @n:parameter
 * Return:adress of new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *tmp = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
if (*head == NULL)
{
new->next = NULL;
new->n = n;
new->prev = NULL;
*head = new;
return (new);
}
while (tmp->next != NULL)
tmp = tmp->next;
new->next = NULL;
new->n = n;
tmp->next = new;
new->prev = tmp;
return (new);
}
