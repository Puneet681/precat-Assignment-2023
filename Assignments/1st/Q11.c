/*Q11
to find the largest number outoff 3*/

#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("%d is the biggest number",a);
    }
    if (b>a && b>c)
    {
        printf("%d is the biggest number",b);
    }
    if (c>a && c>b)
    {
        printf("%d is the biggest number",c);
    }
    return 0;
}