// DATE: 05/02/2024, 06:33:42
// PROBLEM NAME: Counting Pretty Numbers
// PROBLEM URL: https://www.codechef.com/problems/NUM239
// PROBLEM DIFFICULTY RATTING: 873
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t, l, r, n, count;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d%d", &l, &r);
	    count = 0;

	    for (int i=l; i<=r; i++){
	        n = i%10;

            if (n == 2 || n == 3 || n == 9)
                count++;

	    }

        printf("%d\n", count);

	}
	
}



