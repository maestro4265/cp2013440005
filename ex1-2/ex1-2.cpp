#include <stdio.h>
int main(void)
{
	int a;
	int b;

	printf("Enter a number: ");
	scanf_s("%d", &a);

	b=a%2;

	if(b==0)
		printf("%d´Â Â¦¼ö", a);
	else
		printf("%d´Â È¦¼ö", b);

	return 0;
}