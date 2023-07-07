#include "main.h"
/**
 * _isalpha - Program checks for alphabetical character
 * @c: the character to be checked
 * Return: 1 if char is a letter and return 0 if it is not a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
