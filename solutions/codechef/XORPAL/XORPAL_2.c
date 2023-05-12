// DATE: 12/05/2023, 08:31:28
// PROBLEM NAME: Xor Palindrome
// PROBLEM URL: https://www.codechef.com/problems/XORPAL
// PROBLEM DIFFICULTY RATTING: 1339
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, O, I;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        I = 0, O = 0;

        for (int i=0; i<n; i++){
            if (s[i] == '1')
                I++;
            else
                O++;
        }
        
        if (I%2 == 0 || O%2 == 0 || I == O)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}


