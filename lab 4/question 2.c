//Write a program to swap two numbers using call by reference function call.
#include<stdio.h>
void swap(int*a,int*b);

int main(){
	int a,b;
	printf("Enter the numbers=");
	scanf("%d %d",&a,&b);
	printf("The First number is a=%d\n and\nThe Second number is b=%d",a,b);
	swap(&a,&b);
}

void swap(int*a,int*b)
{int temp;
temp=*a;
*a=*b;
*b=temp;
printf("\n\n After swaping\n\n");
printf("The first number a=%d\nThe second number b=%d",*a,*b);
}
