#include <stdio.h>
#include <stdlib.h>

int *prime(int *arr, int n) {
	int *arr2 = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		int num = *(arr + i);
		int isPrime = 1;
	
		if (num <= 1) {
		isPrime = 0;
		} else {
			for (int j = 2; j < num; j++) {
				if (num % j == 0) {
					isPrime = 0;
					break;
				}
			}
		}
	
		if (isPrime) {
			*(arr2 + i) = *(arr + i);
			continue;
		} else {
			*(arr2 + i) = 0;
		}
	}
	return arr2;
}

int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int *p = &n;
	int *arr = (int*)malloc(n * sizeof(int));
	int *ptr = arr;
	
	for (int i = 0; i < n; i++) {
		scanf("%d", (ptr + i));
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d", *(ptr + i));
	}
	
	printf("\n");
	
	int *ptr2 = prime(arr, n);
	for (int i = 0; i < n; i++) {
		if (*(ptr + i) != 0)
			printf("%d ", *(ptr2 + i));
	}
	printf("\n");
	
	free(arr);
	free(ptr2);
}
		
