/*Q9
to find the avrage and the sum of the two no. given by the user*/

#include<stdio.h>

int main()
{
    float n1 =0;
    float n2 = 0;
    float avg = 0;
    float sum = 0;
    printf("Enter frist no.\n");
    scanf("%f",&n1);
    printf("Enter second no.\n");
    scanf("%f",&n2);
    sum = n1+n2;
    avg = (sum)/2;
    printf("Sum is %f \n",sum);
    printf("avrage is %f \n",avg);
    return 0;
}