#include<stdio.h>

int main(void) {
	int i, tmp, j = 0;
	int arr[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	for (i = 0; i < 10; i++) {
		for (j = i; j < 10; j++) {
			if (arr[i] > arr[j]) {
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	for (j = 0; j < 10; j++)
		printf("%d ", arr[j]);

	return 0;
}