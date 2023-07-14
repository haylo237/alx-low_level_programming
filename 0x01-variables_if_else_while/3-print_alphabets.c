#include <stdio.h>
/**
 * main - entry point of the program
 * Description: Print alphabets
 * Return: ) is Success
 */

int main(void)
{
	char ch;
	char CH;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A' ; CH <= 'Z' ; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
