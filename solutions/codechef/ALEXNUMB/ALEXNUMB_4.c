// DATE: 06/02/2023, 07:56:37
// PROBLEM NAME: Magic Pairs
// PROBLEM URL: https://www.codechef.com/problems/ALEXNUMB
// PROBLEM DIFFICULTY RATTING: 1245
// STATUS: wrong answer
// TIME: 0.03
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, value;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long a[n];
        value = n*(n-1) / 2;

        for (int i=0; i<n; i++) scanf("%lld", &a[i]);
        
        printf("%d\n", value);


    }
    
	return 0;
}



