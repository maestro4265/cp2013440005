#include <stdio.h>
//int main(void)
//{
//	// array(�迭) : ���� �ڷ����� ���� �������� ����
//	// 1: �迭�� �̸� ����
//	// 2: �� �迭�� ����� �ڷ���
//	// 3: �迭�� ���� ���� 
//
//
//	//int x; 
//	//int a[4]; //int���� ���� a�� 4������,  len=4;��� ������ �����ؼ� a[len]���� �迭���� ����
//	//int i;
//	//a[0]=20;
//	//a[1]=1;
//	//a[2]=3;
//	//a[3]=2000;
//
//	int a[4]={2, 20, 200, 2000}; //array�ʱ�ȭ ���
//	int arr[]={3, 30, 300}; //array length�� �������� ���� ��� ������ data ������ŭ length�� �ڵ����� ����
//	int i;
//	for(i=0;i<4;i++)
//	{
//	printf("%d\n",a[i]);
//	printf("%d\n", arr[i]); // arr�� ���̰� 3�̱� ������ i�� 3�� �� �����߻�
//	}

	// �迭�� �Ű������� �Լ��� �Է��ϴ� ���
	// �Լ� print_array ����
	// �Է��� array, ��ȯ���� ����
	// �μ�ȿ�� : ȭ�鿡 array element�� ���
	

	void print_array(int arr[], int length) // �迭�� �̸��� �迭�� ���̸� ���� �Ű������� ��ƾ� ������ ������ �迭�� �Է°���
	{
		int i;
		for(i=0;i<length;i++)
		{
		printf("%d\n", arr[i]); 
		}
		
	}

	int main(void)
	{
		int len=3;
		int arr[]={3, 30, 300};
		print_array(arr,len);
		return 0;
	}



