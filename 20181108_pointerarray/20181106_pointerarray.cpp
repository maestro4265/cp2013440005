#include <stdio.h>

//array�� pointer�� ȥ��

void printarray(int a[], int len)
{
	int i;
	for(i=0;i<len;i++)
		printf("%d ", a[i]);

	return ;
}


int main (void)
{
	int a[3]={10, 20, 30}; //�迭 ���� �̸�: a, ���� = 3
	int *ptr; //ptr�� address of a[] : �迭�� ù��° ������ ù��° �ּ� �迭�� �̸��� ����ϸ� �迭�� ù ����� �����Ͱ��� �ȴ�.
	int len=3;
	ptr= a;
	
	printf("%d\n", a[0]);
	printf("%d\n", *ptr);
	printf("%d\n", ptr[0]);  //�����ͺ����� �̸��� �迭�̸����� ��밡��


	*(ptr)=100; //�迭�� ù��° ������ ���� ����
	printarray(a, len);
	
	*(++ptr)=100; //�迭�� �ι�° ������ ���� ����
	printarray(a, len);
	return 0;
}