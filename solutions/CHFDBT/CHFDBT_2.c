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
        count = n/2 + n%2;
        
        printf("%d\n", count);
        
    }
    
	return 0;
}



