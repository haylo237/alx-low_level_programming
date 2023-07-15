#include <stdio.h>
/**
 * main - entery of the program
 * Description: multiple numbers
 * Return: 0 is Succes
 */
int main(void)
{
	int f, l;

	for (f = 48 ; f < 57 ; f++)
	{
		for (l = f + 1 ; l <= 57 ; l++)
		{
			if (f != l)
			{
				putchar(f);
				putchar(l);
				if (f == 56 && l == 57)
				continue;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
