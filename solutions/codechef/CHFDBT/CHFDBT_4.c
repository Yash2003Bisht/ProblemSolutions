// QUESTION URL: https://www.codechef.com/problems/CHFDBT
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        if (n%2 == 0) count = n/2;
        else count = n/2 + 1;
        
        printf("%d\n", count);
        
    }
    
	return 0;
}



