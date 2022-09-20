#include <stdio.h>
#include "main.h"

/**
 *_put - to print a string
 *@str: string to print
 *Return: returns no error
 */

void _puts(char *str)
{
	int i = 0;
	
	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(5)
