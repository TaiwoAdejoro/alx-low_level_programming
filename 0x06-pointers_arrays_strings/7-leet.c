#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int j, k;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (j = 0; s[i] != '\0'; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[j] == a[k])
			{
				s[j] = b[k];
			}
		}
	}

	return (s);
}
