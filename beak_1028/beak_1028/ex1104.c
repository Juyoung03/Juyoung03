#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int c_sum(char num[]) {
	int sum = 0;

	for (int i = 0; i < strlen(num); i++) {
		sum += (num[i] - '0');
	}

	printf("%d\n", sum);
	return sum;
}

int i_sum(int n) {
	int sum = 0; 

	while (n > 0) {
		sum += (n % 10);
		n /= 10;
	}

	printf("%d\n", sum);
	return sum;
}

int main(void) {
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