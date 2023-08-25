# include "main.h"
# include <string.h>
/**
 * _strcmp - function to compare string
 * s1, s2: compared strings
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
