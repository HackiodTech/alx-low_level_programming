#include "main.h"

/**
 * code by SundayGoodnews
 * print_alphabet - print all alphabet in lowercase to the stdout
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
