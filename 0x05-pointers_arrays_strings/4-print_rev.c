#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int p, q, len;

	p = 0;

	while (s[p] != '\0')
	{
		p++;
	}

	len = p;

	for (q = len - 1; q >= 0; q--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
