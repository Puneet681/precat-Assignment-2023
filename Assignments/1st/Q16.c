/*Q16
to find the x to the power of y*/

#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    int y;
    printf("enter the base number :");
    scanf("%d",&x);
    printf("enter the power");
    scanf("%d",&y);
    int z = pow(x,y);
    printf("%d to the power %d = %d",x,y,z);
    return 0;
}