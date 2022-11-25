// QUESTION URL: https://www.codechef.com/problems/EUREKA
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int ans = round(pow(0.143*n, n));
        printf("%d\n", ans);
    }
    
	return 0;
}



