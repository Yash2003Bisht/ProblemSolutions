// QUESTION URL: https://www.codechef.com/problems/COOMILK
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, n, flag, drink_milk;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        char ate[7];
        flag = 0, drink_milk = 0;
        
        for (int i=0; i<n; i++){
            scanf("%s", ate);

            if (!flag){
                if (!strcmp(ate, "cookie") && !drink_milk) drink_milk = 1;
                else if (!strcmp(ate, "milk")) drink_milk = 0;
                else flag = 1;
            }

        }

        if (!flag && !drink_milk) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



