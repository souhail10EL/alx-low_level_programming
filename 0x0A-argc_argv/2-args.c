#include "main.h"
/**
 * main - function to print
 * @argc: argument
 * @argv: array of string
 * Return: 0 if success
 */
int main(int argc, const char *argv[])
{
	int q;

	for (q = 0; q < argc; q++)
	{
		printf("%s\n", argv[q]);
	}
	return (0);
}
