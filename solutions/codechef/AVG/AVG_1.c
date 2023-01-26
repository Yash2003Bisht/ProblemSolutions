// QUESTION URL: https://www.codechef.com/problems/AVG
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, k, v, sum, num, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &k, &v);
        sum = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &temp);
            sum += temp;
        }
        
        num = v*(k+n) - sum;
        
        if (num > 0 && num%k == 0) printf("%d\n", num/k);
        else printf("-1\n");
        
    }
	return 0;
}



