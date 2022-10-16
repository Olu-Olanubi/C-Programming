#include<stdio.h>

int main(void)
{
int a, b;

printf("Enter two numbers: ");

scanf("%d %d", &a, &b);

printf("\n\nS/N\tARITHMETIC\t\tRESULT\n");
printf("---------------------------------------\n");
printf("1.\t(%d + %d)\t\t%d\n", a, b, (a+b));
printf("2.\t(%d - %d)\t\t%d\n", a, b, (a-b));
printf("3.\t(%d x %d)\t\t%d\n", a, b, (a*b));
printf("4.\t(%d / %d)\t\t%d\n", a, b, (a/b));
printf("5.\t(%d mod %d)\t\t%d\n", a, b, (a % b));
printf("\n");


return (0);

}