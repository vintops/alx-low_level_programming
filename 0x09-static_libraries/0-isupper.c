#include "main.h"
/**
  * _isupper - This Checks uppercase letters.
  * @c: character to check
  *
  * Return: If there is uppercase return 1, else return 0
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
