#include <stdio.h>
/**
* main - printing lower case letters followed with a new line.
*
* Return: (0)
*/
int main(void)
{
int x;
char y;
for(x = 0; x <10; x++)
putchar (x % 10 + '0');
for(y = 'a'; y <= 'f'; y++)
putchar (y);
putchar ('\n');
return (0);
}
