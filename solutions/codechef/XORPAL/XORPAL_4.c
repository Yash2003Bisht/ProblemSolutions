// DATE: 12/05/2023, 08:23:31
// PROBLEM NAME: Xor Palindrome
// PROBLEM URL: https://www.codechef.com/problems/XORPAL
// PROBLEM DIFFICULTY RATTING: 1339
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, count_1, count_0;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        count_1 = 0, count_0 = 0;

        for (int i=0; i<n; i++){
            if (s[i] == '1')
                count_1++;
            else
                count_0++;
        }
        
        if (count_1%2 == 0 || count_0%2 == 0 || count_1 == n || count_0 == n || count_1 == count_0)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}


