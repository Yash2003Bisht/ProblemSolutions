// DATE: 14/08/2023, 07:17:56
// PROBLEM NAME: Divide the Cake
// PROBLEM URL: https://www.codechef.com/problems/ANUDTC
// PROBLEM DIFFICULTY RATTING: 1426
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.8M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (360%n == 0)
            printf("y ");
        else
            printf("n ");
            
        if (n <= 360)
            printf("y ");
        else
            printf("n ");
            
        if (n <= 26)
            printf("y\n");
        else
            printf("n\n");

    }
    
	return 0;
}



