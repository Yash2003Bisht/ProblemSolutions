// QUESTION URL: https://www.codechef.com/problems/SRTARR
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        count = 0;
        scanf("%s", &s);
        
        
        for (int i=0; i<n-1; i++){
            if (s[i] == '1' && s[i+1] == '0') count++;
        }
        
        printf("%d\n", count);
        
    }
    
	return 0;
}


