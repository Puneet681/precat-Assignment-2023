/*Q3 Given by mam
to convert the years in days and weeks*/

#include<stdio.h>

int main()
{
    float year =0;
    float week =0;
    float days =0;
    printf("enter the number of year \n");
    scanf("%f",&year);
    week = year*52;
    days = year*365;
    printf("weeks are %f \n",week);
    printf("days are %f \n",days);
    return 0;
} 