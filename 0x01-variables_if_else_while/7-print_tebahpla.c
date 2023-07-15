#include<stdio.h>
/**
 * main - entry point
 * Description: prints alpha in reverse
 * Return: Success has a value of 0
 */
int main(void)
	{
		char ch = 'z';

		while (ch >= 'a')
		{
			putchar(ch);
			ch--;
		}
		putchar('\n');
		return (0);
	}
