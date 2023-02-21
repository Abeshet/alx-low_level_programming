#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 time
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char letter;

	while (a <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		putchar('\n');
			a++
	}
}
