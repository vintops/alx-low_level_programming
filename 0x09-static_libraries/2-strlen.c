#include "main.h"
/**
 * _strlen - Program that returns the length of a string.
 * @s: string to be returned
 * Return: length
 */
int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
