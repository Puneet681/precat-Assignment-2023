/*Q24
to find profit or loss*/

#include<stdio.h>
#include<math.h>
int main()
{
    int num=0;
    int num1=0;
    int range =0;
    int value = 0;
    printf("Enter investment :\n");
    scanf("%d",&num);
    printf("Enter return :\n");
    scanf("%d",&num1);

    value = num1-num;
    if(value!=0){
        if(value<0){
            value = abs(value);
            printf("%d is the loss",value);
        }
        else{
            printf("%d is the profit",value);
        }
    }
    else{
        printf("there is no profit or loss");
    }

    return 0;
}