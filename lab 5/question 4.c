//program to calculate GCD of two numbers using recursion
#include<stdio.h>
int Gcd(int a,int b);
int main(){
	int x1,x2,gcd;
	printf("Enter two number other than 0\n");
	scanf("%d %d",&x1,&x2);
	if(x1,x2){
		gcd=Gcd(x1,x2);
	}
	else{
		gcd=Gcd(x2,x1);
	}
	printf("Gcd=%d",gcd);
	return 0;
}
int Gcd(int a,int b){
	if(a%b==0){return b;
	}
	else{
		return(Gcd(b,a%b));
	}
}
