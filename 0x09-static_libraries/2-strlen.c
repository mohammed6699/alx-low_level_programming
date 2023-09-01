# include "main.h"
/**
 * _strlen - function to calculate
 * The size of string
 * *s is the pointer
 * @  len: The length of string
 * Return : len
 */
int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
{
        len++;
}
return (len);
}
