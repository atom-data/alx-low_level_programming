#include "main.h"

/**
 * _print_rev_recursion - write string in reverse
 * @s: string of characters
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
