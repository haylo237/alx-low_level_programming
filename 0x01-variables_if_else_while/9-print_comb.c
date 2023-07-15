#include <stdio.h>
/**
 * main - start of the program
 * Description: counting
 * Return: 0 means Success
 */
int main(void)
{
	char i = 49;

	for (i = 49 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
		}
		putchar(32);
	}
	putchar(32);
	return (0);
}
