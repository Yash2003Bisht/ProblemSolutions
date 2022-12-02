// QUESTION URL: https://www.codechef.com/problems/ALTSTR
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#define MIN(a,b) (a>b?b:a)

int main(void) {
    int t, n, count_1, count_2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", &s);
        count_1 = 0, count_2 = 0;
        
        for (int i=0; i<n; i++){
            if (s[i] == '1') count_1++;
            else count_2++;
        }
        
        if (count_1 == count_2) printf("%d\n", n);
        else printf("%d\n", (MIN(count_1, count_2)*2)+1);
        
        
    }
    
	return 0;
}



