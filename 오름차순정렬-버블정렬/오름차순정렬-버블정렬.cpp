#include<stdio.h>

int main(void) {
	int i, tmp, j = 0;
	int arr[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 9-i; j++) {//그냥 9보다 9-i를 하면 횟수를 줄일 수 있다.
			if (arr[j] > arr[j+1]) {
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}		}
	}
	for (j = 0; j < 10; j++)
		printf("%d ", arr[j]);

	return 0;
}