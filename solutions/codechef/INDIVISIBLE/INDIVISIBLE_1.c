// DATE: 29/11/2023, 09:44:04
// PROBLEM NAME: Indivisible
// PROBLEM URL: https://www.codechef.com/problems/INDIVISIBLE
// PROBLEM DIFFICULTY RATTING: 787
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, a, b, c;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        
        for (int i=2; i<100; i++){
            if (a%i != 0 && b%i != 0 && c%i != 0){
                printf("%d\n", i);
                break;
            }
        }
        
    }
    
	return 0;
}



