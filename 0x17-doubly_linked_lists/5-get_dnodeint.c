#include "lists.h"

/**
 * get_dnodeint_at_index - main function
 * @head:parameter
 * @index:parameter
 * Return:n th node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
while(head->next)
{
if (i == index)
return (head);
i++;
head = head->next;
}
return (NULL);
}
