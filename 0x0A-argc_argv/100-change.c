#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum amount of coins
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: If the number of arguments is not exactly one.
 * Otherwise Zero
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if (i(cents - 2) >= 0)
		{
			cents -= 0;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
