#include "main.h"

/**
 *_islower - check for lowercase
*@c: character to be checked
*
* Return: 1 if lowercase or 0 otherwise
*/

int _islower(int c)
{
	if ((c >= 97) && (c =< 122))
	{
		return (1);
	}

	return (0);
}
