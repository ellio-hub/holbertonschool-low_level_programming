#include "holberton.h"

/**
 * test - main function
 * @file_from: parameter
 * @file_to: tparmeter
 *
 * Return: int
 */
int test(char *file_to, char *file_from)
{
char *buff[1024];
int f11, f12, f21, f22, f31, f32;
f11 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (f11 == -1)
return (99);
f12 = open(file_from, O_RDONLY);
if (f12 == -1)
return (98);
f21 = read(f12, buff, 1024);
if (f21 == -1)
return (98);
while (f21 == 1)
{
f22 = write(f11, buff, f21);
if (f22 == -1)
return (99);
f21 = read(f12, buff, 1024);
if (f21 == -1)
return (98);
}
f32 = close(f11);
if (f32 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f32);
return (100);
}
f31 = close(f12);
if (f31 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f31);
return (100);
}
return (0);
}
/**
 * main - main function
 * @av: parameter
 * @ac: parameter
 *
 * Return: 0
 */
int main(int ac, char **av)
{
int x;
if (ac != 3)
dprintf(STDERR_FILENO, "Usage: test file_from file_to\n"), exit(97);
x = test(av[2], av[1]);
switch (x)
{
case (98):
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
case (99):
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
case (100):
exit(100);
return (0);
}
}
