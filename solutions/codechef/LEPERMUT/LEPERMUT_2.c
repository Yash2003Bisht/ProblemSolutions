// DATE: 24/02/2023, 08:32:13
// PROBLEM NAME: Little Elephant and Permutations
// PROBLEM URL: https://www.codechef.com/problems/LEPERMUT
// PROBLEM DIFFICULTY RATTING: 1261
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, inversion, local;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n];
        inversion = 0, local = 0;
        
        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);
        
        // inversions
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if (a[i] > a[j]){
                    inversion++;
                }
            }
        }
        
        // local inversions
        for (int i=0; i<n-1; i++){
            if (a[i] > a[i+1]){
                local++;
            }
        }
    
        if (inversion == local) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



