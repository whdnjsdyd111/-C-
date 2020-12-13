#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 택시비 요금 계산 프로그램

int main()
{
	double fast; // 시속
	double distance; // 거리
	int pay = 3000; // 요금, 일단 기본 요금이로 지정
	double extraCharge; // 추가요금
	int extCh = 1; // 할증
	printf("시속(정수)을 입력: "), scanf("%lf", &fast);
	printf("거리(실수)를 입력: "), scanf("%lf", &distance);

	double hour = distance / fast; // 시간 = 거리 / 속도

	if (hour < 1)
		printf("걸린 시간: %.1f분 \n", hour * 60); // 시간이 1보다 작으면 분으로 출력해주기
	else
		printf("걸린 시간: %.1f시간 \n", hour);

	if (distance < 2)
		printf("요금: %d원 \n", pay);
	else{
		if (fast < 15)
			extraCharge = (((distance - 2) / fast) * 3600) / 35 * 100;
		else
			extraCharge = ((distance * 1000 - 2000) / 142) * 100;
		/* 추가요금은 142m 마다 100원씩 추가가 된다고 한다.
		입력받은 키로수를 미터화해서 2000m를 빼주고 142로 나눈 몫에 100원을 곱해줌 */
	}
	if (distance > 50){
		printf("당신은 다른 지역으로 이동했습니다. \n20%추가요금 발생\n");
		extCh = 1.2;
	}
	printf("요금: %.1f원 \n", (pay + extraCharge)*extCh);
	return 0;
}