#include <stdio.h>
/**
 * main - entry point
 * Description: prints possible combo od single digit numbers
 * Return: 0
 */
int main(void)
{
	int k = 0;

	while (k < 10)
	{
		putchar(48 + k);
		if (k != 9)
		{
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar('\n');

	return (0);
}
