#include "main.h"
/**
 * main - function simple in c
 * @argc: argument
 * @argv: arg array
 * Return: 1 if error 0 if success
 */
int main(int argc, const char *argv[])
{
	int sum = 0;
	int q;
	int w;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (q = 1; q < argc; q++)
	{
		for (w = 0; argv[q][w]; w++)
		{
			if (!isdigit(argv[q][w]))
			{
				printf("Error\n");
					return (1);
			}
		}
		sum += atoi(argv[q]);
	}
	printf("%d\n", sum);
	return (0);
}

