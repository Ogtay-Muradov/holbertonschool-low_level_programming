#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: str
 * @s2: str
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
  char *arr;
  int i, size_1, size_2;
  int size;

  if (s1 == NULL)
    {
      size_1 = 0;
    }
  else
    {
      size_1 = strlen(s1);
    }
  if (s2 == NULL)
    {
      size_2 = 0;
    }
  else
    {
      size_2 = strlen(s2);
    }
  size = size_1 + size_2;
  arr = malloc(sizeof(char) * (size_1 + size_2) + 1);
  if (arr == NULL)
    {
      return (NULL);
    }
  for (i = 0; i < size; i++)
    {
      if (i < size_1)
	{
	  arr[i] = s1[i];
	}
      else
	arr[i] = s2[i - size_1];
    }
  arr[i] = '\0';
  return (arr);
}~1;95;0c#ifndef MAIN_H
#define MAIN_H
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
