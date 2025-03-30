//Program to accept a position in the position insert an element.
#include<stdio.h>
int main(){
	int i,n,loc,num;
	printf("enter array size,location and new element");
	scanf("%d %d %d",&n,&loc,&num);
	int A[n];
	printf("array entry:-\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	printf("%d",A[i]);
	for(i=n-1;i>=loc;i--)
	A[i+1]=A[i];
	A[loc]=num;
	n++;
	printf("'s new array \n");
	for(i=0;i<n;i++)
	printf(" %d",A[i]);
	return 0;
	
}
