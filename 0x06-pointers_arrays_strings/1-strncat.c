#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	i = 0;
	k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] = '\0';

	return (dest);
}
