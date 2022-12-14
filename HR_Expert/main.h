#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void star_loop(char *s);
void star_loop();
void dash_lane();

typedef struct 
{
	char name[25];
	char qual [2];
	char cert[2];
	int years = 0;
    int softSkillsLevel = 0;
} employee;

#endif