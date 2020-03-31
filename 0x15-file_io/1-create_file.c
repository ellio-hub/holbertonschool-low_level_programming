#include "holberton.h"
/**
 * create_file - main function
 * @filename: parameter
 * @text_content: parameter
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
int op, i, c;
if (!filename)
return (-1);
op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (op == -1)
return (-1);
if (text_content)
{
for (i = 0; text_content[i]; i++)
;
c = write(op, text_content, i);
if (c == -1)
return (-1);
}
return (1);
}
