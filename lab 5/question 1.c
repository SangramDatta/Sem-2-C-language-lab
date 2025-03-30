//program to find factrorial of a number using recursion

#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int F=fact(n);
	printf("factrorial=%d",F);
	return 0;
 } 
 int fact(int n){
 	int fact=1;
 	int i;
 	for(i=1;i<=n;i++)
 	fact=fact*i;
 	return fact;
 }
