#include "function_pointers.h"

/**
 * array_iterator - execute function on each element
 * @array: address of the base element
 * @size: size of the array
 * @action: function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int number))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < (int)size; i++)
			action(*(array + i));
	}
}
