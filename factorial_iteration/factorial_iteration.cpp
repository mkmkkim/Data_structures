#include<stdio.h>
#include<time.h>

int fact(int n) {
	int i;
	int result=1;
	if (n == 0 || n == 1) return 1;
	else {
		for (i = 1; i < n; i++) {
			result *= i;
		}
		return result * n;
	}
}

int main(void) {
	time_t start, end;
	double result;
	start = time(NULL);
	end = time(NULL);
	int n;
	scanf_s("%d", &n);
	printf("%d\n", fact(n));
	result = (double)(end - start);
	printf("time:%f", result);
	return 0;
}