// DATE: 06/02/2023, 08:11:51
// PROBLEM NAME: Magic Pairs
// PROBLEM URL: https://www.codechef.com/problems/ALEXNUMB
// PROBLEM DIFFICULTY RATTING: 1245
// STATUS: accepted
// TIME: 0.06
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t;
    long int value, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%li", &n);
        long long a[n];

        for (int i=0; i<n; i++) scanf("%lld", &a[i]);
        
        value = (n*(n-1)) / 2;
        printf("%li\n", value);


    }
    
	return 0;
}



