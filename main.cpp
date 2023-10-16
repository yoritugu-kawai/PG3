#include<stdio.h>

int Recursive(int n) {
	if (n <= 1) {
		return 1;
	}
	return(n * Recursive(n-1));
}


int main() {
	int n = 8;
	int result;
	result = Recursive(n);
	printf("%d=%d\n", n, result);
	return 0;
}
