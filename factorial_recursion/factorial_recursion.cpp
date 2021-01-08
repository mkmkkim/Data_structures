#include<stdio.h>
#include<time.h>

int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else {
		return n * factorial(n - 1);
	}
}

int main(void) {
	time_t start, end;
	double result;
	start = time(NULL);// 수행 시간 측정 시작
	int n;
	scanf_s("%d", &n);
	printf("%d\n", factorial(n));
	end = time(NULL); // 시간 측정 끝
	result = (double)(end - start); // 결과 출력
	printf("time : %f", result);
	return 0;
}