//구조체(structure) : 구성요소+관계

//복소수 자료형 정의

#include <stdio.h>

struct complex     //complex라는 새로운 datatype을 정의
{
	double real;
	double imag;
};   //반드시 구조체선언의 끝은 ;으로 끝나야함 
//typedef struct complex complex ;//자료형 struct complex를 앞으로 complex로 부르겠다고 선언

//data type의 별칭 선언
typedef int myinttype ;// 자료형 int를 앞으로 myinttype 라고도 쓸 수 있도록 선언


typedef struct compex
{
	double real;
	double imag;
} compex;  //typedef와 구조체선언은 한문장에 작성가능


//compex number를출력하는 함수
void printcomplex2(complex *ptr)  //구조체 포인터변수로 함수작성
{
	printf("%f+%fi\n", ptr->real, ptr->imag);
}

void printcomplex1(complex a)  //구조체 변수로 함수 작성(잘 안쓰는 방법)
{
	printf("%f+i%f\n", a.real, a.imag);  
}

void printcomplexconjugate(complex *ptr)
{
	printf("%f-%fi\n", ptr->real, ptr->imag);
}

complex returnconjugate(complex *ptr) //켤레복소수를 반환하는 함수(구조체를 반환하는 형태로 사용하는일 거의 없음)
{
	ptr->imag=-1*ptr->imag;

	return *ptr;
}

complex* returnconjugate1(complex *ptr) //구조체포인터변수를 반환하는 함수(구조체를 반환하는 형태로 사용하는일 거의 없음)
{
	ptr->imag=-1*ptr->imag;

	return ptr;
}

int main(void)
{

	struct complex a;   //새로 정의한 datatype의 변수 a를 선언
							  // a.real   a.imag를 사용하면 complex내의 두 개의 자료형 data에 따로 접근가능

	myinttype count=10; //int형의 자료형을 myinttype으로 선언
	complex b;  //struct complex자료형을 complex로 선언
	

	a.real=10;
	a.imag=20;

	printf("%f+i%f\n", a.real, a.imag);  //자료형이 각각 douible이므로 %f 사용
	
	printcomplex1(a);

	//구조체 포인터 변수
	 complex* ptr;
	 ptr=&a;
	 ptr -> real=100;   // 포인터를 이용해서 각각의 변수에 접근가능  a.imag, a.real보다 빈번히 사용
	 ptr -> imag=10;

	/* printcomplex2(ptr);

	 printcomplexconjugate(ptr);

	 a=returnconjugate(ptr);

	 printcomplex1(a);*/

	 complex* c;

	 c=returnconjugate1(ptr); //새로선언한 구조체포인터변수 c에 returnconjugate1값을 반환
	 printcomplex2(c);

	 return 0;
}
