#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 * Return: 0 means success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
