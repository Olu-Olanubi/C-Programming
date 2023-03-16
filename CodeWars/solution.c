#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * Description: returns true if the first argument(string) passed in ends with the 2nd argument (also a string).
 * @arg1: first argument
 * @arg2: second argument
 * Return: bool
*/
bool solution(char* arg1, char* arg2)
{
    int n = strlen(arg1);
    int k = strlen(arg2);
    int j;
    j = 0;
    char rev_arg1[n+1];
    char rev_arg2[k+1];

    //reverse arg1
    for(int i = n; i >= 0; i--)
    {
        rev_arg1[j] = arg1[i];
        j++;
    }
    rev_arg1[j+1] = '\0';
    //reset j to 0
    j = 0;
    //reverse arg2
    for(int i = k; i >= 0; i--)
    {
        rev_arg2[j] = arg2[i];
        j++;
    }
    rev_arg2[j+1] = '\0';
    //reset j to 0 again
    j = 0;
    while(rev_arg2[j] != '\0')
    {
        if(rev_arg2[j] = rev_arg1[j])
        j++;
        else
        return false;
    }
    return true;
}