// DATE: 26/08/2023, 08:20:16
// PROBLEM NAME: Substring of a Substring
// PROBLEM URL: https://www.codechef.com/problems/SUBSTRING
// PROBLEM DIFFICULTY RATTING: 1442
// STATUS: accepted
// TIME: 0.00
// MEMORY: 2.5M

#include <stdio.h>
#include <string.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, size, count, temp;
    char s[1000001];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", s);
        size = strlen(s), count = 0, temp = 0;

        for (int i=1; i<size-1; i++){
            if (s[i] != s[0] && s[i] != s[size-1])
                temp++;
            else
                count = max(count, temp), temp = 0;
        }
        
        if (temp)
            count = max(count, temp);

        if (!count)
            printf("-1\n");
        else
            printf("%d\n", count);
        
    }
    
	return 0;
}



