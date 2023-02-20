// DATE: 01/10/2022, 06:07:10
// PROBLEM NAME: Danny Wants To Know
// PROBLEM URL: https://www.codechef.com/problems/DANOW
// PROBLEM DIFFICULTY RATTING: 1088
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    long long int n,q,l,r,*a,*b,total_strength;
    scanf("%lld%lld", &n,&q);
    a = (long long int*) malloc(sizeof(long long int)*n);
    b = (long long int*) malloc(sizeof(long long int)*n);
    
    for (int i=0; i<n*2; i++){
        if (i<=n-1){
            scanf("%lld", &a[i]);
        } else{
            scanf("%lld", &b[i-n]);
        }
    }
    
    
    while(q--){
        scanf("%lld%lld", &l,&r);
        total_strength = 0;
        for (int j=l-1; j<r; j++){
            total_strength += a[j]*b[j];
        }
        printf("%lld\n", total_strength);
    }
    
	return 0;
}



