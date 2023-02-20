// DATE: 07/11/2022, 06:22:53
// PROBLEM NAME: Far Away
// PROBLEM URL: https://www.codechef.com/problems/FARAWAY
// PROBLEM DIFFICULTY RATTING: 1090
// STATUS: wrong answer
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t ,n, m, a, b, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        total = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (a <= m/2){
                b = m;
            } else{
                b = 1;
            }
            
            total += abs(a-b);
            
        }
        
        printf("%d\n", total);
        
        
    }
    
	return 0;
}



