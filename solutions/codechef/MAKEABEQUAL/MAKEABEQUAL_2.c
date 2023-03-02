// DATE: 02/03/2023, 01:46:03
// PROBLEM NAME: Make A and B equal
// PROBLEM URL: https://www.codechef.com/problems/MAKEABEQUAL
// PROBLEM DIFFICULTY RATTING: 1264
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    long long int t, n;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld", &n);
        long long int a[n], b[n], a_count = 0, b_count = 0;

        for (int i=0; i<n*2; i++){
            if (i < n)
                scanf("%lld", &a[i]);
            else 
                scanf("%lld", &b[i-n]);
        }
        
        for (int i=0; i<n; i++){
            if (a[i] > b[i])
                a_count += a[i] - b[i];
            else
                b_count += b[i] - a[i];
        }
        
        if (a_count == b_count)
            printf("%lld\n", b_count);
        else
            printf("-1\n");

    }
    
	return 0;
}



