// DATE: 14/03/2023, 01:07:19
// PROBLEM NAME: Tour of King
// PROBLEM URL: https://www.codechef.com/problems/KNGTOR
// PROBLEM DIFFICULTY RATTING: 283
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, m, n, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        total = n*5 + m*7;
        printf("%d\n", total);
    }
    
	return 0;
}



