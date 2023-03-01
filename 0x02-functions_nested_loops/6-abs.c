#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @t : will display the abs value
 * Return: a
 */

int _abs(int t)
{
	if (t < 0)
		t = -(t);
	else if (t >= 0)
		t = t;
	return (t);
}
