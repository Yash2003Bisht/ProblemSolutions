// DATE: 01/10/2022, 05:47:14
// PROBLEM NAME: Danny Wants To Know
// PROBLEM URL: https://www.codechef.com/problems/DANOW
// PROBLEM DIFFICULTY RATTING: 1088
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int n,q,l,r;
    scanf("%d%d", &n,&q);
    
    int a[n], b[n];
    
    for (int i=0; i<n*2; i++){
        if (i<=n-1){
            scanf("%d", &a[i]);
        } else{
            scanf("%d", &b[i-n]);;
        }
    }
    
    
    for (int i=0; i<q; i++){
        scanf("%d%d", &l,&r);
        int total_strength = 0;
        for (int j=l; j<=r; j++){
            total_strength += a[j-1]*b[j-1];
        }
        printf("%d\n", total_strength);
    }
    
	return 0;
}



