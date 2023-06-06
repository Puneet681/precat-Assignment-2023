// Q5 & Q14
// to find the fctorial of a given number
#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number to find its Factorial : \n");
    scanf("%d",&num);
    int i = 1;
    int sum = 0;
    for(i;i<(num+1);++i)
    {
        sum = sum+i;
    }
    printf("%d ",sum);
    return 0;
}
 

