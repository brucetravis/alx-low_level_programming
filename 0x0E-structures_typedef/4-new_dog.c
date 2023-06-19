#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner oof the dog
 *
 * Return:  pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
size_t nameLen, ownerLen;

if (name == NULL || owner == NULL)
return (NULL);

newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);

nameLen = strlen(name);
ownerLen = strlen(owner);

newDog->name = malloc((nameLen + 1) * sizeof(char));
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}

newDog->owner = malloc((ownerLen + 1) * sizeof(char));
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}

strcpy(newDog->name, name);
strcpy(newDog->owner, owner);
newDog->age = age;

return (newDog);
}
