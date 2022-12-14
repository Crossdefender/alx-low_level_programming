#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: the character to be checked
 * Return: 1 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
