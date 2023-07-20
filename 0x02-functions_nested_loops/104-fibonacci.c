#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Success is 0
 */
int main(void)
{
	unsigned int f = 1;
	unsigned int s = 2;
	unsigned int n;
	int i;

	printf("%u, ", f);
	printf("%u, ", s);

	for (i = 2 ; i < 98 ; i++)
	{
		n = f + s;
		printf("%u", n);
		if (i != 97)
			printf(", ");
		f = s;
		s = n;
	}
	printf("\n");
	return (0);
}
