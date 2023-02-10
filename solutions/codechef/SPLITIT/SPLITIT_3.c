// QUESTION URL: https://www.codechef.com/problems/SPLITIT
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, n, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1], last_s;
        scanf("%s", s);
        last_s = s[n-1];
        flag = 0;
        
        for (int i=0; i<n-1; i++){
            if (last_s == s[i]){
                flag = 1;
                break;
            }
        }
        
        if (flag) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



