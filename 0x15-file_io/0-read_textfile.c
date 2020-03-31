#include "holberton.h"

/**
 * read_textfile - main function
 * @filename : parameter
 * @letters : parameter
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *ch;
ssize_t lett;
int op;
int rd;
if (!filename)
return (0);
ch = malloc(letters);
op = open(filename, O_RDONLY);
rd = read(op, ch, letters);
if ((op == -1) || (rd == -1))
return (0);
lett = write(STDOUT_FILENO, ch, rd);
if (lett == -1)
return (0);
close(op);
return (lett);
}
