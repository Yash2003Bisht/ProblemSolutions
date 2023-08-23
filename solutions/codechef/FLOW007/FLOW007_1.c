// DATE: 23/08/2023, 09:38:20
// PROBLEM NAME: Reverse The Number
// PROBLEM URL: https://www.codechef.com/problems/FLOW007
// PROBLEM DIFFICULTY RATTING: 588
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main() {
	int t, rem, n, sum;
	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);
		sum = 0;

		while(n!=0) {
			rem = n % 10;
			sum = sum * 10 + rem;
			n = n / 10;
		}

		printf("%d\n", sum);
		sum = 0;

	}

	return 0;

}


