// QUESTION URL: https://www.codechef.com/problems/APPENDOR
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    long long int t, n, y, a, total;
    scanf("%lld", &t);

    while(t--){
        scanf("%lld%lld", &n, &y);
        total = 0;

        for (int i=0; i<n; i++){
            scanf("%lld", &a);
            total |= a;
        }
        
        a = y - total;
        total = total|a;
        
        if (a >= 0 && total == y) printf("%lld\n", a);
        else printf("-1\n");
        
    }
    
	return 0;
}



