#include "main.h"
/**
 * _strcpy - Program that copies string that points to src.
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int t = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; t < k ; t++)
	{
		dest[t] = src[t];
	}
	dest[k] = '\0';
	return (dest);
}
