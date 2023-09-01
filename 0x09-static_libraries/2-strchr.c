# include "main.h"
# include <string.h>
/**
 * *_strchr - function that locates a character in a string.
 * i: input
 * s: string
 * c: charchter
 * length: string length
 * Return
 */
char *_strchr(char *s, char c)
{
        int i;
        int length = strlen(s);

        for (i = 0; i < length; i++)
        {
                if (s[i] == c)
                {
                        return (&s[i]);
                }
        }
        return (0);
}
