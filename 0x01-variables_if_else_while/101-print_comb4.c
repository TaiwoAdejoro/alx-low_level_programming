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
for (b = a + 1; b <= 57; b++)
{
for (c = b + 1; c <= 57; c++)
{
putchar(a);
putchar(b);
putchar(c);
if ((a == 23) && (b == a+1) && (c == b+1))
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
