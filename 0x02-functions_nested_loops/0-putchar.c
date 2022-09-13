#include <main.h>
/**
* main - This program prints _putchar, followed by a new lineprogram.
*
* Return - Always 0.
*/
int main(void)
{
char church[5] = "_putchar";
int i;
for (i = 0; i < 3; i++)
{
_putchar(church[i]);
}
_putchar(5);
return (0);
}
