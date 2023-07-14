#include <stdio.h>
/**
 * main - Entry of the program
 * Description: to in display letters
 * Return: 0 is Succes
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
