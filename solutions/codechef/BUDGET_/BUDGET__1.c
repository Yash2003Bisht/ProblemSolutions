// DATE: 10/09/2022, 01:15:01
// PROBLEM NAME: Monthly Budget
// PROBLEM URL: https://www.codechef.com/problems/BUDGET_
// PROBLEM DIFFICULTY RATTING: 456
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,m;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&m);
        if (m*30 <= n){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
	return 0;
}



