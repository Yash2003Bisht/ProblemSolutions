// DATE: 18/03/2023, 07:56:11
// PROBLEM NAME: Plus Multiply
// PROBLEM URL: https://www.codechef.com/problems/PLMU
// PROBLEM DIFFICULTY RATTING: 1277
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.1M

#include <stdio.h>

long long int fact(int n){
    long long int value = 1;
    for (int i=1; i<=n; i++) value *= i;
    return value;
}

int main(void) {
    int t, n, count_2, count_0;
    long long int a, ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count_2 = 0, count_0 = 0;

        for (int i=0; i<n; i++){
            scanf("%lld", &a);
            
            if (a == 2)
                count_2++;
            else if (a == 0)
                count_0++;
        }
        
        ans = (count_2*(count_2-1))/2 + (count_0*(count_0-1))/2;

        printf("%lld\n", ans);
        
    }
    
	return 0;
}



