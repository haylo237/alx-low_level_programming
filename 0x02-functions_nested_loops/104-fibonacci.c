#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Success is 0
 */
int main(void)
{
	long int f = 1;
	long int s = 2;
	long int n;
	int i;

	printf("%li, ", f);
	printf("%li, ", s);

	for (i = 2 ; i < 98 ; i++)
	{
		n = f + s;
		printf("%li", n);
		if (i != 97)
			printf(", ");
		f = s;
		s = n;
	}
	printf("\n");
}
