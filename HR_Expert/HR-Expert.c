#include "main.h"
#include <string.h>
#include "structs.h"
#include <stdlib.h>


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
printf("Press ENTER key to start the program.");
getchar();
printf("STARTING...\n\n");
}

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

	int i;
	for (i = 0; i < (sizeof(QUAL_OPTIONS)/sizeof(QUAL_OPTIONS[0])); i++)
	{
		printf(" %c : ", QUAL_OPTIONS[i].key);
		printf("%s\n", QUAL_OPTIONS[i].val);
	}
	printf("\nEnter the most suitable option: ");
	scanf("%s", qual);
	char *ptr;
	ptr = strchr(ans_set, qual[0]);
	while (ptr == NULL)
	{
		printf("Enter the applicable option (A, B, C, D): \n");
	    scanf("%s", qual);
	    ptr = strchr(ans_set, qual[0]);
	}
	
}
void checkCertification(char *name, char *cert)
{
	char ans_set[] = "ABCDEFGHIJKLMNO";


	printf("\nDoes %s have any advanced qualifications or professional certifications in any of the related fields? : \n\n", name);
	/*
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
	*/
	int i;
	for (i = 0; i < (sizeof(CERT_OPTIONS)/sizeof(CERT_OPTIONS[0])); i++)
	{
		printf(" %c : ", CERT_OPTIONS[i].key);
		printf("%s\n", CERT_OPTIONS[i].val);
	}
	printf("\nEnter the most suitable option: ");
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

int checkSkills(char *name)
{
    int others = 0;
    printf("How will you rate %s's skills level? : \n", name);
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
	    printf("Enter only a corresponding number between 1 and 5 : ");
	    scanf("%d", &others); 
	    if ((others <= 5 && others >= 1))
	      break;
	  }
	  return others;
}

/*Employee getInformation()
{
	Employee emp;
	printf("What is the candidate's name: ");
	scanf("%[^\n]%*c", employee.name);
	
}*/
int main(void)
{
    Employee employee;
    int WAIT_TIME = 1;
	
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
	//hasWorkExperience(name, workExperience);
	//dash_lane();
	employee.years = yearsOfExperience(employee.name);
    sleep(WAIT_TIME);	
    dash_lane();
    employee.skills = checkSkills(employee.name);
    sleep(WAIT_TIME);	
    dash_lane();
	printf("*** Name : %s ***\n", employee.name);
	printf("Educational background: %s\n", employee.qual);
	printf("Professional certifications: %s\n", employee.cert);
	//printf("Prior work experience: %s\n", workExperience);
	printf("Years of Experience: %d\n", employee.years);
    printf("Soft Skills Level: %d\n", employee.skills);
	return 0;
	  
	  //employee = getInformation();
}