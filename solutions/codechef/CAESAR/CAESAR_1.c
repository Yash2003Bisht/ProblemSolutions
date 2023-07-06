// DATE: 06/07/2023, 07:40:37
// PROBLEM NAME: Caesar Cipher
// PROBLEM URL: https://www.codechef.com/problems/CAESAR
// PROBLEM DIFFICULTY RATTING: 1232
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, diff;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1], t[n+1], u[n+1];

        scanf("%s", s);
        scanf("%s", t);
        scanf("%s", u);

        diff = t[0] - s[0];
        diff = diff < 0 ? 26 + diff : diff;

        for (int i=0; i<n; i++)
            printf("%c", u[i] + diff <= 122 ? (u[i] + diff) : '`' + ((u[i] + diff) % 122));
        
        printf("\n");
        
    }
    
	return 0;
}



