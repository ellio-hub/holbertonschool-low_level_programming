#include "lists.h"

/**
 * _strlen - lenght
 * @s: parameter
 * 
 * 
 * Return: address
 */
unsigned int _strlen(char *s)
{
int i = 1;
while (s[i] != '\0')
i++;
return (i);
}
/**
 * add_node - add node
 * @head: parameter
 * @str: parameter
 * 
 * 
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *first;
if (str == NULL)
return (NULL);
first = malloc(sizeof(list_t));
if (first == NULL)
{
return (NULL);
}
first->str = strdup(str);
if (first->str == NULL)
{
free(first);
return (NULL);
}
first->len = _strlen(first->str);
first->next = *head;
*head = first;
return (first);
}
