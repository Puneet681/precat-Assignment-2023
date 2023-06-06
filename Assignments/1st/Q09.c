/*Q9
to find the area and the parametre of the circle take the radius fro the user*/

#include<stdio.h>
int main()
{
    float PI =  3.14;
    int r = 0;
    float area = 0;
    float per = 0;
    printf("Enter the  radius of the circle\n");
    scanf("%d",&r);
    printf("%f is the area of the circle with the radius of %d \n",(PI*r*r),r);
    printf("%f is the permeter of the circle with the radius of %d \n",(2*PI*r),r);

    return 0;
}