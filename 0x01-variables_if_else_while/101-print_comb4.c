#include <stdio.h>
/**
* main - This program prints all possible different combinations of three digit
*
* Return: Always 0.
*/
int main(void)
{
int a;
int b;
int c;
for (a = 48; a <= 57; a++)
{
for (b = a++; b <= 57; c++)
{
for (c = b++; c <= 57; c++)
{
putchar(a);
putchar(b);
putchar(c);
if ((a == 23) && (b == a++) && (c == b++)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
