#include "stdio.h"
/**
*main - Entry point
* 
* Return - Always 0.
*/
int main(void)
{
char farm[10] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
putchar(farm[i]);
}
putchar(10);
return (0);
}
