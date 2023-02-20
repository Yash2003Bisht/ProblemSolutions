// DATE: 15/09/2022, 07:37:05
// PROBLEM NAME: The One Where It All Began
// PROBLEM URL: https://www.codechef.com/problems/S01E01
// PROBLEM DIFFICULTY RATTING: 1106
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if (n>=21){  // 1 + 2 + 3 + 4 + 5 + 6 = 21 --> smallest possible number
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
	return 0;
}



