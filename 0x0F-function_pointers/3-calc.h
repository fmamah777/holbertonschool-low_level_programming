#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - main function
 * @s: character
 * Return: pointer
 */

int main(int argc, char **argv)
{
	int x, y, (*func)(int, int);

	if (argc != 4 || argv == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	func = (*get_op_func)(argv[2]);

	if (func == NULL || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(x,y));
	return (0);
}
