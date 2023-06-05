/*Q17
to find all the devisor of the number*/

#include<stdio.h>
int main()
{
    int range = 0;
    printf("entere a number to find all of its devisors\n");
    scanf("%d",&range);
    for (int i =1;i<=range;++i)
    {
        if(range%i == 0)
        printf("%d is divisible by %d\n",range,i);
    }
    return 0;
}