#include <stdio.h>
/**
 * main - entry point
 * Description: Program that prints _putchar 
 * Return: 0
 */
int main(void)
{
	char *s = "hello world\n";
	while (*s)
	{

		putchar(*s++);
	}

	return (0);
}
