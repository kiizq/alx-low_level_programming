#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
int h0;
int h1;
int m0;
int m1;

for (h0 = 0; h0 <= 2; h0++)
{
for (h1 = 0; h1 <= 9; h1++)
{
for (m0 = 0; m0 <= 5; m0++)
{
for (m1 = 0; m1 <= 9; m1++)
{
if ((h0 <= 2) && (h1 <= 3))
{
putchar('0' + h0);
putchar('0' + h1);
putchar(':');
putchar('0' + m0);
putchar('0' + m1);
putchar('\n');
}
}
}
}
}
return (0);
}
