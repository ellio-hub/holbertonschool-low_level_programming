#ifndef _LIST_H_
#define _LIST_H_
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct list_s - list
 * @str: paraameter
 * @next: parameter
 * @l: parameter
 */
typedef struct list_s
{
char *str;
unsigned int l;
struct list_s *next;
} list_t;
unsigned int _strlen(char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
