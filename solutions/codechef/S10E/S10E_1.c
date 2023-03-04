// DATE: 04/03/2023, 08:00:30
// PROBLEM NAME: Phone Prices
// PROBLEM URL: https://www.codechef.com/problems/S10E
// PROBLEM DIFFICULTY RATTING: 1269
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, days, min_value;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int p[n];
        min_value = 751, days = 0;

        for (int i=0; i<n; i++)
            scanf("%d", &p[i]);
        
        for (int i=0; i < 5; i++){
            if (min_value > p[i]){
                min_value = p[i];
                days++;
            }
        }
        
        for (int i=5; i<n; i++){
            if (p[i] < p[i-1] && p[i] < p[i-2] && \
                p[i] < p[i-3] && p[i] < p[i-4] && \
                p[i] < p[i-5])
                days++;
        }
        
        printf("%d\n", days);
        
    }
    
	return 0;
}



