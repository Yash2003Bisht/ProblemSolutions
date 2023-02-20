// DATE: 28/10/2022, 06:27:44
// PROBLEM NAME: Make Multiple
// PROBLEM URL: https://www.codechef.com/problems/MAKEMULTIPLE
// PROBLEM DIFFICULTY RATTING: 1163
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        
        int diff = b-a; 
        
        if (diff == 0 || diff >= a)
            printf("YES\n");
        else
            printf("NO\n");
    }
	return 0;
}



