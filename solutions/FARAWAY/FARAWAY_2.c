// QUESTION URL: https://www.codechef.com/problems/FARAWAY
// STATUS: accepted

#include <stdio.h>

int main(void) {
    long long int t ,n, m, a, b, total;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld%lld", &n, &m);
        total = 0;
        
        for (int i=0; i<n; i++){
            scanf("%lld", &a);
            if (a <= m/2){
                b = m;
            } else{
                b = 1;
            }
            
            total += abs(a-b);
            
        }
        
        printf("%lld\n", total);
        
        
    }
    
	return 0;
}



