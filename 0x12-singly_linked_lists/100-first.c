#include <stdio.h>
void print(void) __attribute__ ((constructor));
/**
 * printfirst - print
 *
 * 
 * Return: void
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n,I bore my house upon my back!\n");
}
