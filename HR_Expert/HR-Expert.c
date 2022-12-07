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
printf("HR-Expert program helps to allocate personnel on an ERP System\n");
printf("It ensures only the most suitable candidates are locating to the different departments within the organization\n");
printf("The organization has 16 units grouped in four corporate departments\n");
printf("Technical, Commercial, Finance, Human Resources, Legal\n\n");

star_loop();
printf("To allocate a candidate, press ENTER key\n");
getchar();
printf("Ready to Start...\n");
}

void checkEducation(char *name, char *qual)
{
	char ans_set[] = "ABCDE";

	printf("\nDoes %s have academic qualifications in any of related fields? : \n", name);
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
	printf("A: Project Management\n");
	printf("B: Operations Management\n");
	printf("C: HSE\n");
	printf("D: Sales\n");
	printf("E: Marketing\n");
	printf("F: Customer Relations\n");
	printf("G: Audit\n");
	printf("H: Tax\n");
	printf("I: Procurement and Supply Chain Management\n");
	printf("J: Training and Development\n");
	printf("K: Business Administration\n");
	printf("L: Personnel Administration\n");
	printf("M: Law\n");
	printf("\nEnter the applicable option: \n\n");
	scanf("%s", cert);
	
	char *ptr;
	ptr = strchr(ans_set, cert[0]);
	while (ptr == NULL)
	{
		printf("Enter the applicable option: \n");
	    scanf("%s", cert);
	    ptr = strchr(ans_set, cert[0]);
	}
}

void hasWorkExperience(char *name, char *workExperience)
{
	char ans_set[] = "YN";
	printf("Does %s have relevant work experience relating to his/her educational/professional qualification? : \n");
	printf("\nEnter Y for yes or N for no: \n");
	scanf("%s", workExperience);
	char *ptr;
	ptr = strchr(ans_set, workExperience[0]);
	while (ptr == NULL)
	{
		printf("Enter the applicable option: \n");
	    scanf("%s", workExperience);
	    ptr = strchr(ans_set, workExperience[0]);
	}
	
}

int main(void)
{
    char name[25];
    char qual[2];
    char cert[2];
    char workExperience[2];
	init();	

		
    printf("What is the candidate's name: ");
	scanf("%s", name);
	checkEducation(name, qual);
	dash_lane();
	//printf("\n%s: %s\n", name, qual);
	checkCertification(name, cert);
	dash_lane();
	hasWorkExperience(name, workExperience);
	printf("\n%s: educational background= %s\n%s: professional certifications= %s\n%s: work experience= %s\n", name, qual, name, cert, name, workExperience);
	
	return 0;
}