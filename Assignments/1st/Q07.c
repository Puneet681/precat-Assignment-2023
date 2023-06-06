/*Q7
to find the compound interst on the given ammount*/

#include<stdio.h>
#include<math.h>

int main()
{
    float p=0;
    float r=0;
    float n=0;
    float t=0;
    float ci = 0;
    printf("enter ammount \n");
    scanf("%f",&p);
    printf("enter numbers of times compundig is applied in a year\n");
    scanf("%f",&n);
    printf("enter numbers of years\n");
    scanf("%f",&t);
    printf("enter intrest rate \n");
    scanf("%f",&r);
    float x= p*(1+((r/100)/n));
    float y= n*t;
    ci = (pow(x,y)-p);
    printf("\nthe total compound intrest is = %f",ci);
    return 0;
} 