// DATE: 28/04/2023, 07:35:10
// PROBLEM NAME: Possible GCD
// PROBLEM URL: https://www.codechef.com/problems/DISTGCD
// PROBLEM DIFFICULTY RATTING: 1297
// STATUS: accepted
// TIME: 0.09
// MEMORY: 5.4M

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int t, a, b, diff, count, counter;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        diff = abs(a-b), count = 0;

        if (diff != 1){
            counter = sqrt(diff);
            for (int i=1; i<=counter; i++){
                if (diff%i == 0){
                    if (i*i == diff)
                        count++;
                    else
                        count += 2;
                }
            }
    
            printf("%d\n", count);
        } else{
            printf("1\n");
        }
        
    }
    
	return 0;
}



