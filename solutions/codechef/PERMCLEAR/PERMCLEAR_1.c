// DATE: 18/04/2023, 08:28:59
// PROBLEM NAME: Permutation Clear
// PROBLEM URL: https://www.codechef.com/problems/PERMCLEAR
// PROBLEM DIFFICULTY RATTING: 1308
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, k, b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], counter[n];
        
        for (int i=0; i<n; i++){
            scanf("%d", &a[i]);
            counter[i] = 0;
        }
        
        scanf("%d", &k);
        for (int i=0; i<k; i++){
            scanf("%d", &b);
            counter[b-1]++;
        }
        
        for (int i=0; i<n; i++){
            if (counter[a[i]-1] == 0)
                printf("%d ", a[i]);
        }
        
        printf("\n");
        
    }
    
	return 0;
}



