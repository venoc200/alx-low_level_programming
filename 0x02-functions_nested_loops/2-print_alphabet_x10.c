#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times
 */

void print_alphabet_x10(void)
{
	char na;

	int i;

	i = 0;
	while (i < 10)
	{
		na = 'a';
		while (na <= 'z')
		{
			_putchar(na);
			na++;
		}
		_putchar('\n');
		i++;
	}
}
