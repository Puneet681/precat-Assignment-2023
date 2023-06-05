/*Q15
to find the reverse of the given number*/

#include<stdio.h>
int main()
{
    int num = 0;
    int rem = 0;
    int rev = 0;
    printf("enter the number to revere it\n");
    scanf("%d",&num);
    int num1 = num;
    for(num;num>0;num)
    {
        if(num>0)
        {
            rem = num%10;
            rev = (rev*10)+rem;
            num = num/10;
        }
    }
    printf("reverse of the % d is %d ",num1,rev);
    return 0;
}