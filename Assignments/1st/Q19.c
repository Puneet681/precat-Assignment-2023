/*Q19
to find if the given is number is prime or not*/

#include<stdio.h>
int main()
{
    int num=0;
    printf("Enter number to check if its prime or not :\n");
    scanf("%d",&num);

    int sum = 0;
    int i=2;
    for(i;i<num;++i)
    {
        if(num%i == 0){
            sum = sum+i;
            // printf("%d\n", i);
        }
            // printf("%d", i);
    }
    // printf("%d\n", sum);
    if(sum == 0){
        printf("%d is prime number\n",num);
    }
    else if(sum !=0){
        printf("%d is not prime number\n",num);
    }
    return 0;
}