// DATE: 13/10/2022, 05:55:24
// PROBLEM NAME: Card Removal
// PROBLEM URL: https://www.codechef.com/problems/REMOVECARDS
// PROBLEM DIFFICULTY RATTING: 1039
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t, n, max, *a;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        a = (int *) malloc(n * sizeof(int));
        
        for (int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        
        max = 0;
        
        for (int i=0; i<n; i++){
            int counter = 0;
            for (int j=0; j<n; j++){
                if (a[i] == a[j]){
                    counter++;
                }
            }
            
            if (counter > max){
                max = counter;
            }
        }
        
        printf("%d\n", n-max);
        
    }
	return 0;
}



