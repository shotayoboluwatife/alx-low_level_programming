#include<stdio.h>
/**
 * main - Entry Point
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int first_digit = 0;
	int secon_digit;

	while (first_digit < 100)
	{
		secon_digit = first_digit;
		while (secon_digit < 100)
		{
			if (secon_digit != first_digit)
			{
				putchar((first_digit / 10) + 48);
				putchar((first_digit % 10) + 48);
				putchar(' ');
				putchar((secon_digit / 10) + 48);
				putchar((secon_digit % 10) + 48);

				if (first_digit != 98 || secon_digit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++secon_digit;
		}
		++first_digit;
	}
	putchar('\n');

	return (0);
}
