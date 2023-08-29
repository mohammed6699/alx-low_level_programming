# include "main.h"
# include <string.h>
# include <stdbool.h>
/**
 * *_strstr - function that locates a substring.
 * slen: length of string haystack
 * clen: length of string needle
 * end: difference between each length
 * i, j: inputs
 * Return:
 */
char *_strstr(char *haystack, char *needle)
{
int slen = strlen(haystack);
int clen = strlen(needle);
int end = slen - clen + 1;
int i, j;

for (i = 0; i < end; i++)
{
bool check_found = true;
for (j = 0; j < clen; j++)
{
if (needle[j] != haystack[i + j])
{
check_found = false;
break;
}
}
if (check_found)
return (&haystack[i]);
}
return (NULL);
}
