#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - This prints the minimum number of coins to
 * make change for an amount of money
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, a, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (num >= coins[a])
		{
			result++;
			num -= coins[a];
		}
	}

	printf("%d\n", result);
	return (0);
}
