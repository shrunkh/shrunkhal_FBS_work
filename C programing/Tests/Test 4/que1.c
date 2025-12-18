#include <stdio.h>

void print_factors(int n) {
	printf("Factors of %d: ", n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main() {
	int start = 10, end = 15;


	for (int num = start; num <= end; num++) {
		print_factors(num);
	}

}
