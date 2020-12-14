#include "lists.h"

/**
 * free_dlistint - main function
 * @head:parameter
 * Return: null
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *test;
test = head;
while (test)
{
free(test);
test = test->next;
}
}
