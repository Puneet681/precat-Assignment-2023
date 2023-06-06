/*Q8
to swap two numbers*/

#include<stdio.h>
int main()
{
    int a =0;
    int b=0;
    printf("enter the frist number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    printf("numbers befor swaping \n");
    printf("a = %d \t b = %d \n",a,b);
    int temp = a;
    a=b;
    b=temp;
    printf("numbers after swaping \n");
    printf("a = %d \t b = %d",a,b);
    return 0;
}