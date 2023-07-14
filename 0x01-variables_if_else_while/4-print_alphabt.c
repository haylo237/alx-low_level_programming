#include <stdio.h>
/**
 * main - Entry of the program
 * Description: print letters except q and e
 * Return: 0 is Succes
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
