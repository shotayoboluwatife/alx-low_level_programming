#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		if (k != 'e' && k != 'q')
		{
			putchar(k);
		}
		k++;
	}

	putchar('\n');
	return (0);
}
