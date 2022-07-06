#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of a person
 * @f: returns nothing
 */

void print_name(char *name, void (*f)(char *nom))
{
	if (name != NULL && f != NULL)
		f(name);
}
