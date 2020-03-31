#include "holberton.h"

/**
 * append_text_to_file - main function
 * @filename: parameter
 * @text_content: parameter
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
int op, i ,c;
if (!filename)
return (-1);
op = open(filename, O_WRONLY | O_APPEND);
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
close(op);
return (1);
}
