#ifndef STRUCTS_H
#define STRUCTS_H

/* Define a structure for an employee */
typedef struct 
{
	char name[25];
	char qual[2];
	char cert[2];
	int years;
    int skills;
} Employee;
/*Define a structure for answer options*/
typedef struct
{
	char *key;
	char *val;
} Options;

//Define a structure for employee skill level options
typedef struct
{
	int key;
	char *val;
} Score;
//Define a structure for the result
typedef struct 
{
	char dept[25];
	char role[20];
} Result;

void processInputs(Employee *s, Result  *res);

Options QUAL_OPTIONS[4];
						  
Options CERT_OPTIONS[14];
						   
Score SKILL_OPTIONS[5];

char* DEPT[5];

char* ROLES[4];

void dash_lane();
//void star_loop(char *s);
void star_line(char *str);

void star_loop();

void to_uppercase(char* str);

/*Define ALiases for qual_options*/
#define ENG_SCI_TEC "A"
#define FIN_ACC "B"
#define SAL_MAR_COM "C"
#define ART_HUM "D"
/* Deine Aliases for certifications*/
#define ENG "A"
#define PRJ_MGT "B"
#define OPS_MGT "C"
#define HSE "D"
#define FIN "E"
#define BUS_ANL "F"
#define SAL "G"
#define MAR "H"
#define CUS_REL "I"
#define BUS_MGT "J"
#define ACC "K"
#define SUP_CHN "L"
#define HUM_RES "M"
#define MED_PCM "N"
#endif