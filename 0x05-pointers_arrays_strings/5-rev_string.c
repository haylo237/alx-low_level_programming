#include "main.h"
/**
 * rev_string - reverses the string
 * @s: string variable
 * Return: Void
 */

void rev_string(char *s)
{
	int length = 0, i, j;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0, j = length - 1 ; i < j ; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
