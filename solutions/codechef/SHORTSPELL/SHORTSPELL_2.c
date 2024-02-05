// DATE: 05/02/2024, 09:46:20
// PROBLEM NAME: Spell Shortening
// PROBLEM URL: https://www.codechef.com/problems/SHORTSPELL
// PROBLEM DIFFICULTY RATTING: 1192
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n, remove_idx;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);

        remove_idx = -1;

        for (int i=1; i<n; i++){
            if (s[i-1] > s[i]){
                remove_idx = i-1;
                break;
            }
        }

        if (remove_idx != -1){
            for (int i=0; i<remove_idx; i++)
                printf("%c", s[i]);
            remove_idx++;
            for (int i=remove_idx; i<n; i++)
                printf("%c", s[i]);
        } else {
            n--;
            for (int i=0; i<n; i++)
                printf("%c", s[i]);
        }

        printf("\n");

    }
    
}



