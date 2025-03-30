//A function call without return type and with arguments.
#include<stdio.h>
void gen();
int main(){
	int p=600,r=5,t=2;
	gen (p,r,t);
	return 0;

}
void gen(int a,int b,int c){

	int simpint=(a*b*c)/100;
	printf("simple interest=%d",simpint);
	return 0;
	
}
