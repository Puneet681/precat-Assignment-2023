/*Q23
to write the multiplication table of given number*/
#include<stdio.h>
int main()
{
    int num=0;
    int mul = 0;
    printf("Enter number to get multiplication table  :\n");
    scanf("%d",&num);

    int i;
    for(i=0;i<=10;++i)
    {
    mul = i*num;
    printf("%d * %d = %d\n",num,i,mul);
    }
    return 0;
}