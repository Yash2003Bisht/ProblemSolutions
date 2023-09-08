// DATE: 08/09/2023, 08:50:02
// PROBLEM NAME: Prefix Ones
// PROBLEM URL: https://www.codechef.com/problems/PREFONES
// PROBLEM DIFFICULTY RATTING: 1455
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, n, i, count, temp, start;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        i = 0, temp = 0, count = 0, start = 0;

        while (s[i] != '0' && i<n)
            start++, i++;

        for (i=i+1; i<n; i++){
            if (s[i] == '1')
                temp++;
            else
                count = max(count, temp), temp = 0;
        }

        count = max(count, temp);
        printf("%d\n", count + start);

    }

	return 0;
}


