#include "main.h"

/**
 * _isalpha - function that checks for alphabetical character
 * @c: needs to be printed
 * Return: 1 if c is a letter, lowercase or uppercase or 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
