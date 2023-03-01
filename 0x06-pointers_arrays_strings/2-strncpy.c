#include<stdio.h>
#include<string.h>

/**
 * main - Entry point
 * __strncpy - Copying a string
 * Description: _strncpy function that copies a string
 * @parameter: character(*dest, *src) int(n)
 *
 * Return: Always 0 (Success)
 */

int main(void)

char *_strncpy(char *dest, char *src, int n);
{
int n;

char *src[] = "My string to copy!";
char *dest[50];

strcpy(*dest, *src);
printf("*dest:%s\n", *dest);

return (0);
}
