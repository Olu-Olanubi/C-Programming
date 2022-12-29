#include "structs.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*
	Name: 
	Copyright: 
	Author: 
	Date: 05/12/22 17:55
	Description: 
*/

//To be looked at later
void star_line(char *str)
{
	//Get the length of the string
	int len = strlen(str);
	/*while (*(str + len) != '\0')
	{
		len++;
	}
	*/
	//printf("%d\n", len);
	int trigger = 60-(len/2);
	int i = 0;
	for(i = 0; i < trigger; i++)
		printf("*");
	printf("%s", str);
	for(i = 0; i < trigger; i++)
		printf("*");	

	printf("\n");
}

void dash_lane()
{
	int i = 0;
	while (i < 120)
	{
		printf("-");
		i++;
	}
	printf("\n");
}

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

Options QUAL_OPTIONS[] = {{"A", "Engineering, Science & Technology"},
						  {"B", "Finance & Accounting"},
						  {"C", "Sales, Marketing and Commerce"},
						  {"D", "Arts and Humanities"}};
						  
Options CERT_OPTIONS[] = {{"A", "Engineering"},
						   {"B", "Project Management"},
						   {"C", "Operations Management"},
						   {"D", "HSE"},
						   {"E", "Finance"},
						   {"F", "Business Analysis"},
						   {"G", "Sales"},
						   {"H", "Marketing"},
						   {"I", "Customer Relations"},
						   {"J", "Business Management"},
						   {"K", "Accounting"},
						   {"L", "Supply Chain"},
						   {"M", "Human Resources"},
						   {"N", "Media & Public Communications"}};
						   
Score SKILL_OPTIONS[] = {{1, "VERY LOW"},
						 {2, "LOW"},
						 {3, "HIGH"},
						 {4, "VERY HIGH"},
						 {5, "EXCELLENT"}};

char* DEPT[] = {"TECHNICAL", "COMMERCIAL", "FINANCE", "HUMAN RESOURCES", "No suitable"};
char* ROLES[] = {"MANAGER", "SUPERVISOR","OFFICER", "No suitable role"};

void to_uppercase(char* str) {
  int len = strlen(str);
  char s[len];
  for (int i = 0; i < len; i++) {
    s[i] = toupper(str[i]);
  }
  printf("%s\n", s);
}