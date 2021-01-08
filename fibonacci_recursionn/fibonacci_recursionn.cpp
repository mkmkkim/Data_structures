#include<stdio.h>
#include<time.h>

int Fibo(int n) {
	if (n > 2) {
		return Fibo(n-1) + Fibo(n-2);
	}
	else if (n == 1 || n == 2) return 1;
	else return 0;
}

int main(void) {
	clock_t start, end;
	float result;
	start = clock();
	int i, n;
	scanf_s("%d", &n);
	for (i = 1; i < n+1; i++) {
		printf("%d ", Fibo(i));
	}
	end = clock();
	result = (float)(end - start);
	printf("\nTime : %f ms", result);
	return 0;
}