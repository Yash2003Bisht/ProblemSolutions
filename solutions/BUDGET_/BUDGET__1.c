// QUESTION URL: https://www.codechef.com/problems/BUDGET_
// STATUS: accepted

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



