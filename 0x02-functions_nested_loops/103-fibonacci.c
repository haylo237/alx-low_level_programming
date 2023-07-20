#include <stdio.h>
/**
 * main - start of the execution
 * fibo_sum - Fibonacci sum
 * @l: limit of terms
 * Return: 0 is Success
 */
long int fibo_sum(long int l);

int main(void)
{
	int l = 4000000;
	long int total_sum = fibo_sum(l);

	printf("%li\n", total_sum);
	return (0);
}

long int fibo_sum(long int l)
{
	long int f = 1;
	long int s, n, sum;
	int i;

	s = f + 1;

	for (i = 0 ; n <= l ; i++)
	{
		n = s + f;
		if (n % 2 == 0)
		{
			sum += n;
		}
		s = f;
		f = s;
	}
	return (sum)
}
