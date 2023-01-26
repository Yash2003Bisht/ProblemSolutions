// QUESTION URL: https://www.codechef.com/problems/HOWMANYMAX
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n];
        count = 1;
        
        scanf("%s", &s);

        for(int i=1; s[i]!='\0'; i++){
            if (s[i] == '0' && s[i-1] == '1')
                count++;
        }
        
        printf("%d\n", count);
        
    }
	return 0;
}



