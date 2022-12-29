#include "structs.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/*
	Name: 
	Copyright: 
	Author: 
	Date: 05/12/22 17:50
	Description: 
*/
//Method to display introductory message
void init()
{
star_line(" INTRO ");
//printf("************ INTRO ************\n");
printf("\nHR-Expert is a Knowledge-Based Expert System that allocates human resources in an organization\n");
printf("to suitable departments and assigns suitable job roles within the defined framework of the organization\n");
printf("It ensures that only the most suitable and qualified candidates are assigned to the different departments within the organization\n\n");
star_line("*");
printf("Press ENTER key to start the program.\n");
getchar();
printf("STARTING...........\n\n");
}

//Function to check the educational qualification
void checkEducation(char *name, char *qual)
{
	char ans_set[] = "ABCD";
	
	printf("\nDoes %s have academic qualifications in any of related fields? : \n\n", name);
	/*
	printf("A: Engineering, Science, Technology\n");
	printf("B: Commerce, Economics, Sales, Business Administration\n");
	printf("C: Finance, Procurement, Business Management\n");
	printf("D: Arts, Social Sciences, Law\n");
	printf("E: None\n\n");
	printf("Enter the applicable option (A, B, C, D, E): \n");
	*/
    
	//Display the options
	int i;
	for (i = 0; i < (sizeof(QUAL_OPTIONS)/sizeof(Options)); i++)
	{
		printf(" %s : ", QUAL_OPTIONS[i].key);
		printf("%s\n", QUAL_OPTIONS[i].val);
	}
	printf("\nEnter the most suitable option: ");
	//Receive the option entry from the user
	scanf("%s", qual);
	
	//Check if the entry is among the valid options
	char *ptr;
	ptr = strchr(ans_set, qual[0]);
	while (ptr == NULL)
	{
		printf("Enter only the applicable option (A, B, C, D): \n");
	    scanf("%s", qual);
	    ptr = strchr(ans_set, qual[0]);
	}
	
}
//Function to check additional qualifications
void checkCertification(char *name, char *cert)
{
	char ans_set[] = "ABCDEFGHIJKLMN";


	printf("\nDoes %s have professional experience or certiications in any of the related fields? : \n\n", name);
	int i;
	for (i = 0; i < (sizeof(CERT_OPTIONS)/sizeof(CERT_OPTIONS[0])); i++)
	{
		printf(" %s : ", CERT_OPTIONS[i].key);
		printf("%s\n", CERT_OPTIONS[i].val);
	}
	printf("\nEnter the most suitable option: ");
	scanf("%s", cert);
	
	
	char *ptr;
	ptr = strchr(ans_set, cert[0]);
	while (ptr == NULL)
	{
		printf("Enter only the applicable option: ");
	    scanf("%s", cert);
	    ptr = strchr(ans_set, cert[0]);
	}
}

//Function to check years of experience
int yearsOfExperience(char *name)
{
	int years = 0;
	printf("How many years of relevant work experience does %s have in this field? : ", name);
	scanf("%d", &years);
	return years;
}

//Function to check the skill level
int checkSkills(char *name)
{
    int others = 0;
    printf("How will you rate %s's skill level? : \n", name);
    /*
  printf("5 : VERY HIGH\n4 : HIGH\n3 : NORMAL\n2 : LOW\n1 : VERY LOW\n");
  printf("Enter the corresponding number between 1 and 5 : ");
  */
  	int i;
	for (i = 0; i < (sizeof(SKILL_OPTIONS)/sizeof(SKILL_OPTIONS[0])); i++)
	{
		printf(" %d : ", SKILL_OPTIONS[i].key);
		printf("%s\n", SKILL_OPTIONS[i].val);
	}
	printf("\nEnter the most suitable option: ");
    scanf("%d", &others);
	 while (!(others <= 5 && others >= 1))
	  {
	    printf("Enter only a corresponding option from 1 to 5 : ");
	    scanf("%d", &others); 
	    if ((others <= 5 && others >= 1))
	      break;
	  }
	  return others;
}

//Main function to execute program
int main(void)
{
    Employee employee; 
	Result res;
    float WAIT_TIME = 0.75;
	int i;
	
	init();
	sleep(WAIT_TIME);	

	printf("What is the candidate's name: ");
	scanf("%s", employee.name);
	sleep(WAIT_TIME);
	checkEducation(employee.name, employee.qual);
	sleep(WAIT_TIME);	
	dash_lane();
	checkCertification(employee.name, employee.cert);
	sleep(WAIT_TIME);	
	dash_lane();
	
	employee.years = yearsOfExperience(employee.name);
    sleep(WAIT_TIME);	
    dash_lane();
    employee.skills = checkSkills(employee.name);
    sleep(WAIT_TIME * 2);	


    //dash_lane();
	printf("\n\n");
	star_line(" RESULT ");
	//Print Qualification
	//printf("Educational background: %s\n", employee.qual);
	printf("Name:\t\t\t\t%s\n", employee.name);
	for (i = 0; i < (sizeof(QUAL_OPTIONS)/sizeof(QUAL_OPTIONS[0])); i++)
	{
		if(strcmp(QUAL_OPTIONS[i].key, employee.qual) == 0)
		{
			printf("Educational background:\t\t");
		    to_uppercase(QUAL_OPTIONS[i].val);
		}
	}

	//Print Advanced certification
	//printf("Professional Experience: %s\n", employee.cert);
	for (i = 0; i < (sizeof(CERT_OPTIONS)/sizeof(CERT_OPTIONS[0])); i++)
	{
		if(strcmp(CERT_OPTIONS[i].key, employee.cert) == 0)
		{
		    printf("Professional Experience:\t");
		    to_uppercase(CERT_OPTIONS[i].val);
		}
	}
	
	//Print Years of Experience
	printf("Years of Experience:\t\t%d\n", employee.years);
	

	//Print Skills level
    //printf("Soft Skills Level: %d\n", employee.skills);
	for (i = 0; i < (sizeof(SKILL_OPTIONS)/sizeof(SKILL_OPTIONS[0])); i++)
	{
		if(SKILL_OPTIONS[i].key == employee.skills)
		printf("Skills Level:\t\t\t%s\n ", SKILL_OPTIONS[i].val);
	}
    
	processInputs(&employee, &res);
	//strcpy(employee.name, res.dept);
    //printf("%s\n", res.dept);
	dash_lane();
	printf("Based on %s's profile...,\n\n", employee.name);
	printf("The best suited department for %s is:  %s Department\n\n", employee.name, res.dept);
	printf("Most suitable job role is: %s\n\n",res.role);
	star_line(" END ");
	system("pause");
	return 0;
	  
	  //employee = getInformation();
	  
}