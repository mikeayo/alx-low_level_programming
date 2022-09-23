#include <stdio.h>

/**
 * main - Print all possible different combinations of 3 digits.
 * Numbers must be separated by commas and a space.
 *
 * Return: 0
 */
int main(void)
{
	int i, x, y, z;

	for (i = 0; i < 1000; i++)
	{
		x = i / 100; /* hundreds */
		y = (i / 10) % 10; /* tens */
		z = i % 10; /* singles */

		if (x < y && y < z)
		{
			putchar(x + '0');
			putchar(y + '0');
			putchar(z + '0');

			if (i < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
