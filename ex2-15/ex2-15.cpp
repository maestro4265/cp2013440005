#include <stdio.h>
int main(void)
{
	int num=79;
	int tries=1;
	int guess;

	printf("숫자를 입력 : ");
	scanf_s("%d", &guess);

	do
	{
		{
		if(guess>num)
			printf("입력한 숫자가 정답보다 큽니다\n");
			
		else if(guess<num)
			printf("입력한 숫자가 정답보다 작습니다\n");
		}
		tries++;
		printf("숫자 재입력 : ");
		scanf_s("%d", &guess);
	}while(guess!=num);

	if(tries<=10)
		printf("쫌 하네? ㅋ");
	else
		printf("이걸 10트를 넘긴다고?;;\n");

	return 0;
}