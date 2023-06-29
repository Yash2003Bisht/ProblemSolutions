// DATE: 29/06/2023, 04:50:59
// PROBLEM NAME: Janmansh and Assignments
// PROBLEM URL: https://www.codechef.com/problems/JASSIGNMENTS
// PROBLEM DIFFICULTY RATTING: 513
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        
        if (x+3 <= 10)
            printf("Yes\n");
        else
            printf("No\n");
        
    }
    
	return 0;
}



