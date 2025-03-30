//A function with return type and with arguments.
#include<stdio.h>
void interest(int p,int r,int t);
int main(){
	int p,r,t;
	printf("Enter the principle");
	scanf("%d",&p);
	printf("Enter the rate");
	scanf("%d",&r);
	printf("Enter the Time");
	scanf("%d",&t);
	return 0;
}
void interest(int p,int r,int t){
	return (p*r*t)/100;
	printf("Simple interest is=%d");
}
