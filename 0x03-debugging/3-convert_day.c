#include "main.h"
/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/
int convert_day(int month, int day)
{
switch (month)
{
case 1:
day = 30 + day;
break;
case 2:
day = 60 + day;
break;
case 3:
day = 90 + day;
break;
case 4:
day = 120 + day;
break;
case 5:
day = 150 + day;
break;
case 6:
day = 180 + day;
break;
case 7:
day = 210 + day;
break;
case 8:
day = 240 + day;
break;
case 9:
day = 270 + day;
break;
case 10:
day = 300 + day;
break;
case 11:
day = 330 + day;
break;
case 12:
day = 360 + day;
default:
break;
}
return (day);
}
