#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to check
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * palindrome_check - check for palindrome
 * @left: left hand index
 * @right: right hand index
 * @s: string of characters
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int palindrome_check(int left, int right, char *s)
{
	if (left >= right)
		return (1);
	else if (s[left] != s[right])
		return (0);
	else
		return (palindrome_check(left + 1, right - 1, s));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string of characters to be checked
 *
 * Return: same palindrome check
 */

int is_palindrome(char *s)
{
	int k;

	k = _strlen(s) - 1;
	return (palindrome_check(0, k, s));
}
