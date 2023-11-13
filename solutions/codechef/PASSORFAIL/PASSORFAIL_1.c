// DATE: 13/11/2023, 09:12:27
// PROBLEM NAME: Pass or Fail
// PROBLEM URL: https://www.codechef.com/problems/PASSORFAIL
// PROBLEM DIFFICULTY RATTING: 730
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, x, p;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &n, &x, &p);

        if (x*3 - (n-x) >= p)
            printf("PASS\n");
        else
            printf("FAIL\n");

    }

	return 0;
}



