#include "main.h"

/**
 * leet - encodes a string into code 1337
 * @n: input
 * Return: The value of n
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEo0tTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
