// DATE: 29/07/2023, 08:57:28
// PROBLEM NAME: String Game 
// PROBLEM URL: https://www.codechef.com/problems/STRAME
// PROBLEM DIFFICULTY RATTING: 1413
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, n, count_1, count_0;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        count_1 = 0, count_0 = 0;
        
        for (int i=0; i<n; i++){
            if (s[i] == '1')
                count_1++;
            else
                count_0++;
        }
        
        if (min(count_1, count_0)%2 == 0)
            printf("Ramos\n");
        else
            printf("Zlatan\n");
        
    }
    
	return 0;
}


