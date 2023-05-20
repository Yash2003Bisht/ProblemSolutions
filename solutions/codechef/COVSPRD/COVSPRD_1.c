// DATE: 20/05/2023, 08:53:39
// PROBLEM NAME: Covid Spread
// PROBLEM URL: https://www.codechef.com/problems/COVSPRD
// PROBLEM DIFFICULTY RATTING: 1346
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define min(a, b)(a>b?b:a)

int main(void) {
    int t;
    long long n, d, ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &n, &d);
        ans = 1;

        for (int i=0; i<d; i++){
            if (i < 10)
                ans = ans*2;
            else
                ans = ans*3;
            
            if (ans > n)
                break;
            
        }
        
        printf("%lld\n", min(n, ans));
        
    }
    
	return 0;
}



