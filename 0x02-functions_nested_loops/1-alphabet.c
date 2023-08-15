# include <stdio.h>
/**
 * main - check code
 *
 * Input - print_alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar (ch);

}
int main(void)
{
print_alphabet();
return (0);
}
