/*Q26
to find the area and primiter of an ractangle*/

#include<stdio.h>

int main()
{
    float l=0;
    float b=0;
    float area = 0;
    float per = 0;
    printf("Enter the length of the Ractangle\n");
    scanf("%f",&l);
    printf("\nEnter the breth of the ractangle\n");
    scanf("%f",&b);
    area = l*b;
    per = 2*(l+b);
    printf("\narea is %f",area);
    printf("\nperimeter is %f",per);
    return 0;
} 