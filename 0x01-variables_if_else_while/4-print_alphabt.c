#include <stdio.h>
/**
 * main - main block
 * Description: Prints alphabets in lowercase except q and e
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
