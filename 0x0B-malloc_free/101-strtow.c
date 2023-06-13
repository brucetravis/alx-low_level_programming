#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_words(char *str)
{
int count = 0, i = 0;

while (str[i] != '\0')
{
if (str[i] != ' ')
{
count++;
while (str[i] != ' ' && str[i] != '\0')
i++;
}
else
i++;
}

return (count);
}

char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);

int i, j, k, len, word_count;
char **words;

len = 0;
while (str[len] != '\0')
len++;

word_count = count_words(str);

words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return (NULL);

i = 0;
k = 0;
while (str[i] != '\0')
{
if (str[i] != ' ')
{
j = i;
while (str[j] != ' ' && str[j] != '\0')
j++;

words[k] = malloc(sizeof(char) * (j - i + 1));
if (words[k] == NULL)
{
for (i = 0; i < k; i++)
free(words[i]);
free(words);
return (NULL);
}

for (; i < j; i++)
{
words[k][i - k] = str[i];
words[k][i - k] = '\0';
k++;
}
else
i++;
}

words[k] = NULL;
return (words);
}
