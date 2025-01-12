#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int hanoi(int from, int to, int n, int mid)
{
	if (n == 1) 
		printf("%d %d\n", from,to);
	else{
	
		hanoi(from, mid, n - 1, to); 
		printf("%d %d\n", from, to); 
		hanoi(mid, to, n - 1, from);
	}
	return 0;
}
int main(void) {
	int result, n,cnt = 1;
	scanf("%d", & n);
	result = pow(2, n) - 1;
	printf("%d\n", result);

	hanoi(1, 3, n, 2);
	return 0;
	

}
