#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int o;

	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
