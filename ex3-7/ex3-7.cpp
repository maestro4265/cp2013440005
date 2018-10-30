#include <stdio.h>

void sum_array(int arr[], int len)
{
	int i;
	int sum=0;

	for(i=0;i<len;i++)
	{
		sum=sum+arr[i];
	}
	printf("array sum= %d", sum);

	return ;
}
	
	
int main(void)
{
	int len=5;
	int arr[]={0, 5, 10, 15, 20};

	sum_array(arr, len);

	return 0;
}


