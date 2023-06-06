/*Q21
to find GCF of two number*/

#include<stdio.h>
int main()
{
    int num=0;
    int num1=0;
    int range =0;
    printf("Enter frist number :\n");
    scanf("%d",&num);
    printf("Enter second number :\n");
    scanf("%d",&num1);
    if(num1<num){
        range = num;
    }
    else if(num1>num){
        range = num;
    }
    else{
        range = num;
    }

    int GFC = 0;
    int i=1;
    for(i;i<range;++i)
    {
        if(num%i == 0 && num1%i == 0){
            GFC = i;
        }
    }
    // printf("%d\n", sum);
    
    printf("GCF of %d and %d is %d\n",num,num1,GFC);
    return 0;
}
