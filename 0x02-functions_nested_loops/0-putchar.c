#include "main.h"
/**
 * main - entry point
 * Description: Program that prints _putchar
 * Return: 0
 */
int main(void)
{
 /* storing the word to print as an array*/
	char word_array[] = "_putchar";
	int c;
	/* 8 is used cause of index starts from 0*/
	/* so each letter would be printed 1by1*/
	for (c = 0; c < 8; c++)
	{
		_putchar(word_array[c]);
	}
	_putchar('\n');
	return (0);
}
