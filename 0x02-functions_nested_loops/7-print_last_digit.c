#include "main.h"

/**
 *print_last_digit - function that prints the last digit of a number.
 *@t: included in the parameter.
 *Return: v
 */

int print_last_digit(int t)
{
	int v;

	v = t % 10;
	if (t < 0)
		v = -v;
	_putchar(v + '0');
	return (v);
}
