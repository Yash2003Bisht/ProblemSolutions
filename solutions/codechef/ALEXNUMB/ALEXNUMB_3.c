// QUESTION URL: https://www.codechef.com/problems/ALEXNUMB
// STATUS: accepted
// TIME: 0.06
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    long int value, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%ld", &n);
        long long a[n];

        for (int i=0; i<n; i++) scanf("%lld", &a[i]);
        
        value = (n*(n-1)) / 2;
        printf("%li\n", value);


    }
    
	return 0;
}



