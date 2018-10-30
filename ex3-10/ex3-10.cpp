#include <stdio.h>

void changeindex_array(int arr[], int len)
{
	int i;
	int index;
	int num1=arr[0];
	int num2=arr[len-1];
	
	for(i=0;i<len;i++)
	{
		if(i==len-1)
			arr[0]=num2;
			arr[len-1]=num1;
	}
	
	printf("%d", arr);
	return ;
}

int main()
{
	int len=5;
	int arr[]={20, 100, 15000, 15, 20};
	int num;

	num=changeindex_array(arr, len);

	printf("가장 큰 정수의 index = %d \n", num);

	return 0;
}