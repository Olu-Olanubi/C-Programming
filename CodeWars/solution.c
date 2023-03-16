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
    int j = 0;
   
    if (n < k) return false;

    for (int i = n - k; i <= n; i++)
    {
        if(arg1[i] == arg2[j])
        j++;
        else
        return false;
    }
    return true;
}