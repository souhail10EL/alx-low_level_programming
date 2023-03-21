#include <stdio.h>
/**
 * main - Entry point
 * Description: 'a to z upper and lower'
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int nu = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 90)
	{
		putchar(nu);
		nu++;
	}
	putchar('\n');
	return (0);
}
