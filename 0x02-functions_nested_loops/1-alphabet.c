#include "main.h"

/**
 * print_alphabet - wirte the the lower-case alphabet on a line.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
