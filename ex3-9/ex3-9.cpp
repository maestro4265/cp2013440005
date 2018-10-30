#include <stdio.h>

int maxindex_array(int arr[], int len)
{
	int i;
	int num=-10000;
	int index;
	for(i=0;i<len;i++)
	{
		if(num>arr[i])
			num=num;
		else 
			num=arr[i];	
	}

	for(i=0;i<len;i++)
	{
	if(arr[i]==num)
		index=i;
	}
	return index;	
}

int main()
{
	int len=5;
	int arr[]={20, 100, 15000, 15, 20};
	int num;

	num=maxindex_array(arr, len);

	printf("가장 큰 정수의 index = %d \n", num);

	return 0;
}