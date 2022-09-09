#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: Prints combos of 3 digits numbers
 * Return: 0
 */
int main(void)
{
	int d1 = 0;
	int d2;
	int d3;

	while (d1 < 10)
	{
		d2 = 0;
		while (d2 < 10)
		{
			d3 = 0;
			while (d3 < 10)
			{
				if (d1 != d2 && d2 != d3 && d1 < d2 && d2 < d3)
				{
					putchar(d1 + 48);
					putchar(d2 + 48);
					putchar(d3 + 48);

					if (d1 + d2 + d3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				d3++;
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
