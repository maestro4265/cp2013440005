#include <stdio.h>

// 오름차순 정렬 프로그램 with 반복문
void selectionsort(int *arr, int len)
{
	int i;
	int j;
	int mindex;
	int temp;

	for(i=0;i<len;i++)
	{
		mindex=i;
		{
			for(j=i;j<len;j++)
			{
				if(arr[j]<arr[mindex])
					mindex=j;
			}
		}
			temp=arr[mindex];
			arr[mindex]=arr[i];
			arr[i]=temp;
	}

	for(i=0;i<len;i++)
		printf("%d ", arr[i]);

}





int main (void)
{
	int arr[]={30, 35, 27, 15, 40};
	int len=5;

	selectionsort(arr,len);

	return 0;
}
