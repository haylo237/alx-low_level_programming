#include <stdio.h>
/**
 * main - entry of teh program
 * Description: Prints 50 Fibonacci numbers
 * Return: 0 is Success
 */
int main(void)
{
	long int f = 1;
	long int s, n, i;

	s = f + 1;

	printf("%li, ", f);
	printf("%li, ", s);

	for (i = 2 ; i < 50 ; i++)
	{
		n = f + s;
		printf("%li", n);
		if (i != 49);
			printf(", ");
		f = s;
		s = n;
	}
	printf("\n");
	return (0);
}
