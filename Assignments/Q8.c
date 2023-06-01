/*Q8
to display the ASCII avlue of the chracter entered using getch()*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a Character \n");
    ch = getch();
    printf("ASCII value %c is %d",ch,ch);
    return 0;
} 