// DATE: 09/12/2022, 07:59:54
// PROBLEM NAME: Make Money
// PROBLEM URL: https://www.codechef.com/problems/MAKEMONEY
// PROBLEM DIFFICULTY RATTING: 1101
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, x, c, a, counter;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &x, &c);
        counter = 0;

        for(int i=0; i<n; i++){
            scanf("%d", &a);
            
            if (x - a > c){
                a = x - c;
            }
            
            counter += a;
        }
        
        printf("%d\n", counter);
        
    }
    
	return 0;
}


