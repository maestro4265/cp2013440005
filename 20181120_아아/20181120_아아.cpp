//���ڿ�

#include <stdio.h>
#include <string.h>

void printarray(char *arr, int len)  //�迭 ���
{
	int i;
	for(i=0;i<len;i++)
			printf("%c", arr[i]);
}

int main()
{
	char c;    //char�ڷ����� ���ں��� �������� �ַ� ���
	c='A';     // A�� askii�ڵ�� 65
	printf("%d\n", c);//10������ ǥ��
	printf("%c\n", c);//char�� ǥ��

	char q[]={'h', 'e', 'l', 'l', 'o'}; //�������� �迭
	int len=5;

	printarray(q, len);
	
	char b[]="hello";
	printf("%c\n", b);


	return 0;
}

// ���ڿ��� ���� �׻� null(�迭�� ���̸� �� �� �ֵ���)