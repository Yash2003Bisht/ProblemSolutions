// DATE: 06/07/2023, 08:35:07
// PROBLEM NAME: Schrodinger Smiley
// PROBLEM URL: https://www.codechef.com/problems/SMILEY
// PROBLEM DIFFICULTY RATTING: 1371
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, smile_count, flag, j;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        smile_count = 0, flag = 0, j = 0;
        char s[n+1];
        scanf("%s", s);

        for (int i=0; i < n; i++){
            if (s[i] == ':' && !flag)
                flag = 1;
            else if (s[i] == ')' && flag)
                j = 1;
            else if (s[i] == '(')
                flag = 0, j = 0;
            else if (s[i] == ':' && flag && j)
                smile_count++, j = 0;
        }

        printf("%d\n", smile_count);

    }
    
	return 0;
}



