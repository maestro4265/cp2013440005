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
	tempptr1=(complex*) malloc(sizeof(complex)); //malloc : heap 영역에 complex자료형을 위한 데이터공간을 생성(동적할당)
    tempptr1->real=ptr->real;
	tempptr1->imag=-1*ptr->imag;

	return tempptr1;
}

//두개의 컴플렉스넘버를 합하는 함수

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
     
	 //free(ptr);  // heap영역에 생성한 데이터공간을 소멸시키는 함수
	 //printcomplex(ptr);  // 데이터공간이 사라졌으므로 제대로 된 결과를 출력할 수 없음

	 ptr2=addingcomplex(&a,&b);
	 printcomplex(ptr2);

	 return 0;
}



