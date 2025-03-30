//program to calculate x^n using recursive function

#include<stdio.h>
int Exp(int x, int y);
int main()
{
	int x1,x2,E;
	printf("Enter two numbers\n");
	scanf("%d %d",&x1,&x2);
	E=Exp(x1,x2);
	printf("exponent=%d",E);
}
int Exp(int x,int y){
	int a;
	if(y==0){
		return 1;
	}
	else
		return(x*Exp(x,y-1));
	
}
