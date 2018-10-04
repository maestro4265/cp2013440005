#include <stdio.h>
int main(void)
{
	int score;

	printf("Enter the score : ");
	scanf("%d", &score);

	if(score>=80)
		printf("Grade=A");
	else if(score>=60)
		printf("Grade=B");
	else if(score>=40)
		printf("Grade=C");
	else if(score>=20)
		printf("Grade=D");
	else 
		printf("Grade=E");

	return 0;
}