#include "main.h"
/**
 * alloc_grid - function returns pointer to 2 dimensional ar
 * @width: parameter
 * @height: second parameter
 * Return: null
 */
int **alloc_grid(int width, int height)
{
	int **bazz = (int **)malloc(height * sizeof(int *));
	int q, w;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	if (bazz == NULL)
	{
	return (NULL);
	}

	for (q = 0; q < height; q++)
	{
	bazz[q] = (int *)calloc(width, sizeof(int));
	if (bazz[q] == NULL)
	{

	for (w = 0; w < q; w++)
	{
	free(bazz[w]);
	}
	free(bazz);
	return (NULL);
	}
	}

	return (bazz);
}
