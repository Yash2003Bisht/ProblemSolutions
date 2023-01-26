// QUESTION URL: https://www.codechef.com/problems/EXPIRY
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



