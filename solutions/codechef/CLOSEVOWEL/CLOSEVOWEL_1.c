// DATE: 21/02/2023, 06:24:07
// PROBLEM NAME: Closest Vowels
// PROBLEM URL: https://www.codechef.com/problems/CLOSEVOWEL
// PROBLEM DIFFICULTY RATTING: 1241
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        ans = 1;
        
        scanf("%s", s);
        
        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r')
                ans = (ans * 2)  % 1000000007;
        }

        printf("%d\n", ans);
        
        
    }
    
	return 0;
}



