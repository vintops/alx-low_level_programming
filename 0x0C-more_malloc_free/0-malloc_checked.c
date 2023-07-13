#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - Allocates memory
* @b: The size to allocate
*
* Return: Nothing
*/

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);

if (ptr == NULL)
{
fprintf(stderr, "Memory allocation failed. Exiting with status 98.\n");
exit(98);
}
return (ptr);
}
