#include "main.h"
#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always Zero
 */
int main(int argc, char argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
