#include "main.h"
/**
 * is_palindrome  - checks if a string is a palindrome
 * @s: String
 * Return: 1 if s is a palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
