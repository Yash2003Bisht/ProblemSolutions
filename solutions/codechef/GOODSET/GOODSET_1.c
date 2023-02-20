// DATE: 27/01/2023, 07:23:09
// PROBLEM NAME: A Good Set
// PROBLEM URL: https://www.codechef.com/problems/GOODSET
// PROBLEM DIFFICULTY RATTING: 1231
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, num;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        num = 1;
        
        for (int i=0; i<n; i++){
            printf("%d ", num);
            num += 2;
        }
        
        printf("\n");
        
    }
    
	return 0;
}



