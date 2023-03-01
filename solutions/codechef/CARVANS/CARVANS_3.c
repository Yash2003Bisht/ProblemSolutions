// DATE: 01/03/2023, 08:07:58
// PROBLEM NAME: Carvans
// PROBLEM URL: https://www.codechef.com/problems/CARVANS
// PROBLEM DIFFICULTY RATTING: 1264
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.3M

#include <stdio.h>
#include <limits.h>

int main(void) {
    int t, n, count, min_speed;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int s[n];
        count = 0, min_speed = INT_MAX;
        
        for (int i=0; i<n; i++) scanf("%d", &s[i]);
        
        for (int i=0; i<n; i++){
            if (s[i] <= min_speed){
                count++;
                min_speed = s[i];
            }
        }
        
        printf("%d\n", count);
        
    }
    
	return 0;
}



