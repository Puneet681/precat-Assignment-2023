/*Q12
to find the smallest number outoff 3*/

#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && a<c)
    {
        printf("%d is the smallest number",a);
    }
    if (b<a && b<c)
    {
        printf("%d is the smallest number",b);
    }
    if (c<a && c<b)
    {
        printf("%d is the smallest number",c);
    }
    return 0;
}