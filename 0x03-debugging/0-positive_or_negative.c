#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main determines if number is pos, 0, or neg.
*
* %d: points to the number
*/
void positive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
}
