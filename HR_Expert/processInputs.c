#include "structs.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void processInputs(Employee *s, Result  *res)
{
	
	//const char DEPARTMENTS[] = {"TECHNICAL"}; //"COMMERCIAL", "FINANCE", "HUMAN RESOURCES"
	//const char ROLES[] = {"MANAGER", "SUPERVISOR"}; //, "OFFICER"
	
	/*
	Import all query options 
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
	*/
	
	/* Start encoding the logic of production rules*/
	

    if (strcmp(s->qual, ENG_SCI_TEC)==0)
	{
		/*If experience is in Engineerng or Project Management or Operations Management 
		or HSE, then department is TECHNICAL*/
        if((strcmp(s->cert,ENG) == 0) || (strcmp(s->cert,PRJ_MGT) == 0) 
		|| (strcmp(s->cert,OPS_MGT) == 0) || (strcmp(s->cert,HSE) == 0))
		        strcpy(res->dept, DEPT[0]);
        
		/*If experience is in Sales, Marketing, Finance, customer service or business,
		then department is COMMERCIAL*/
		else if((strcmp(s->cert,FIN) == 0) || (strcmp(s->cert,BUS_ANL) == 0) || (strcmp(s->cert,SAL) == 0)
		 || (strcmp(s->cert,MAR) == 0) || (strcmp(s->cert,CUS_REL) == 0) || (strcmp(s->cert,BUS_MGT) == 0)
		 || (strcmp(s->cert,ACC) == 0))
		        strcpy(res->dept, DEPT[1]);
		
		 /*If experience is in Human Resources or Media and Communications,
		then department is HUMAN RESOURCES*/
        else if((strcmp(s->cert,HUM_RES) == 0) || (strcmp(s->cert,MED_PCM) == 0))
		        strcpy(res->dept, DEPT[3]);

		else {
			strcpy(res->dept, DEPT[4]);
		}
	}
	/*If Basic Qualification is in Sales, Marketing and Commerce category*/
	else if (strcmp(s->qual, SAL_MAR_COM)==0)
	{
		/*If experience is in Sales, Marketing, Finance, customer service or business,
		then department is COMMERCIAL*/
		if((strcmp(s->cert,FIN) == 0) || (strcmp(s->cert,PRJ_MGT) == 0) || (strcmp(s->cert,BUS_ANL) == 0)
		 || (strcmp(s->cert,SAL) == 0) || (strcmp(s->cert,OPS_MGT) == 0)|| (strcmp(s->cert,MAR) == 0)
		 || (strcmp(s->cert,CUS_REL) == 0) || (strcmp(s->cert,BUS_MGT) == 0) || (strcmp(s->cert,SUP_CHN) == 0)
		 || (strcmp(s->cert,ACC) == 0))
		        strcpy(res->dept, DEPT[1]);
        /*If experience is in Human Resources or Media and Communications,
		then department is HUMAN RESOURCES*/
        else if((strcmp(s->cert,HUM_RES) == 0) || (strcmp(s->cert,MED_PCM) == 0))
		    strcpy(res->dept, DEPT[3]);

		else {
			strcpy(res->dept, DEPT[4]);
		}
		
	}
	/*If basic qualification is in finance/accounting category*/
    else if (strcmp(s->qual, FIN_ACC)==0)
	{
		/*If experience is in Sales, Marketing, or customer service,
		then department is COMMERCIAL*/
        if((strcmp(s->cert,SAL) == 0) || (strcmp(s->cert,MAR) == 0) || (strcmp(s->cert,CUS_REL) == 0)
		|| (strcmp(s->cert,PRJ_MGT) == 0))
		strcpy(res->dept, DEPT[1]);

        /*If experience is in finance, accounting, business or supply chain,
		then department is FINANCE*/
		else if((strcmp(s->cert,FIN) == 0) || (strcmp(s->cert,BUS_ANL) == 0)
		 || (strcmp(s->cert,ACC) == 0) || (strcmp(s->cert,SUP_CHN) == 0) || (strcmp(s->cert,BUS_MGT) == 0))
		 strcpy(res->dept, DEPT[2]);

		 /*If experience is in Human Resources or Media and Communications,
		then department is HUMAN RESOURCES*/
        else if((strcmp(s->cert,HUM_RES) == 0) || (strcmp(s->cert,MED_PCM) == 0))
		    strcpy(res->dept, DEPT[3]);

		else {
			strcpy(res->dept, DEPT[4]);
		}
	}
    
    else if (strcmp(s->qual, ART_HUM)==0)
	{
        /*If experience is in Human Resources or Media and Communications,
		then department is HUMAN RESOURCES*/
        if((strcmp(s->cert,HUM_RES) == 0) || (strcmp(s->cert,MED_PCM) == 0) 
		|| (strcmp(s->cert,PRJ_MGT) == 0) || (strcmp(s->cert,OPS_MGT) == 0))
		    strcpy(res->dept, DEPT[3]);
        
		/*If experience is in Sales, Marketing, Finance, customer service or business,
		then department is COMMERCIAL*/
		else if((strcmp(s->cert,FIN) == 0) || (strcmp(s->cert,BUS_ANL) == 0) || (strcmp(s->cert,SAL) == 0)
		 || (strcmp(s->cert,MAR) == 0) || (strcmp(s->cert,CUS_REL) == 0) || (strcmp(s->cert,BUS_MGT) == 0))
		        strcpy(res->dept, DEPT[1]);

		else {
			strcpy(res->dept, DEPT[4]);
		}
	}
	
    /*Assign suitable job role*/
	if(strcmp(res->dept,DEPT[4]) == 0)
	{
		strcpy(res->role, ROLES[3]);
	}
	else
	{
		if((s->years >= 5) && (s->skills >= 4))
		{
			strcpy(res->role, ROLES[0]);
		}
		else if(((s->years >= 5) && (s->skills == 3)) || ((s->years < 5) && (s->skills >= 3)))
		{
			strcpy(res->role, ROLES[1]);
		}
		else if(((s->years >= 0) && (s->skills <=2)))
		{
			strcpy(res->role, ROLES[2]);
		}
		else
		{
			strcpy(res->role, "Other");
		}
	}
}