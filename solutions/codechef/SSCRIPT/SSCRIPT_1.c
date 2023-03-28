// DATE: 28/03/2023, 08:37:34
// PROBLEM NAME: Strong Language
// PROBLEM URL: https://www.codechef.com/problems/SSCRIPT
// PROBLEM DIFFICULTY RATTING: 1291
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, k, flag, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        char s[n+1];
        flag = 0, count = 0;
        
        scanf("%s", s);
        
        for (int i=0; i<n; i++){
            if (s[i] == '*')
                count++;
            else
                count = 0;
            
            if (count == k){
                flag = 1;
                break;
            }

        }
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



