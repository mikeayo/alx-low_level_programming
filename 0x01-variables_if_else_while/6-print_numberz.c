#include <stdio.h>

/**
 * main - prints all  single digits number of base ten digits without char
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
