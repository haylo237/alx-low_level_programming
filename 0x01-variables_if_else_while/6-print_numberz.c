#include <stdio.h>
/**
 * main - entry of the software
 * Description: prints single digit numbers of base 10
 * Return: Success is 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
