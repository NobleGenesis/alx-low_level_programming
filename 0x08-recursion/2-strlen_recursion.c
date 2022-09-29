#include "main.h"

/**
 * _strlen_recursion - it calculates the lenghth of a string recursively
 * and returns the length
 * @s: pointer to string params
 * return: recursion
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
