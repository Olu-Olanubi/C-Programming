#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
@Description: converts dash/underscore delimited words into camel casing.
The first word within the output should be capitalized only if the original
word was capitalized (known as Upper Camel Case, also often referred to as Pascal case). 
The next words should be always capitalized.
@text: pointer to the string to be converted
@camel: converted string in camelcase
Return: null

************************************************
Algorithm:
1. Loop through the string text characters
2. For each character in the string, while the character is not null: 
    a. if character is not a dash or underscore (use ASCII notation):
        copy text character into camel
    b. else if character is a dash or underscore:
        capitalize the next character of text, and copy that into camel.

*/


void to_camel_case(const char *text, char *camel) 
{
//declare a variable for iteration
int i,j;
//initialize iterator
i = 0;
j = 0;
//check for empty string
if (text[0] == '\0')
{
    camel[0] = '\0';
    return;
}
while (text[i] != '\0')
    {
        if((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122))
        {
            camel[j] = text[i];
    
        }
        else
        {
            while(!((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122)))
            {
                i++;
            }
        
            //check if the next character is already in upper case
            if(text[i] >= 65 && text[i] <= 90)
            {
                camel[j] = text[i];
            }
            else{
                camel[j] = text[i] - 32;
            }
        }
        i++; 
        j++;   
    }
return;

}