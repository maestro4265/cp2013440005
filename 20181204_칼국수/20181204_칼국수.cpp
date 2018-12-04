//����ü(structure) : �������+����

//���Ҽ� �ڷ��� ����

#include <stdio.h>

struct complex     //complex��� ���ο� datatype�� ����
{
	double real;
	double imag;
};   //�ݵ�� ����ü������ ���� ;���� �������� 
//typedef struct complex complex ;//�ڷ��� struct complex�� ������ complex�� �θ��ڴٰ� ����

//data type�� ��Ī ����
typedef int myinttype ;// �ڷ��� int�� ������ myinttype ��� �� �� �ֵ��� ����


typedef struct compex
{
	double real;
	double imag;
} compex;  //typedef�� ����ü������ �ѹ��忡 �ۼ�����


//compex number������ϴ� �Լ�
void printcomplex2(complex *ptr)  //����ü �����ͺ����� �Լ��ۼ�
{
	printf("%f+%fi\n", ptr->real, ptr->imag);
}

void printcomplex1(complex a)  //����ü ������ �Լ� �ۼ�(�� �Ⱦ��� ���)
{
	printf("%f+i%f\n", a.real, a.imag);  
}

void printcomplexconjugate(complex *ptr)
{
	printf("%f-%fi\n", ptr->real, ptr->imag);
}

complex returnconjugate(complex *ptr) //�ӷ����Ҽ��� ��ȯ�ϴ� �Լ�(����ü�� ��ȯ�ϴ� ���·� ����ϴ��� ���� ����)
{
	ptr->imag=-1*ptr->imag;

	return *ptr;
}

complex* returnconjugate1(complex* ptr) //����ü�����ͺ����� ��ȯ�ϴ� �Լ�(����ü�� ��ȯ�ϴ� ���·� ����ϴ��� ���� ����)
{
	ptr->imag=-1*ptr->imag;

	return ptr;
}

int main(void)
{

	struct complex a;   //���� ������ datatype�� ���� a�� ����
							  // a.real   a.imag�� ����ϸ� complex���� �� ���� �ڷ��� data�� ���� ���ٰ���

	myinttype count=10; //int���� �ڷ����� myinttype���� ����
	complex b;  //struct complex�ڷ����� complex�� ����
	

	a.real=10;
	a.imag=20;

	printf("%f+i%f\n", a.real, a.imag);  //�ڷ����� ���� douible�̹Ƿ� %f ���
	
	printcomplex1(a);

	//����ü ������ ����
	 complex *ptr;
	 ptr=&a;
	 ptr -> real=100;   // �����͸� �̿��ؼ� ������ ������ ���ٰ���  a.imag, a.real���� ����� ���
	 ptr -> imag=10;

	 printcomplex2(ptr);

	 printcomplexconjugate(ptr);

	 a=returnconjugate(ptr);

	 printcomplex1(a);

	 complex* c;

	 c=returnconjugate1(ptr); //���μ����� ����ü�����ͺ��� c�� returnconjugate1���� ��ȯ
	 printcomplex2(c);

	 return 0;