#include <stdio.h>
/**
 * main - Entry of the program
 * Description: print letters except q and e
 * Return: 0 is Succes
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch = ch + 1;
			continue;
		}
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
