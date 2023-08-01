#include "main.h"
/**
 * _strspn - Entry point
 * @s: input string
 * @accept: allowed characters
 * Return: Length returned
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int isAccepted;
	int i;

	while (*s)
	{
		isAccepted = 0;

		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				isAccepted = 1;
				break;
			}
		}

		if (!isAccepted)
		{
			break;
		}

		length++;
		s++;
	}
	return (length);
}
