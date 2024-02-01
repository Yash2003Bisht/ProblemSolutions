// DATE: 01/02/2024, 08:31:57
// PROBLEM NAME: Another Good String 
// PROBLEM URL: https://www.codechef.com/problems/ADVITIYA4
// PROBLEM DIFFICULTY RATTING: 1314
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.7M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
	int t, n, q, max_count, count;
	scanf("%d", &t);

	while(t--){
	    scanf("%d%d", &n, &q);
	    char s[n+1], u, l_char;
	    max_count = 1, count = 1;

        scanf("%s\n", s);

        for (int i=1; i<n; i++){
            if (s[i-1] == s[i])
                count++;
            else
                count = 1;

            max_count = max(max_count, count);

        }

        printf("%d ", max_count);

        l_char = s[n-1];
        for (int i=0; i<q; i++){
            scanf("%c\n", &u);

            if (l_char == u)
                count++;
            else
                count = 1;

            l_char = u;
            max_count = max(max_count, count);

            printf("%d ", max_count);

        }

        printf("\n");
        

	}
	
}



