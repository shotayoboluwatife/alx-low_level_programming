#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point
 * Description: print possible combos of 2 digits numbers
 * Return: 0
 */
int main(void)
{
	int d1 = 0;
	int d2;

	while (d1 < 10)
	{
		d2 = 0;
		while (d2 < 10)
		{
			if (d1 != d2 && d1 < d2)
			{
				putchar(d1 + 48);
				putchar(d2 + 48);

				if (d1 + d2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
