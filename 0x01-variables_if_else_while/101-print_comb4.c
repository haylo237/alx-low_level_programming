#include <stdio.h>
/**
 * main - program start
 * Return: 0 is Success
 */

int main(void)
{
	int f, m, l;

	for (f = 48 ; f < 57 ; f++)
	{
		for (m = f + 1 ; m <= 57 ; m++)
		{
			for (l = m + 1 ; l <= 57 ; l++)
			{
				if ((f != m) != l)
				{
					putchar(f);
					putchar(m);
					putchar(l);
					if (f == 55 && m == 56)
					continue;
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
