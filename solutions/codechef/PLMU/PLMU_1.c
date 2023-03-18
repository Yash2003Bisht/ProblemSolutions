// DATE: 18/03/2023, 07:57:34
// PROBLEM NAME: Plus Multiply
// PROBLEM URL: https://www.codechef.com/problems/PLMU
// PROBLEM DIFFICULTY RATTING: 1277
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, count_2, count_0, ans;
    long long int a;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count_2 = 0, count_0 = 0;

        while(n--){
            scanf("%lld", &a);
            
            if (a == 2)
                count_2++;
            else if (a == 0)
                count_0++;
        }
        
        ans = (count_2*(count_2-1))/2 + (count_0*(count_0-1))/2;

        printf("%d\n", ans);
        
    }
    
	return 0;
}



