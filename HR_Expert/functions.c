#include "main.h"
#include <string.h>
/*
	Name: 
	Copyright: 
	Author: 
	Date: 05/12/22 17:55
	Description: 
*/
/* To be looked at later
void star_loop(char *str)
{
	//Get the length of the string
	int len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	printf("%d\n", len);
	int trigger = len/2;
	int lower = 50 - trigger;
	int upper = 50 + trigger;
	int i = 0;
	int j;
	while (i < 100)
	{
		if (i >= lower)
		{
			while (i <= upper)
			{
				for (j = 0; *(str + j) != '\0'; j++)
				{
					printf("%s", *(str + j));
				}
				i += j;	
			}
		}
		printf("*");
		i++;
	}
	printf("\n");
}
*/

void star_loop()
{
	int i = 0;
	while (i < 100)
	{
		printf("*");
		i++;
	}
	printf("\n");
}

void dash_lane()
{
	int i = 0;
	while (i < 100)
	{
		printf("-");
		i++;
	}
	printf("\n");
}
