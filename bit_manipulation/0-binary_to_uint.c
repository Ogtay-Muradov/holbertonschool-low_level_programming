#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary string
 * Return: converted value
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0, iter, power = 1;

	if (b == NULL)
		return (0);
	for (iter = 0; b[iter] != '\0'; iter++)
	{
		if (b[iter] != '0' && b[iter] != '1')
			return (0); }


	iter--;
	for (; iter >  -1; iter--)
	{
		result += (b[iter] - '0') * power;
		power *= 2; }
	return (result);
}
