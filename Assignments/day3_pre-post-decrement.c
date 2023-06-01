#include<stdio.h>
//predecrement and postdecrement
int main()
{
    //pre decrement
	int x=30;
	int y;
	printf("\n value of x and y before pre_decrement x= %d y=%d",x,y);
	
	y=--x; 
	printf("\n value of x and y after pre_decrement x= %d y=%d",x,y);
		
	//post decrement
	int a=40;
	int d;
	printf("\n value of a and d before post_decrement a= %d d=%d",a,d);
	
	d=a--;	
	printf("\n value of a and d after post_decrement a= %d d=%d",a,d);
	
	return 0;
}

