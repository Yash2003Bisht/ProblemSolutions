// DATE: 21/10/2022, 06:36:46
// PROBLEM NAME: Food Chain
// PROBLEM URL: https://www.codechef.com/problems/FODCHAIN
// PROBLEM DIFFICULTY RATTING: 1062
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t,e,k,count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &e, &k);
        count = 0;
        
        while(e != 0){
            count++;
            e /= k;
        }
        
        printf("%d\n", count);
        
    }
	return 0;
}



