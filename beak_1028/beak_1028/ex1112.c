#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main(void) {
//	int x;
//	int cnt = 0, length = 64;
//	//int arr[] = { 64, 32, 16, 8, 4, 2, 1 };
//
//	scanf("%d", &x);
//
//	//int i = 0;
//
//	while (1) { //x = 23
//		if (x < length) { //23 < 64
//			length /= 2; //length = 64, 32, 16, 8, 4, 2, 1
//		}
//
//		else { //x가 length 보다 크면
//			x -= length; // x = 23 - 16 = 7, 7 - 4 = 3, 3 - 2 = 1, 1 - 1 = 0
//			cnt += 1; //4
//		}
//
//		if (x <= 0) break;
//	}
//
//	printf("%d", cnt);
//
//	return 0;
//}


#include <stdio.h>
#include <string.h>

int c_sum(char num[]) {
	int sum = 0;

	for (int i = 0; i < strlen(num); i++) {
		sum += (num[i] - '0');
	}

	return sum;
}

int i_sum(int n) {
	int sum = 0;

	while (n > 0) {
		sum += (n % 10);
		n /= 10;
	}

	return sum;
}

int main(void) { //3의 배수
	char num[1000001];
	int cnt = 0;

	scanf("%s", num);

	int a = 0;

	int m = c_sum(num);
	cnt += 1;

	if (m == 3 || m == 6 || m == 9) {
		printf("%d\nYES", cnt);
		return 0;
	}
	else if (m < 10) {
		printf("%d\nNO", cnt);
		return 0;
	}

	while (1) {
		int n = i_sum(m);
		cnt += 1;
		if (n < 10 && n % 3 == 0) {
			a = 1;
			break;
		}
		else if (n < 10) break;

		m = n;

	}

	if (a == 1) printf("%d\nYES", cnt);
	else printf("%d\nNO", cnt);

	return 0;
}