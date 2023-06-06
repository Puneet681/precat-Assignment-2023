/*Q18
to check if the number given is the amstrong number or not*/

#include <stdio.h>
#include<math.h>
int main() {
    int num, originalNum, remainder, result = 0 , n=0 ;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter number of degits in interger: ");
    scanf("%d", &n);
    originalNum = num;
    int i =0;

    for(originalNum;originalNum!=0;originalNum)
    {
        if(originalNum!=0)
        {
            remainder = originalNum % 10;
            // printf("%d \n",result);
            result = result + pow(remainder , n);
            originalNum = originalNum/10;
        }
    }
    
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
