#include <stdio.h>
/**
* main - printing lower case letters followed with a new line.
*
* Return: (0)
*/
int main(void)
{
int x;
for (x = '0'; x < 10; x++)
{
putchar(x % 10 + '0');
if (x != 9)
{
putchar(44);
putchar(' ');
}
}
putchar ('\n');
return (0);
}
