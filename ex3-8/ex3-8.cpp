#include <stdio.h>

int max_array(int arr[], int len)
{
	int i;
	int num=-10000;

	for(i=0;i<len;i++)
	{
		if(num>arr[i])
			num=num;
		else 
			num=arr[i];	
	}
	return num;	
	}


int main()
{
	int len=5;
	int arr[]={0, 5, 20, 15, 1};
	int num;

	num=max_array(arr, len);

	printf("가장 큰 정수 = %d \n", num);

	return 0;
}