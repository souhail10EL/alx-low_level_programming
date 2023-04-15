#include "main.h"
/**
 * main - function in c
 * @argc: argument
 * @argv: string
 * Return: 0 if success
 */
int main(int argc, const char *argv[])
{
	int n1;
	int n2;
	int res;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		res = n1 * n2;
		printf("%d\n", res);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
