#include "holberton.h"
/**
 * jack_bauer - main function
 * @void: parameter
 * Return: void
 */
void jack_bauer(void)
{
int hh, mm;
for (hh = 0; hh < 24; hh++)
{
for (mm = 0; mm < 60; mm++)
{
_putchar((hh / 10) + '0');
_putchar((hh % 10) + '0');
_putchar(':');
_putchar((mm / 10) + '0');
_putchar((mm % 10) + '0');
_putchar('\n');
}
}
return;
}
