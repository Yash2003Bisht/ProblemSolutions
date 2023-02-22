// DATE: 22/02/2023, 08:21:44
// PROBLEM NAME: Chef and Demonetisation
// PROBLEM URL: https://www.codechef.com/problems/CHFMOT18
// PROBLEM DIFFICULTY RATTING: 1250
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t;
    long long int s, n, coin_count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &s, &n);
        coin_count = s/n;
        
        if (s%n == 0) printf("%lld\n", coin_count);
        else if ((s%n) % 2 == 1 && s%n != 1) printf("%d\n", coin_count+2);
        else printf("%d\n", coin_count+1);
        
    }
    
	return 0;
}



