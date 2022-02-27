#include<stdio.h>
int main()
{
	int left=0;
	int arr[]={1,2,3,4,5,6,7,8,9};
	int k =6;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int right=sz-1;
	while(left<=right){
		int mid = (left+right)/2;
		if(arr[mid]>k){
		
			right=mid-1;
		}
		else if(arr[mid]<k){
		
		
			left = right+1;
		}
		else{
		
			printf("ур╣╫ак %d\n", mid);
			break;
		}
	}
	if(left>right)
	{
		printf("н╢ур╣╫"); 
	}

	return 0;
 } 
