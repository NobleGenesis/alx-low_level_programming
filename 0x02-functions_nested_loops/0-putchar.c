#include "main.h"

/**
 * main - prints the string Putchar from a character array
 *
 * Return: 0 on Success
 */

int main(void)
{
	char c[] =  "_Putchar";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
