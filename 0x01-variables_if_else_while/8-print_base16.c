#include<stdio.h>
/**
 * main - The start of the program
 * Description: print first 15 hex num
 * Return: Returns 0 on Success
 */
int main(void)
{
	char i = 48;
	char c = 65;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
	}
	for (c = 65 ; c <= 70 ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
