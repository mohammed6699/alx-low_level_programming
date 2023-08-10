# include <stdio.h>
/**
 *  main - print decimal
 *
 * The basics of main function
 *
 * Return: always 0 (success)
 */
int main(void)
{
printf("size of int: %zu byte(s)\n", sizeof(int));
printf("size of char: %zu byte(s)\n", sizeof(char));
printf("size of long: %zu byte(s)\n", sizeof(long));
printf("size of long long int: %zu byte(s)", sizeof(long long int));
printf("size of float: %zu byte(s)", sizeof(float));
return (0);
}
