#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + len))
		len++;

	p = (char *) malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	while (i < len)
	{
		*(p + i) = *(str + i);
		i++;
	}

	*(p + i) = '\0';

	return (p);
}

