#include "lists.h"

/**
 * add_dnodeint - main function
 * @head:parameter
 * @n:parameter
 * Return:adress of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
if (*head != NULL)
(*head)->prev = new;
new->n = n;
new->next = *head;
new->prev = NULL;
*head = new;
return (new);
}
