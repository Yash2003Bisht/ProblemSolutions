// DATE: 31/07/2023, 08:00:27
// PROBLEM NAME: Shortest Path in Binary Trees
// PROBLEM URL: https://www.codechef.com/problems/BINTREE
// PROBLEM DIFFICULTY RATTING: 1413
// STATUS: accepted
// TIME: 0.04
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, i, j, depth;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d %d", &i, &j);
        depth = 0;
        
        while(i != j){
            if (i>j)
                i /= 2;
            else
                j /= 2;
            depth++;
        }
        
        printf("%d\n", depth);

    }
    
	return 0;
}



