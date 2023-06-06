/*Q22
to find LCm of two number*/

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
    printf("NOTE =>  if LCM = 0 then LCM is grether than 10000:\n");
    int LCM = 0;
    int i=2;
    for(i;i<10000;++i)
    {
        if(i%num == 0 && i%num1 == 0){
            LCM = i;
            break;
        }
    }
    // printf("%d\n", sum);
    
    printf("LCM of %d and %d is %d\n",num,num1,LCM);
    return 0;
}
