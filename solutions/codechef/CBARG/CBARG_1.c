// QUESTION URL: https://www.codechef.com/problems/CBARG
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int m1 = 0, m2 = 0, total;
        
        for (int i=0; i<n; i++){
            if (!m1){
                scanf("%lld", &m1);
                total = m1;
            } else
                scanf("%lld", &m2);
                
            if (m1 && m2){
                if (m1 < m2) total += m2 - m1;
                m1 = m2;
            }

        }

        printf("%lld\n", total);
        
    }
    
	return 0;
}



