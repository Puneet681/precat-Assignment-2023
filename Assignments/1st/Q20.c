/*Q20
cto chek if the number is perfect or not*/

#include<stdio.h>
int main()
{
    int num=0;
    printf("Enter number to wheck if its perfect number :\n");
    scanf("%d",&num);

    int sum = 0;
    int i=1;
    for(i;i<num;++i)
    {
        if(num%i == 0){
            sum = sum+i;
        }
    }
    // printf("%d\n", sum);
    if(sum == num){
        printf("%d is perfect number\n",num);
    }
    else if(sum != num){
        printf("%d is not perfect number\n",num);
    }
    return 0;
}