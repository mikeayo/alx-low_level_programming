#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_rev - print a string in reverse
 *@s: string to reverse
 *Return: nothing
*/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
			putchar(10);
}

