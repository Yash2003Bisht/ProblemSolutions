// QUESTION URL: https://www.codechef.com/problems/DANOW

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



