#include "main.h"
/**
 * create_array - array printing a string
 * @size: no of elements array
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	/* Define values with Malloc */
	buffer = (char *) malloc(size *size of (c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;

		while (position < size) /* while for array*/
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}
