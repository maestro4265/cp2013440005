//reivew
//��ǻ���� ��� : ����, �޸� ����, ��������
//�޸� ���� : ����, �ڷ���, ������, ���ͷ�, �迭, ������ ...
//���� : ����, ������, �ǿ����� ...
//�������� : ����, ���Ǻ�, �ݺ���, ���չ� ...
//�˰��� : ������ �ذ��س����� ���� �Ǵ� ���     * �˰����� ���� ��ǻ���� ��� �������θ� �̷���� �ִ�.
//																	  * ������ step
//���ȭ(�߻�ȭ) : Ư�� ������ ���� �ʿ��� ������ �����ϰ� ������ �������� ����
//�Լ� : ���ȭ�� �깰
//���α׷��־��: ��ǻ���� ��� ������ + ���ȭ�� ���


#include <stdio.h>

// insertion sorting ���α׷�
void printarray(int *arr, int len)  //�迭 ���
{
	int i;
	for(i=0;i<len;i++)
			printf("%d ", arr[i]);
}

void swap(int i, int mindex, int*arr) // arr[mindex]�� arr[i]�� �����ϴ� �Լ�
{
	int temp;
	
	temp=arr[mindex];
	arr[mindex]=arr[i];
	arr[i]=temp;
}


void insertsorting(int *arr, int len)
{
	int m;
	int k;
	int i;

	for(m=1;m<len;m++)
	{

		for(k=m;k>=1;k--)
			{
				i=k-1;

				if(arr[k]<arr[i])
					swap(k, i, arr);
				else
					break;
			}
	}
}
int main (void) //������������ ���α׷�
{
	int arr[]={3, 10, 5, 7, 1, 4, 11, 18, 30, 25, 2, 0, 17};
	int len=13;
	
	insertsorting(arr,len);

	printarray(arr, len);
	return 0;
}
