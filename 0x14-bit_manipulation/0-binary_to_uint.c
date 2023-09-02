#include "main.h"
/**
 * binary_to_uint - converts bin to int
 * @b: string to be converted
 * Return: 0 for Null string, else result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index = 0;

	if (!b)
        {
                return (0);
        }

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		result = (result << 1) | (b[index] - '0');
		index++;
	}

	return (result);
}
