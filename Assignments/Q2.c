/*Q2
to find the total interst on the given ammount*/

#include<stdio.h>

int main()
{
    int p=0;
    float r=0;
    int n=0;
    float si = 0;
    printf("enter ammount \n");
    scanf("%d",&p);
    printf("enter numbers of years\n");
    scanf("%d",&n);
    printf("enter intrest rate \n");
    scanf("%f",&r);
    si = (p*n*r)/100;
    printf("\nthe total Simple intrest is = %f",si);
    return 0;
} 