//Program to search a number from an array using binary search.
#include <stdio.h>
int main(){
    int n,i,val;
	 int start,end,mid;
     printf("Enter the size and value= ");
     scanf("%d %d",&n,&val);
     
	 int A[n];
	 printf("Enter the elements in sorted manner:-\n");
	 for(i=0;i<n;i++)
	 	scanf("%d",&A[i]);
	   
		start=0;
     end=n-1;
	 while(start<=end){
	 	mid=(start+end)/2;
	 	if(A[mid]==val){
		 
	 		printf(" The value %d present at A[i=%d] ",val,mid);
	 		break;
	}
	 	else if(A[mid]<val){
		   start=mid+1;
		 }
		else if(A[mid]>val){
			end=mid-1;
		}
	 }
	 return 0;
}
