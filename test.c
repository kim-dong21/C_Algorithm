#include <stdio.h>
#include <math.h>

main()
{
	double number;
	printf("숫자를 입력하세요 : ");
	scanf("%lf", &number);

	printf("입력하신 %lf의 제곱근 = %lf 입니다\n", number, sqrt(number));

}
