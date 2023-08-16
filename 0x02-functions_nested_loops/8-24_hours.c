# include "main.h"
# include <stdio.h>
/**
 *Print_minutes_in _day
 *
 *@i,hours,minutes: the int
 *
 *Return: 0 (success)
 */
void jack_bauer(void)
{
	int i;
	int hours;
	int minutes;
	for (i = 0; i < 1440; i++)

	{
		hours = i / 60;
		minutes = i % 60;
		printf ("%02d:%02d\n", hours, minutes);
}
}
