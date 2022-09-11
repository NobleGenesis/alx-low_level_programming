#include <stdio.h>

/**
 * main - Print a hexadecimal string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	
	for (c = '0'; <= '9'; c++)
	{
		putchar(c);
	}
	
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
		putchar('\n');	
	
	return (0);
}
