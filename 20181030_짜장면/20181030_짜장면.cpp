#include <stdio.h>
//int main(void)
//{
//	// array(배열) : 같은 자료형을 가진 변수들의 집합
//	// 1: 배열의 이름 선언
//	// 2: 각 배열의 요소의 자료형
//	// 3: 배열의 길이 선언 
//
//
//	//int x; 
//	//int a[4]; //int형을 가진 a를 4개선언,  len=4;라는 변수를 선언해서 a[len]으로 배열선언도 가능
//	//int i;
//	//a[0]=20;
//	//a[1]=1;
//	//a[2]=3;
//	//a[3]=2000;
//
//	int a[4]={2, 20, 200, 2000}; //array초기화 방법
//	int arr[]={3, 30, 300}; //array length를 선언하지 않은 경우 선언한 data 갯수만큼 length를 자동으로 생성
//	int i;
//	for(i=0;i<4;i++)
//	{
//	printf("%d\n",a[i]);
//	printf("%d\n", arr[i]); // arr는 길이가 3이기 때문에 i가 3일 때 에러발생
//	}

	// 배열을 매개변수로 함수에 입력하는 방법
	// 함수 print_array 생성
	// 입력이 array, 반환형은 없음
	// 부수효과 : 화면에 array element를 출력
	

	void print_array(int arr[], int length) // 배열의 이름과 배열의 길이를 같이 매개변수로 잡아야 임의의 길이의 배열을 입력가능
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



