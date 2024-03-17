#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 *
 * Description: Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter str
 * @str: The string to copy
 *
 * Return: NULL if str is NULL or duplication fails, a pointer to a new string
 * which is a duplicate otherwise.
 */

char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(len + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
