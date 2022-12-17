#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct 
{
	char name[25];
	char qual [2];
	char cert[2];
	int years;
    int skills;
} Employee;

typedef struct
{
	char key;
	char *val;
}Options;

typedef struct
{
	int key;
	char *val;
}Score;

Options QUAL_OPTIONS[] = {{'A', "Engineering, Science, Technology"},
						  {'B', "Finance & Accounting"},
						  {'C', "Sales, Marketing and Commerce"},
						  {'D', "Arts and Humanities"}};
						  
Options CERT_OPTIONS[] = {{'A', "Engineering"},
						   {'B', "Project Management"},
						   {'C', "Operations Management"},
						   {'D', "HSE"},
						   {'E', "Finance"},
						   {'F', "Business Analysis"},
						   {'G', "Sales"},
						   {'H', "MArketing"},
						   {'I', "Customer Relations"},
						   {'J', "Business Management"},
						   {'K', "Accounting"},
						   {'L', "Supply Chain"},
						   {'M', "Human Resources"},
						   {'N', "Media & Public Communications"},
						   {'O', "None"}};
						   
Score SKILL_OPTIONS[] = {{1, "VERY POOR"},
						 {2, "POOR"},
						 {3, "GOOD"},
						 {4, "VERY GOOD"},
						 {5, "EXCELLENT"}};
#endif