#include <stdio.h>
/**
 * main- entry point
 * Description: prints base16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	for (x = 0; x < 10; x++)
	{
		/*converting to ascii rep*/
		putchar(x + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
