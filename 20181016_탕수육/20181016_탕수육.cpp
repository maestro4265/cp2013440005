#include <stdio.h>
int main(void)
{
	// (ctrl+k)+(ctrl+f) => 선택영역의 소스코드 재정렬
	// (ctrl+k)+(ctrl+c) => 선택영역의 소스코드를 주석으로 설정
	// (ctrl+k)+(ctrl+u) => 선택영역의 주석을 소스코드로 설정
	//int i;
	/*while(i<=10)
	{
		
		printf("%d", i);
		i++; // ++i로 써도 무방(side effect는 동일하기 때문에)
	}*/

	/*while(i<=10) printf("%d", i++); */ //위의 코드를 왼쪽과 같이 한문장으로 간략화 가능

	//1~100까지 3의 배수만 출력하는 프로그램
	/*while(i<=100)
	{
		if((i%3==0)&&(i%5==0))
		{printf("%d\n",i); }
		i++;
	}*/

	// 1~100까지 3의 배수를 제외하고 출력
		/*while(i<=100)
	{
		if(i%3==!0)
		{printf("%d\n",i);}
		i++;
	}*/

	//분기문: break문, continue문

	//키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램(사용자가 100을 입력시 종료)
	/*int num;

	while(1)
	{
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	if (num==100)
		break;
	if (num>=1000)
		printf("입력한 숫자가 1000보다 큽니다. : \n");
		continue;
	if(num%3==0)
	
		printf("%d는 3의 배수입니다. \n", num);
	else 
		printf("%d는 3의 배수가 아닙니다. \n",num);
	}*/

	//1~100까지의 합
	int sum=0;
	int i=0;

	for(i=0;i<=100;i++)
	{
		sum=sum+i;  //sum += i; 로 써도 무방 : 좌변의 변수에 저장된 값에 i를 더해서 다시 좌변의 변수에 저장
	}

	printf("%d", sum);
	
return 0;

}