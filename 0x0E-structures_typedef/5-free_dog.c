#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog
 * @d: pointer to the dog to free
 *
 * This function frees the memory allocated for a dog,
 * including its name and owner.
 */

void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}

free(d->name);
free(d->owner);
free(d);
}
