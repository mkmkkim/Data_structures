#include<stdio.h>

int number = 10;
int data[] = { 3,7,8,1,5,9,6,10,2,4 };

void quickSort(int* data, int start, int end) {
	if (start >= end) {//같으면 원소가 한 개인 경우
		return;
	}

	int key = start; //키는 첫번째 원소
	int i = start + 1;
	int j = end;
	int tmp;

	while (i <= j) {//엇갈릴 때까지 반복
		while (i <= end && data[i] <= data[key]) {//키 값보다 큰 값을 만날 때까지
			i++;
		}
		while (data[j] >= data[key] && j > start) {//키 값보다 작은 값을 만날 때까지
			j--;
		}
		if (i > j) {
			tmp = data[j];
			data[j] = data[key];
			data[key] = tmp;
		}
		else {
			tmp = data[j];
			data[j] = data[i];
			data[i] = tmp;
		}
	}
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main(void) {
	int i;
	quickSort(data, 0, number - 1);
	for (int i = 0; i < number; i++) {
		printf("%d ", data[i]);
	}
	return 0;
}