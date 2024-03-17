#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * Description: Concatenates two strings s1 and the first n bytes of s2
 * @s1: The first string
 * @s2: The second string
 * @n: The bytes to be concated
 *
 * Return: NULL on failure, a pointer to a newly allocated space in memory
 * which contains s1, followed by the first n bytes of s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
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

	if (n < s2_len)
		s2_len = n;

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
