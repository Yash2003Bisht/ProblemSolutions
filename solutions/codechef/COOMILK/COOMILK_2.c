// QUESTION URL: https://www.codechef.com/problems/COOMILK
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, n, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        char ate[7];
        flag = 0;
        
        for (int i=0; i<n; i++){
            scanf("%s", ate);

            if (!strcmp(ate, "cookie") && !flag) flag = 1;
            else if (!strcmp(ate, "milk") && flag != -1) flag = 0;
            else flag = -1;

        }

        if (!flag) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



