#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - The entry of the program
 * Description: 'get the last digit of a number'
 * Return: When 0, means success
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastd = n % 10;
	if (n > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (n == 0)
	{
		printf("The last digit of %d is %d and is 0", n, lastd);
	}
	else if (n < 6)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0", n, lastd);
	}
	return (0);
}
