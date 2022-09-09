#include <stdio.h>
/**
 * main - main funcrtion/entry point
 * Description: Printts all single digit numbers of base 10 starting from 0 without using chat datatype
 * Return: 0
 */
int main(void)
{
	int k = 0;

	while (k < 9)
	{
		/*converting to ASCII representation*/
		putchar(k + '0');
		k++;
	}
	putchar('\n');

	return (0);
}
