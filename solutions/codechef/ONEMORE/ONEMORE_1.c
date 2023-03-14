// DATE: 14/03/2023, 01:14:26
// PROBLEM NAME: Just One More Episode
// PROBLEM URL: https://www.codechef.com/problems/ONEMORE
// PROBLEM DIFFICULTY RATTING: 320
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        
        if (x > 24)
            printf("Yes\n");
        else
            printf("No\n");
    }
    
	return 0;
}



