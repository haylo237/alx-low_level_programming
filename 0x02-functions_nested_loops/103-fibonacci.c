#include <stdio.h>
/**
 * main - start of the execution
 * Return: 0 is Success
 */
int main(void)
{
	long int f = 1;
	long int s = 2;
	long int sum = 0;
	long int n;
	int l = 4000000;
	int i;

	while (f <= l)
	{
		if (f % 2 == 0)
		{
			sum += f;
		}
		n = f;
		f = s;
		s += n;
	}
	printf("%li\n", sum);
	return (0);
}
