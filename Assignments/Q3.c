/*Q3
to convert degree celcius in faranhites*/

#include<stdio.h>
int main()
{
    float temp=0;
    float fer = 0;
    printf("Enter tempreture in Degree Celcius\n");
    scanf("%f",&temp);
    fer = ((9.0/5.0)*temp)+32;
    printf("\ntemplreture is %f farenhites",fer);
    return 0;
} 