// DATE: 14/02/2024, 09:47:09
// PROBLEM NAME: Chef and Battery 
// PROBLEM URL: https://www.codechef.com/problems/FIFTYPE
// PROBLEM DIFFICULTY RATTING: 901
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, n, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count = 0;
        
        while (n != 50){
            if (n > 50)
                n -= 3;
            else
                n += 2;
            count++;
        }

        printf("%d\n", count);

    }
    
}



