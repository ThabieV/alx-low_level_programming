#include "main.h"

/**
 * print_alphabet_x10 - this function will print the alphabets ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int t;
	char v;

	for (t = 1 ; t <= 10 ; t++)
	{
		for (v = 'a' ; v <= 'z' ; v++)
			_putchar(v);
		_putchar('\n');
	}
}
