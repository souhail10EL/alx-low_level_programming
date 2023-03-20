#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'last digit of n var'
 * Return: always 0
 */
int main(void)
{
	int n;
	int ag;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ag = n % 10;
	if (ag > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ag);
	}
	else if (ag == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ag);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ag);
	}
	return (0);
}
