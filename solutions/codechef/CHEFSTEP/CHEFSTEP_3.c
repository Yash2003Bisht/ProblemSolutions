// DATE: 29/11/2022, 06:36:58
// PROBLEM NAME: Chef and Steps
// PROBLEM URL: https://www.codechef.com/problems/CHEFSTEP
// PROBLEM DIFFICULTY RATTING: 1110
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

#include <stdio.h>

int main(void) {
    int t, n, k, d;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        char s[n+1];
        
        for (int i=0; i<n; i++){
            scanf("%d", &d);
            
            if (d%k == 0) s[i] = '1';
            else s[i] = '0';
        }
        
        printf("%s\n", s);
        
    }
    
	return 0;
}



