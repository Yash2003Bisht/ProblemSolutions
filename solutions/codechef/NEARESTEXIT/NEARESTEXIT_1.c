// DATE: 19/08/2023, 09:08:10
// PROBLEM NAME: Nearest Exit
// PROBLEM URL: https://www.codechef.com/problems/NEARESTEXIT
// PROBLEM DIFFICULTY RATTING: 585
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        
        if (x<=50)
            printf("LEFT\n");
        else
            printf("RIGHT\n");
        
    }
    
	return 0;
}



