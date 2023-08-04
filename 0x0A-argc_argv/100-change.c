#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum no of coins to make change
 * @argc: args count
 * @argv: array of args
 * Return: the change for an amount
 */
int main(int argc, char *argv[])
{
	int x, num_coins, min_coins, coins[] = {25, 10, 5, 2, 1};
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = sizeof(coins) / sizeof(coins[0]);
	min_coins = 0;

	for (x = 0; x < num_coins; x++)
	{
		while (cents >= coins[x])
		{
			cents -= coins[x];
			min_coins++;
		}
	}
	printf("%d\n", min_coins);
	return (0);
}
