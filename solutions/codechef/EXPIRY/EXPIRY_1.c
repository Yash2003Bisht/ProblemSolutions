// DATE: 10/09/2022, 01:10:22
// PROBLEM NAME: Expiring Bread
// PROBLEM URL: https://www.codechef.com/problems/EXPIRY
// PROBLEM DIFFICULTY RATTING: 440
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,m,k;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &n,&m,&k);
        if (m*k >= n){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
	return 0;
}



