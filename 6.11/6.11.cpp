#include <stdio.h>

// 冒泡排序函數
void bubbleSort(int array[], int size) {
	int i, j;
	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				// 交換元素
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

// 主函數
int main() {
	int array[] = { 64, 25, 12, 22, 11 };
	int size = sizeof(array) / sizeof(array[0]);

	printf("未排序數列：\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	bubbleSort(array, size);

	printf("排序後數列：\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}
