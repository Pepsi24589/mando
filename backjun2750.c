#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
int N, count[1000] = { 0 };
int i = 0,j = 0;
int tmp = 0;
	scanf("%d", &N);
	for (j = 0; j < N; j++) {
		scanf("%d", &count[j]);
	}
	for (j = 0; j < N; j++) {
		for (i = 0; i < N - 1; i++) {
			if (count[i + 1] < count[i]) {
				tmp = count[i + 1];
				count[i + 1] = count[i];
				count[i] = tmp;
			}
		}
	}		
	for (j = 0; j < N; j++) {
		printf("%d\n", count[j]);
	}
	return 0;
}