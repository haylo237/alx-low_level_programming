#include <stdio.h>
/**
 * main - entry of teh program
 * Description: Prints 50 Fibonacci numbers
 * Return: 0 is Success
 */
int main(void)
{
	long int f = 1;
	long int s, f, i;

	s = f + 1;

	printf("%li, ", f);
	printf("%li, ", s);

	for (i = 3 ; i < 50 ; i++)
	{
		n = f + s;
		printf("%li, ", n);
		f = s;
		s = n;
	}
	return (0);
}
