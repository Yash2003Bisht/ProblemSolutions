// DATE: 06/02/2023, 08:42:01
// PROBLEM NAME: Dazzling AXNODR Challenge 
// PROBLEM URL: https://www.codechef.com/problems/AXNODR
// PROBLEM DIFFICULTY RATTING: 1246
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    long long int n;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld", &n);
        
        if (n%4 == 0) printf("%lld\n", n+3);
        else if (n%4 == 1) printf("%lld\n", n);
        else printf("3\n");
        
    }
    
	return 0;
}



