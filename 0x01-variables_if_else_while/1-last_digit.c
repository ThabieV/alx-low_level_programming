#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - function
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	t = n % 10;
	if (t > 5)
		printf("Last digit of %d is %d and is greater than 5", n, t);
	else if (t == 0)
		printf("Last digit of %d is %d is 0", 1, t);
	else if (t < 6 && t != 0)
		printf("Last digit of %d is %d is less than 6 and not 0", n, t);
	printf("\n");

	return (0);
}
