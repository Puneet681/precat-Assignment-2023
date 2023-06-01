/*Q5
to convert cm to m  to Km*/

#include<stdio.h>

int main()
{
    float cm = 0;
    float m = 0;
    float km = 0;
    printf("Enter centemeter\n");
    scanf("%f",&cm);
    m = cm/100;
    km = m/1000;
    printf("length in meter is %f \n",m);
    printf("lengeth in kilometer is %f \n",km);
    return 0;
} 