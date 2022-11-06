// QUESTION URL: https://www.codechef.com/problems/FINALSUM
// STATUS: accepted

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t, n, q, l, r, arr, sum;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &q);
        sum = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &arr);
            sum += arr;
        }
        
        for (int i=0; i<q; i++){
            scanf("%d%d", &l, &r);
            if ((r-l+1)%2 != 0)
                sum++;
            
        }
        
        printf("%d\n", sum);
        
    }
	return 0;
}



