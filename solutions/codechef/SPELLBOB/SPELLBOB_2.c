// DATE: 24/03/2023, 07:50:05
// PROBLEM NAME: Spell Bob
// PROBLEM URL: https://www.codechef.com/problems/SPELLBOB
// PROBLEM DIFFICULTY RATTING: 1283
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t;
    char s1[4], s2[4];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", s1);
        scanf("%s", s2);

        if (((s1[0] == 'b' || s2[0] == 'b') && (s1[1] == 'o' || s2[1] == 'o') && (s1[2] == 'b' || s2[2] == 'b')) || \
            ((s1[0] == 'b' || s2[0] == 'b') && (s1[1] == 'b' || s2[1] == 'b') && (s1[2] == 'o' || s2[2] == 'o')) || \
            ((s1[0] == 'o' || s2[0] == 'o') && (s1[1] == 'b' || s2[1] == 'b') && (s1[2] == 'b' || s2[2] == 'b')))
            printf("yes\n");
        else
            printf("no\n");

        
    }

    return 0;
}



