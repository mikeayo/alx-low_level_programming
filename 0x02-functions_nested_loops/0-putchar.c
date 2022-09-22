#include "main.h"

/**
 * main - Print "_putchar" followed by a new line without standard libraries.
 *
 * Return: 0
 */
int main(void)
{
	char *c = "_putchar\n";

	while (*c)
	{
		_putchar(*c);
		c++;
	}

	return (0);
}
