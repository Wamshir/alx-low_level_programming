#include "main.h"
#include <stdio.h>
/**
 * main - Prints Arguments
 * arg - Prints all the arguments
 * @argc: Argument Count
 * @argv: Argument vector
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
