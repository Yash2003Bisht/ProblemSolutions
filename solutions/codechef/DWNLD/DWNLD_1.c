// DATE: 20/09/2022, 06:27:47
// PROBLEM NAME: Download file
// PROBLEM URL: https://www.codechef.com/problems/DWNLD
// PROBLEM DIFFICULTY RATTING: 1147
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int tc,n,k,t,d,i,r;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d%d", &n,&k);
        r=0;
        for (i=0; i<n; i++){
            scanf("%d%d", &t,&d);
            if (k>=t){
                k -= t;
            } else if (k<t){
                r += (t-k)*d;
                k = 0;
            }
        }
        printf("%d\n", r);
    }
	return 0;
}



