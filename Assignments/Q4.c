/*Q4
to find the factorial of frist 50 numbers*/

#include<stdio.h>
int main()
{
    int i = 0;
    int sum = 0;
    for(i;i<=50;++i)
    {
        sum = sum+i;
    }
    printf("sum of the frist 50 numbers is %d",sum);
    return 0;
}