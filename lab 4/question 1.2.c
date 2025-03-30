//A function call with return type and without arguments.
#include<stdio.h>
int gen();
int main(){
	int p,r,t;
	gen (p,r,t);
	return 0;

}
int gen(){

	int a=1000;
	int b=5;
	int c=3;
	int simpint=(a*b*c)/100;
	printf("simple interest=%d",simpint);
	return 0;
	
}
