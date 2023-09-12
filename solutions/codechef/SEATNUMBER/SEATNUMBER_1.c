// DATE: 12/09/2023, 09:27:29
// PROBLEM NAME: Bus  Seat Numbering
// PROBLEM URL: https://www.codechef.com/problems/SEATNUMBER
// PROBLEM DIFFICULTY RATTING: 613
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n <= 10)
            printf("Lower Double\n");
        else if (n <= 15)
            printf("Lower Single\n");
        else if (n <= 25)
            printf("Upper Double\n");
        else
            printf("Upper Single\n");
        
    }

	return 0;
}



