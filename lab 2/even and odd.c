// Program to find entered number is even or odd.
#include<stdio.h>
int main(){
	int n;
	printf("enter the number");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("this is even");
	}
	else{
		printf("this is odd");
	}
	return 0;
}
