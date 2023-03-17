// DATE: 16/03/2023, 07:21:50
// PROBLEM NAME: Weird Walk
// PROBLEM URL: https://www.codechef.com/problems/WWALK
// PROBLEM DIFFICULTY RATTING: 1274
// STATUS: accepted
// TIME: 0.19
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long int a[n], b[n], distance = 0, alice = 0, bob = 0;
        
        for (int i=0; i<n*2; i++){
            if (i<n)
                scanf("%ld", &a[i]);
            else
                scanf("%ld", &b[i-n]);
        }
        
        for (int i=0; i<n; i++){
            if (a[i] == b[i] && alice == bob){
                distance += a[i];
            } else {
                alice += a[i];
                bob += b[i];
            }
        }
        
        printf("%ld\n", distance);
        
    }
    
	return 0;
}


