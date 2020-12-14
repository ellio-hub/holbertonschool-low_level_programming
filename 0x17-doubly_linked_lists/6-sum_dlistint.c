
#include "lists.h"

/**
 * sum_dlistint - main function
 * @head:parameter
 * Return: sum of numbers stored in list
 */

int sum_dlistint(dlistint_t *head)
{
int x = 0;
while (head != NULL)
{
x = x + head->n;
head = head->next;
}
return (x);
}
