// DATE: 15/03/2023, 07:49:38
// PROBLEM NAME: Three Powers of Two
// PROBLEM URL: https://www.codechef.com/problems/THREEPOW2
// PROBLEM DIFFICULTY RATTING: 1253
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, n, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        count = 0;
        
        scanf("%s", s);
        
        for (int i=0; s[i] != '\0'; i++)
            if (s[i] == '1') count++;

        if (count <= 3 && (strcmp(s, "1") && strcmp(s, "10"))) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



