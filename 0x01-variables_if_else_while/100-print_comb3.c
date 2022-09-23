#include <stdio.h>

/**
 * main - Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 *
 * Return: 0
 */
int main(void)
{
	int i, x, y;

	i = 0;

	while (i < 100)
	{
		x = i % 10;
		y = i / 10;

		if (y < x)
		{
			putchar(y + '0');
			putchar(x + '0');

			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

		i++;
	}

	putchar('\n');
	return (0);
}
