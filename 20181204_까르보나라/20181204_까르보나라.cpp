#include <stdio.h>
#include <stdlib.h>

typedef struct complex
{
	double real;
	double imag;
} complex;

void printcomplex(complex *ptr) 
{
	printf("%f+%fi\n", ptr->real, ptr->imag);        
}

complex* returnconjugate(complex* ptr) 
{
	complex* tempptr1;
	tempptr1=(complex*) malloc(sizeof(complex)); //malloc : heap ������ complex�ڷ����� ���� �����Ͱ����� ����(�����Ҵ�)
    tempptr1->real=ptr->real;
	tempptr1->imag=-1*ptr->imag;

	return tempptr1;
}

//�ΰ��� ���÷����ѹ��� ���ϴ� �Լ�

complex* addingcomplex(complex* ptr1, complex* ptr2)
{
	complex* tempptr2;
	tempptr2=(complex*) malloc(sizeof(complex));
	tempptr2->real=ptr1->real+ptr2->real;
	tempptr2->imag=ptr1->imag+ptr2->imag;

	return tempptr2;
}

int main(void)
{

	complex a;
	complex b;

	a.real=10;
	a.imag=20;

	b.real=20;
	b.imag=10;

	 complex *ptr1;
	 complex *ptr2;

	 ptr1=returnconjugate(&a);
	 printcomplex(ptr1);
     
	 //free(ptr);  // heap������ ������ �����Ͱ����� �Ҹ��Ű�� �Լ�
	 //printcomplex(ptr);  // �����Ͱ����� ��������Ƿ� ����� �� ����� ����� �� ����

	 ptr2=addingcomplex(&a,&b);
	 printcomplex(ptr2);

	 return 0;
}



