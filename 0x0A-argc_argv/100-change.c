#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of string arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int coins, i, amt;
	int value[5] = {25, 10, 5, 2, 1};

	coins = 0;
	amt = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (amt <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (value[i] <= amt)
			{
				coins += (amt / value[i]);
				amt -= (amt / value[i]) * value[i];
				if (amt == 0)
				{
					printf("%d\n", coins);
					break;
				}
			}
		}
	}
	return (0);
}

