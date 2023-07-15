#include <stdio.h>
/**
 * main - start of the program
 * Description: all possible combinations
 * Return: End, 0 meaning success
 */
int main(void)
{
	int f, l;

	for (f = 0 ; f <= 98; f++)
	{
		for (l = f + 1 ; l <= 99 ; l++)
		{
			putchar((f / 10) + 48);
			putchar((f % 10) + 48);
			putchar(32);
			putchar((l / 10) + 48);
			putchar((l % 10) + 48);
			if (f == 98 && l == 99)
			continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
