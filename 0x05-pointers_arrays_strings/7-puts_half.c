#include "main.h"

/**
 * puts_half - prints every other character of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, x, y;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)

	{
		for (y = len / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	} else if (len % 2)
	{
		for (x = (len - 1) / 2; x < len - 1; x++)
		{
			_putchar(str[x + 1]);
		}
	}
	_putchar('\n');
}
