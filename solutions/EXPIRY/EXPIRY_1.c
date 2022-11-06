// QUESTION URL: https://www.codechef.com/problems/EXPIRY
// STATUS: accepted

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



