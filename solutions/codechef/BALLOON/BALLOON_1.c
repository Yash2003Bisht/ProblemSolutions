// DATE: 27/12/2022, 06:44:23
// PROBLEM NAME: ICPC Balloons
// PROBLEM URL: https://www.codechef.com/problems/BALLOON
// PROBLEM DIFFICULTY RATTING: 1205
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n];
        
        for (int i=0; i<n; i++) scanf("%d", &a[i]);
        
        for (int i=n-1; i>=0; i--){
            if (a[i] <= 7){
                printf("%d\n", i+1);
                break;
            }
        }
    }
	return 0;
}



