// DATE: 31/08/2023, 12:03:30
// PROBLEM NAME: Good Program
// PROBLEM URL: https://www.codechef.com/problems/NIBBLE
// PROBLEM DIFFICULTY RATTING: 593
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        
        if (x%4 == 0)
            printf("Good\n");
        else
            printf("Not Good\n");
        
    }
    
	return 0;
}



