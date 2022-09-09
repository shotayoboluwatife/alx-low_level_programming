#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: Prints alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char m = 'z';

	while (m >= 'a')
	{
		putchar(m);
		m--;
	}
	putchar('\n');

	return (0);
}
