// DATE: 18/01/2023, 07:04:22
// PROBLEM NAME: Sarthak and his Magic Grid
// PROBLEM URL: https://www.codechef.com/problems/GRIDXOR
// PROBLEM DIFFICULTY RATTING: 1227
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++)
                printf("1 ");
            printf("\n");
        }
        
    }
    
	return 0;
}



