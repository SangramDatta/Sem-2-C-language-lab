//program to print Fibonacci sequence.
#include<stdio.h>
int fib(int n);
int main(){
	int i,n,Res;
		printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	Res=fib(i);
	printf("%d\n",Res);
	
}
int fib(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{ int F=fib(n-1)+fib(n-2);
	return F;
	}
}
