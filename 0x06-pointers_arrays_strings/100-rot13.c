#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int j, k;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; x[k] != '\0'; k++)
		{
			if (s[j] == x[k])
			{
				s[j] = y[k];
				break;
			}
		}
	}

	return (s);
}
