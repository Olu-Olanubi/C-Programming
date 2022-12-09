#include "main.h"
#include <string.h>
/*
	Name: 
	Copyright: 
	Author: 
	Date: 05/12/22 17:50
	Description: 
*/
void init()
{
star_loop();
printf("************ INTRO ************\n");
printf("HR-Expert is a Knowledge-Based Expert System that helps to allocate personnel on an ERP System\n");
printf("It ensures only the most suitable and qualified candidates are assigned to the different departments within the organization\n");
star_loop();
printf("\nPress ENTER key to start the program.");
getchar();
printf("Ready to Start...\n\n");
}

void checkEducation(char *name, char *qual)
{
	char ans_set[] = "ABCDE";

	printf("\nDoes %s have academic qualifications in any of related fields? : \n\n", name);
	printf("A: Engineering, Science, Technology\n");
	printf("B: Commerce, Economics, Sales, Business Administration\n");
	printf("C: Finance, Procurement, Business Management\n");
	printf("D: Arts, Social Sciences, Law\n");
	printf("E: None\n\n");
	printf("Enter the applicable option (A, B, C, D, E): \n");
	scanf("%s", qual);
	char *ptr;
	ptr = strchr(ans_set, qual[0]);
	while (ptr == NULL)
	{
		printf("Enter the applicable option (A, B, C, D, E): \n");
	    scanf("%s", qual);
	    ptr = strchr(ans_set, qual[0]);
	}
	
}
void checkCertification(char *name, char *cert)
{
	char ans_set[] = "ABCDEFGHIJKLM";

	printf("\nDoes %s have any advanced qualifications or professional certifications in any of the related fields? : \n\n", name);
	printf("A: Project Management\t");
	printf("B: Operations Management\n");
	printf("C: HSE\t\t\t");
	printf("D: Sales\n");
	printf("E: Marketing\t\t\t");
	printf("F: Customer Relations\n");
	printf("G: Audit\t\t\t");
	printf("H: Tax\n");
	printf("I: Procurement and Supply Chain Management\n");
	printf("J: Training and Development\t");
	printf("K: Business Administration\n");
	printf("L: Personnel Administration\t");
	printf("M: Law\n");
	printf("\nEnter the applicable option: ");
	scanf("%s", cert);
	
	char *ptr;
	ptr = strchr(ans_set, cert[0]);
	while (ptr == NULL)
	{
		printf("Enter the applicable option: ");
	    scanf("%s", cert);
	    ptr = strchr(ans_set, cert[0]);
	}
}

void hasWorkExperience(char *name, char *workExperience)
{
	char ans_set[] = "YN";
	printf("Does %s have relevant work experience relating to his/her educational/professional qualification? : \n", name);
	printf("\nEnter Y for yes or N for no: ");
	scanf("%s", workExperience);
	char *ptr;
	ptr = strchr(ans_set, workExperience[0]);
	while (ptr == NULL)
	{
		printf("Enter the applicable option (Y or N) : ");
	    scanf("%s", workExperience);
	    ptr = strchr(ans_set, workExperience[0]);
	}
	
}

int yearsOfExperience(char *name)
{
	int years = 0;
	printf("How many years of relevant work experience does %s have? : ", name);
	scanf("%d", &years);
	return years;
}

int checkOtherSkills(char *name)
{
    int others = 0;
    printf("How will you rate %s's interpersonal and leadership qualities? : \n", name);
  printf("5 : VERY HIGH\n4 : HIGH\n3 : NORMAL\n2 : LOW\n1 : VERY LOW\n");
  printf("Enter the corresponding number between 1 and 5 : ");
  scanf("%d", &others);
 while (!(others <= 5 && others >= 1))
  {
    printf("Enter only a corresponding number between 1 and 5 : ");
    scanf("%d", &others); 
    if ((others <= 5 && others >= 1))
      break;
  }
  return others;
}

int main(void)
{
    char name[25];
    char qual[2];
    char cert[2];
    char workExperience[2];
    int years = 0;
    int softSkillsLevel = 0;
  
	  init();	

		
    printf("What is the candidate's name: ");
	  scanf("%s", name);
	  checkEducation(name, qual);
	  dash_lane();
	  checkCertification(name, cert);
	  dash_lane();
	  hasWorkExperience(name, workExperience);
	  dash_lane();
	  years = yearsOfExperience(name);
    dash_lane();
    softSkillsLevel = checkOtherSkills(name);
    dash_lane();
	  printf("*** Name : %s ***\n", name);
	  printf("Educational background: %s\n", qual);
	  printf("Professional certifications: %s\n", cert);
	  printf("Prior work experience: %s\n", workExperience);
	  printf("Years of Experience: %d\n", years);
    printf("Soft Skills Level: %d\n", softSkillsLevel);
	  return 0;
}