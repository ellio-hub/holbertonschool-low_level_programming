#include "holberton.h"

/**
 * _strstr - find substrings
 * @haystack:parameter
 * @needle:parameter
 * Return: null
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0;
if (*needle == 0)
return (haystack);
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return (haystack);
i++;
} while (haystack[i] == needle[i]);
}
haystack++;
}
return ('\0');
}
