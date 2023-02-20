// DATE: 10/02/2023, 07:27:31
// PROBLEM NAME: Split the Str Ing
// PROBLEM URL: https://www.codechef.com/problems/SPLITIT
// PROBLEM DIFFICULTY RATTING: 1251
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, flag, i;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        
        for (i=0; i<n-1; i++){
            if (s[n-1] == s[i]) break;
        }
        
        if (i != n-1) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



