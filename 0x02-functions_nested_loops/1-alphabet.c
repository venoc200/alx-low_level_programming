#include "main.h"

/**
 * print_alphabet  - A function that prints the alphabets in lower case
 * Return: Always 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}