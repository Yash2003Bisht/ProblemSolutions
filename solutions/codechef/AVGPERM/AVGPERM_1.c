// DATE: 30/06/2023, 08:35:29
// PROBLEM NAME: Average Permutation
// PROBLEM URL: https://www.codechef.com/problems/AVGPERM
// PROBLEM DIFFICULTY RATTING: 1401
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        for (int i=n; i>1; i -= 2)
            printf("%d ", i);
        
        if (n%2 == 0){
            for (int i=1; i<n; i += 2)
                printf("%d ", i);
        } else{
            printf("1 ");
            for (int i=2; i<n; i += 2)
                printf("%d ", i);
        }
        
        printf("\n");
        
    }
    
	return 0;
}



