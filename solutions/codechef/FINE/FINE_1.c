// DATE: 10/04/2023, 09:17:05
// PROBLEM NAME: Overspeeding Fine
// PROBLEM URL: https://www.codechef.com/problems/FINE
// PROBLEM DIFFICULTY RATTING: 335
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        
        if (x <= 70)
            printf("0\n");
        else if (x <= 100)
            printf("500\n");
        else 
            printf("2000\n");
        
    }
    
	return 0;
}



