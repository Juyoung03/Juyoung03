#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int arr[5] = { 0, 1, 2, 3, 4 };
	int* ptr = arr;

	printf("%s\n", ptr == arr ? "true" : "false");

	printf("%d\n", *ptr);
	printf("%d\n", *(++ptr));
	printf("%d\n", *(ptr++));
	printf("%d\n", *ptr);


	return 0;
}