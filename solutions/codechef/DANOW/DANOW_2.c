// DATE: 01/10/2022, 06:03:41
// PROBLEM NAME: Danny Wants To Know
// PROBLEM URL: https://www.codechef.com/problems/DANOW
// PROBLEM DIFFICULTY RATTING: 1088
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    long int n,q,l,r;
    scanf("%ld%ld", &n,&q);
    
    long long int a[n], b[n];
    
    for (int i=0; i<n*2; i++){
        if (i<=n-1){
            scanf("%lld", &a[i]);
        } else{
            scanf("%lld", &b[i-n]);
        }
    }
    
    
    while(q--){
        scanf("%ld%ld", &l,&r);
        long long int total_strength = 0;
        for (int j=l-1; j<r; j++){
            total_strength += a[j]*b[j];
        }
        printf("%lld\n", total_strength);
    }
    
	return 0;
}



