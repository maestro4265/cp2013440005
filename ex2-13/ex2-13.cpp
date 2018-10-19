#include <stdio.h>
int main(void)
{
	int month;
	int days;
	int sum_days=0;

	printf("month 입력 : ");
	scanf_s("%d", &month);

	printf("days 입력 : ");
	scanf_s("%d", &days);

	switch(month)
	{
	case 1:
			sum_days=days;
			printf("sum of days = %d", sum_days);
			break;
	case 2:
			sum_days=31+days;
			printf("sum of days = %d", sum_days);
			break;
	case 3:
			sum_days=31+28+days;
			printf("sum of days = %d", sum_days);
			break;
	case 4:
			sum_days=31+28+31+days;
			printf("sum of days = %d", sum_days);
			break;
	case 5:
			sum_days=31+28+31+30+days;
			printf("sum of days = %d", sum_days);
			break;
	case 6:
			sum_days=31+28+31+30+31+days;
			printf("sum of days = %d", sum_days);
			break;
	case 7:
			sum_days=31+28+31+30+31+30+days;
			printf("sum of days = %d", sum_days);
			break;
	case 8:
			sum_days=31+28+31+30+31+30+31+days;
			printf("sum of days = %d", sum_days);
			break;
	case 9:
			sum_days=31+28+31+30+31+30+31+31+days;
			printf("sum of days = %d", sum_days);
			break;
	case 10:
			sum_days=31+28+31+30+31+30+31+31+30+days;
			printf("sum of days = %d", sum_days);
			break;
	case 11:
			sum_days=31+28+31+30+31+30+31+31+30+31+days;
			printf("sum of days = %d", sum_days);
			break;
	case 12:
			sum_days=31+28+31+30+31+30+31+31+30+31+30+days;
			printf("sum of days = %d", sum_days);
			break;
	}
	return 0;
}