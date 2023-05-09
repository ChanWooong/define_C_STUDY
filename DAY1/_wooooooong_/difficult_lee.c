#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void sortWithoutDuplication(int arry[], int* size);

int main() {
	int range = 10;
	int arr[10];

	for (int i = 0; i < range; i++) {
		scanf("%d", &arr[i]);
	}
	sortWithoutDuplication(arr, &range);
	for (int i = 0; i < range; i++) {
		printf("%d ", arr[i]);
	}
	printf("\nthe size is : [%d]", range);
}

void sortWithoutDuplication(int arry[], int* size) {
	int temp;
	int cnt = 0;

	for (int j = 0; j < *size; j++) {
		for (int k = 0; k < *size; k++) {
			if (arry[j] < arry[k]) {
				temp = arry[j];
				arry[j] = arry[k];
				arry[k] = temp;
			}
		}
	}

	for (int t = 0; t < (*size) - 1; t++) {
		if (arry[t] == arry[t + 1]) {
			for (int l = t + 1; l < (*size) - 1; l++) {
				arry[l] = arry[l + 1];
			}
			(*size)--;
			t--;
		}
	}

}
