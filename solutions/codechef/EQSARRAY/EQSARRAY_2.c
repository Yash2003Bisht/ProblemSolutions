// DATE: 19/11/2022, 07:22:19
// PROBLEM NAME: Nahaane Jaa
// PROBLEM URL: https://www.codechef.com/problems/EQSARRAY
// PROBLEM DIFFICULTY RATTING: 1280
// STATUS: accepted
// TIME: 0.07
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    long long int t, n, k, a;
    int flag;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld%lld", &n,&k);
        flag = 0;
        
        for (int i=0; i<n; i++){
            scanf("%lld", &a);
            if (a == k && ((i != n-1 && n > 1) || n == 1)) flag = 1;
        }

        if (flag) printf("Yes\n");
        else printf("No\n");
        
    }
    
	return 0;
}



