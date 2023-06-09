// DATE: 09/06/2023, 07:54:03
// PROBLEM NAME: Construct String
// PROBLEM URL: https://www.codechef.com/problems/CONSTR
// PROBLEM DIFFICULTY RATTING: 1307
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, count, i;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        count = 0;

        for (i=0; i<n-1; i++){
            if (s[i] == s[i+1])
                count++;
            else{
                if (count%2 == 0)
                    printf("%c", s[i]);
                else
                    printf("%c%c", s[i], s[i]);
                count = 0;
            }
        }

        if (count && count%2 != 0)
            printf("%c%c", s[i], s[i]);
        else
            printf("%c", s[i]);

        printf("\n");

    }
    
	return 0;
}



