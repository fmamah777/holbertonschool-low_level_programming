#include "main.h"
/**
 * times_table -  multiplies by 9
 *
 * return (0)
 */
void times_table(void)
{
int length;
int height;
int product;
for (length = 0; length <= 9; length++)
{
	putchar('0');
	for (height = 1; height <= 9; height++)
	{
	putchar('0');
	for (height = 1; height <= 9; height++)
{
	product = length * height;
	putchar(',');
	putchar(' ');
	if (product <= 9)
{
	putchar(' ');
}
	else
{
putchar((product / 10) + '0');
}
putchar((product % 10) + '0');
}
putchar('\n');
}
}
}
