#include <unistd.h>

/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: On success 1
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);


	}

		_putchar('\n');
}

