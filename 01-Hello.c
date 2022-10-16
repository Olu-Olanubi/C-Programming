#include <stdio.h>
/** Program receives the name of the user as input
*
*/
int main()
{
	char name[99];
	
	//Get the name of the user
	printf("Hello, what is your name?: ");
	
	//Read user name and store in the variable name
	scanf("%s", &name); 
	
	//Out statement with the user name
	printf("Hello %s, welcome to C programming", name);
	
	return (0);
}