#include "main.h"
/**
 * main - prints the string Holberton from a character array
 *
 * Return: 0 on Success
 */
int main(void)
{
	char c[] =  "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
