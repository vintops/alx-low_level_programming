#include "main.h"
#include <stdio.h>

void init_dog(stuct dog *d,char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age,char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest,char *src);
int _strlen(char *s);

#endif
