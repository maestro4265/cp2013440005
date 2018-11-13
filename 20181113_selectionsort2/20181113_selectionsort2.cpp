#include <stdio.h>

//�Լ��Է�: �迭, len
//�Լ����: �迭
//�μ�ȿ��: X
void printarray(int *arr, int len)  //�迭 ���
{
	int i;
	for(i=0;i<len;i++)
			printf("%d ", arr[i]);
}


//�Լ��Է�: �迭, len, i
//�Լ����: �迭
//�μ�ȿ��: index�� ��ȭ
void swap(int i, int mindex, int*arr) // arr[mindex]�� arr[i]�� �����ϴ� �Լ�
{
	int temp;
	
	temp=arr[mindex];
	arr[mindex]=arr[i];
	arr[i]=temp;
}

//�Լ��Է�: �迭, len, i
//�Լ����: mindex
//�μ�ȿ��: X
int findmindex(int *arr, int len, int i) // mindex�� ã�� �Լ�
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


//�Լ��Է�: �迭, len
//�Լ����: �迭
//�μ�ȿ��: X

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
int main (void) //������������ ���α׷�
{
	int arr[]={10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int len=10;
	
	selectionsort(arr,len);

	return 0;
}



