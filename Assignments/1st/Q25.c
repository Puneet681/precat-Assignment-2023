/*Q25
to find the multiplication*/

#include<stdio.h>
int main()
{
    int num1=0;
    int num2=0;
    int num3=0;
    
    printf("Enter frist number :\n");
    scanf("%d",&num1);
    printf("Enter second number :\n");
    scanf("%d",&num2);
    printf("Enter third number :\n");
    scanf("%d",&num3);
    printf("the multiplication of %d, %d and %d is %d :\n",num1,num2,num3,(num1*(num2*num3)));

    return 0;
}