/**
 *int _isalpha
 *
 *@c: is the character to be checked
 *
 * Return: 1 for alphanetic and 0 for nothing
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
