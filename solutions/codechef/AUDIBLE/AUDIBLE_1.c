// DATE: 09/10/2022, 02:05:01
// PROBLEM NAME: Audible Range
// PROBLEM URL: https://www.codechef.com/problems/AUDIBLE
// PROBLEM DIFFICULTY RATTING: 279
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        if (x >= 67 && x <= 45000){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
	return 0;
}



