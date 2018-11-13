#include <stdio.h>

//함수입력: 배열, len
//함수출력: 배열
//부수효과: X
void printarray(int *arr, int len)  //배열 출력
{
	int i;
	for(i=0;i<len;i++)
			printf("%d ", arr[i]);
}


//함수입력: 배열, len, i
//함수출력: 배열
//부수효과: index가 변화
void swap(int i, int mindex, int*arr) // arr[mindex]와 arr[i]를 변경하는 함수
{
	int temp;
	
	temp=arr[mindex];
	arr[mindex]=arr[i];
	arr[i]=temp;
}

//함수입력: 배열, len, i
//함수출력: mindex
//부수효과: X
int findmindex(int *arr, int len, int i) // mindex를 찾는 함수
{
	int j;
	int mindex;
	
	mindex=i;

for(j=i;j<len;j++)
		{
			if(arr[j]<arr[mindex])
				mindex=j;
		}
	return mindex ;
}


//함수입력: 배열, len
//함수출력: 배열
//부수효과: X

void selectionsort(int *arr, int len)
{
	int i;
	int mindex;
	
	for(i=0;i<len;i++)
	{
		mindex=findmindex(arr, len, i);
		swap(i, mindex, arr);
	}

	printarray(arr, len);
}
int main (void) //오름차순정렬 프로그램
{
	int arr[]={10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int len=10;
	
	selectionsort(arr,len);

	return 0;
}



