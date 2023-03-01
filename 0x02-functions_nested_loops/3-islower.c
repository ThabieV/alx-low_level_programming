#include "main.h"
/**
 * _islower - function that checks for lowercase characters
 * @c: result needs to be printed
 * Return: 1 if c is lowercase, else 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
