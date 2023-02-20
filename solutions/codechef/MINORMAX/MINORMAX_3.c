// DATE: 27/01/2023, 08:46:26
// PROBLEM NAME: Minimum or Maximum
// PROBLEM URL: https://www.codechef.com/problems/MINORMAX
// PROBLEM DIFFICULTY RATTING: 1233
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void){
    int t, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int b[n];
        
        for (int i=0; i<n; i++) scanf("%d", &b[i]);
        int max = b[0], min = b[0], count = 0;
        
        for (int i=0; i<n; i++){
            if (b[i] > max) max = b[i];
            if (b[i] < min) min = b[i];
            
            if (b[i] == max || b[i] == min) count++;
            
        }
        
        if (count == n) printf("YES\n");
        else printf("NO\n");
        
    }
    return 0;
}


