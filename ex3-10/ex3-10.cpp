#include <stdio.h>

void changeindex_array(int arr[], int len)
{
	int i;
	int num1=arr[0];
	int num2=arr[len-3];
	
	arr[0]=num2;
	arr[len-3]=num1;

	for(i=0;i<len;i++)
	{
	printf("%d ", arr[i]);
	}
	
	return ;
}

int main()
{
	int len=5;
	int arr[]={20, 100, 15000, 15, 20};
	int i;

	for(i=0;i<len;i++)
	{
	printf("%d ", arr[i]);
	}
	printf("\n");

	changeindex_array(arr, len);	
	
	return 0;
}