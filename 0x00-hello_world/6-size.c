#include <stdio.h>
/**
 * main - Entry of the program
 * Description: Print sizes of datatypes
 * Return: The value 1  mean success
 */
int main(void)
{
	printf("Size of a char: %u byte(s)", sizeof(char));
	printf("\nSize of an int: %u byte(s)", sizeof(int));
	printf("\nSize of a long int: %u byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %u byte(s)", sizeof(long long int));
	printf("\nSize of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
