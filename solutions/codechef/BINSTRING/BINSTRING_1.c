// DATE: 28/02/2023, 07:58:07
// PROBLEM NAME: Distinct Binary Strings
// PROBLEM URL: https://www.codechef.com/problems/BINSTRING
// PROBLEM DIFFICULTY RATTING: 1262
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t, n, sep_0, sep_1;
    char *s;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        s = (char *) malloc((n+1) * sizeof(char));
        sep_0 = 0, sep_1 = 0;
        scanf("%s", s);

        for (int i=0; i<n-1; i++){
            if (s[i] != s[i+1]){
                if (s[i] == '1') sep_1++;
                else sep_0++;
            }
        }
        
        printf("%d\n", sep_0 + sep_1 + 1);

        free(s);
    }
    
	return 0;
}



