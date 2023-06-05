/*Q13
to print the even numbers between 1 to 50*/

#include<stdio.h>
int main()
{
    int i = 1;
    for(i;i<=50;++i)
    {
        if(i%2==0)
        {
            printf("%d is even \n",i);
        }
    }
    return 0;
}