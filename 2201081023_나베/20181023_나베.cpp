# include <stdio.h>


	//함수 : 복잡한 코드를 하나의 함수로 정의하여 간단하게 사용가능
	//요약화(=추상화, abstraction) : 물질의 다양한 성질중 특별한 목적을 위한 성질을 추려내는 행동,   요약화 = 절차적 요약화 + 선언적 요약화
	//함수정의 : 함수선언 + 함수본체
	//함수선언 : 함수의 이름 선언, 함수의 반환값의 자료형(반환형), 매개변수 갯수 선언, 매개변수의 자료형 선언
	//변수범위(scope) : 소스코드 내에서 변수가 가질수 있는 유효한 범위
	//전역변수(global variable) : 유효한 범위가 모든 값을 가질 수 있는 변수
	


// 두 수의 sum을 출력하는 함수 & 두 수 사이의 모든 정수를 출력


int sum( int x, int y)
{
	int c;
	c=x+y;
	return c;
}

void aa(int x, int y)
{
	int i;
	int a, b;

	if(x>=y)
	{
		a=x;
		b=y;
	}
	else
	{
		a=y;
		b=x;
	}
	for(i=b;i<=a;i++)
		printf("%d ",i);

	return ;
}
int main ()
{
	int x;
	int y;
	int z;

	printf("첫번째 숫자 : ");
	scanf("%d",&x);
	printf("두번째 숫자 : ");
	scanf("%d",&y);

	z=sum(x,y);

	printf("%d\n", z);
	aa(x, y);

	return 0;
}