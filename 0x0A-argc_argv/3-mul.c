#include "main.h"
/**
 * main - function in c
 * @argc: argument
 * @argv: string
 * Return: 0 if success
 */
int main(int argc, const char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
