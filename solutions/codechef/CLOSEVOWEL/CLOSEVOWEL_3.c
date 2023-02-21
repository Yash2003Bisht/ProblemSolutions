// DATE: 21/02/2023, 06:19:46
// PROBLEM NAME: Closest Vowels
// PROBLEM URL: https://www.codechef.com/problems/CLOSEVOWEL
// PROBLEM DIFFICULTY RATTING: 1241
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n;
    long long int ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        ans = 1;
        
        scanf("%s", s);
        
        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r')
                ans *= 2;
        }

        printf("%lld\n", ans % 1000000007);
        
        
    }
    
	return 0;
}



