#include <stdio.h>
/**
*main - This program prints all possible different combinations of two digits.
*
*Return: Always 0.
*/
int main(void)
{
/* declaring my variables */
int x, y;
for (x = 48; x <= 57; x++)
{
for (y = 49; y <= 57; y++)
{
if (y > x)
{
putchar(x);
putchar(y);
if (x != 56 || y != 57)
{
purchar(',');
putchar('');
}
}
}
}
purchar('\n');
return (0);
}
