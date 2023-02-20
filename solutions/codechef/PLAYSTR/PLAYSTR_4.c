// DATE: 23/11/2022, 05:52:47
// PROBLEM NAME: Playing with Strings
// PROBLEM URL: https://www.codechef.com/problems/PLAYSTR
// PROBLEM DIFFICULTY RATTING: 1108
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1], r[n+1];
        int a[2] = {0}, b[2] = {0};
        
        scanf("%s", &s);
        scanf("%s", &r);
        
        for(int i=0; s[i] != '\0'; i++)
            a[s[i] - 48]++;
        
        for(int i=0; r[i] != '\0'; i++)
            b[r[i] - 48]++;
        
        if (a[0] == b[0] && a[1] == b[1]) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



