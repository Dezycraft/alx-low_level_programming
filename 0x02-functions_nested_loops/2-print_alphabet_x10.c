#include "main.h"

/**
 * print_alphabet_x10 - Prinys the alphabet in lowercase 10 times
 *
 * Return: Always success
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';

		while (letter <= 'Z')
		{
			_putchar(letter);
			letter++;
		}
	}

	_putchar('\n');
}
