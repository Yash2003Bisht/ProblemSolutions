// DATE: 22/12/2022, 06:14:32
// PROBLEM NAME: Minimum distance between 1s
// PROBLEM URL: https://www.codechef.com/problems/MINDIST1
// PROBLEM DIFFICULTY RATTING: 1335
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, odd, even;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", &s);
        odd = 0, even = 0;
        
        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == '1'){
                if ((i+1)%2 == 0) even = 1;
                else odd = 1;
            }
            
            if (odd && even) break;
        }
        
        if (odd && even) printf("%d\n", 1);
        else printf("%d\n", 2);
        
    }
	return 0;
}



