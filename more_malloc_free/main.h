#include <unistd.h>

/**
 * _putchar - Writes the character c
 *
 * malloc_checked - Allocates memory using malloc
 *
 * string_nconcat - Concatenates two strings
 *
 * _calloc - Allocates memory for an array, using malloc
 *
 * array_range - Creates an array of integers
 */

int _putchar(char c);

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);
