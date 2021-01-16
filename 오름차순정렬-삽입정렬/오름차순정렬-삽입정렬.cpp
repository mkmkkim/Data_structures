#include<stdio.h>

int main(void) {
	int i, j, tmp;
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (i = 0; i < 9; i++) {
		j = i;
		while (j>=0 && arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				j--;
			}
		}
	for (j = 0; j < 10; j++) {
		printf("%d ", arr[j]);
	}
	return 0;
}