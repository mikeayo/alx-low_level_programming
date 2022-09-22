#include "main.h"

/**
 * _strncat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @dest.
 * @n: copy up to poistion 'n'
 * Return: a pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
