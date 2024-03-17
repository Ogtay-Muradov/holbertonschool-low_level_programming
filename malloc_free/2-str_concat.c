#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * Description: Concatenates two strings s1 and s2
 * @s1: The first string
 * @s2: The second string
 *
 * Return: NULL on failure, a pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, s1_len = 0, s2_len = 0;

	if (s1 != NULL)
	{
		while (s1[s1_len] != '\0')
			s1_len++;
	}

	if (s2 != NULL)
	{
		while (s2[s2_len] != '\0')
			s2_len++;
	}

	str = malloc(s1_len + s2_len + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		str[i] = s1[i];

	for (i = 0; i < s2_len; i++)
		str[i + s1_len] = s2[i];

	str[s1_len + s2_len] = '\0';

	return (str);
}
