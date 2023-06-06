/*Q27
to find if the number is postive or negative*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int num = 0;
    int check = 0;
    printf("entere and interger : \n");
    scanf("%d",&num);
    check = abs(num);
    if(num==check){
        printf("%d is positive", num);
    }
    else{
        printf("%d is negative", num);
    }
    
    return 0;
}