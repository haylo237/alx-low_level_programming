#include <stdio.h>
/**
 * main - Start point of the program
 * Return: 0 means Success
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0 ; i <= 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
