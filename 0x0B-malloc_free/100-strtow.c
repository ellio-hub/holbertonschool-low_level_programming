#include "holberton.h"
#include <stdlib.h>

/**
*count - Counter
*@str: parameter
*Return: integer
*/

int count(char *str)
{
	int i = 0, wx = 0;

	while (str[i] == ' ')
		i++;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == '\0' || str[i + 1] == ' '))
			wx++;
		i++;
	}
	return (wx);
}

/**
 *strtow - Copy words
 *@str: parameter
 *Return: array
 */

char **strtow(char *str)
{
	char **t;
	int wx, i = 0, j, c = 0, k;

	wx = count(str);
	if (wx == 0)
		return (NULL);
	t = (char **)malloc(sizeof(char *) * (wx + 1));
	if (t == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
			;
			t[c] = (char *)malloc((j + 1) * sizeof(char));
			if (t[c] == NULL)
			{
				for (k = 0; k < c; k++)
					free(t[k]);
				free(t);
				return (NULL);
			}
			for (k = 0; k < j; k++)
				t[c][k] = str[i + k];
			t[c][k] = '\0';
			c++;
			i += j;
		}
		else
			i++;
	}
	t[wx] = NULL;
	return (t);
}
