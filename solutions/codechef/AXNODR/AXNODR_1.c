// QUESTION URL: https://www.codechef.com/problems/AXNODR
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    long long int n;
    
    scanf("%d\n", &t);
    
    while(t--){
        scanf("%lld", &n);
        
        if (n%4 == 0) printf("%lld\n", n+3);
        else if (n%4 == 1) printf("%lld\n", n);
        else printf("3\n");
        
    }
    
	return 0;
}



