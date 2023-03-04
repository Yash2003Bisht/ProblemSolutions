// DATE: 04/03/2023, 07:45:04
// PROBLEM NAME: Phone Prices
// PROBLEM URL: https://www.codechef.com/problems/S10E
// PROBLEM DIFFICULTY RATTING: 1269
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <stdbool.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, n, days;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int p[n];
        bool flag;
        days = 1;
        
        for (int i=0; i<n; i++)
            scanf("%d", &p[i]);
        
        for (int i=n-1; i >= 1; i--){
            flag = true;
            for (int j=i-1; j >= max(0, i-5); j--){
                if (p[i] >= p[j]){
                    flag = false;
                    break;
                }
            }
            
            if (flag)
                days++;
            
        }
        
        printf("%d\n", days);
        
    }
    
	return 0;
}



