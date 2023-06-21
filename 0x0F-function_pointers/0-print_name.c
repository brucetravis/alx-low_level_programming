#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -  prints a name.
 * @name: name of the person
 * @f: pointer to the function to br applied to the name.
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
