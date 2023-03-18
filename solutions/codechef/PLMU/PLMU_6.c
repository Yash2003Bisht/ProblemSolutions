// DATE: 18/03/2023, 07:22:44
// PROBLEM NAME: Plus Multiply
// PROBLEM URL: https://www.codechef.com/problems/PLMU
// PROBLEM DIFFICULTY RATTING: 1277
// STATUS: partially accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int a[n];
        count = 0;

        for (int i=0; i<n; i++)
            scanf("%lld", &a[i]);
        
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if (a[i]+a[j] == a[i]*a[j])
                    count++;
            }
        }
        
        printf("%d\n", count);
        
    }
    
	return 0;
}



