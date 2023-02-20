// DATE: 04/02/2023, 05:24:22
// PROBLEM NAME: Bear and Milky Cookies
// PROBLEM URL: https://www.codechef.com/problems/COOMILK
// PROBLEM DIFFICULTY RATTING: 1244
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

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

            if (flag != -1){
                if (!strcmp(ate, "cookie") && !flag) flag = 1;
                else if (!strcmp(ate, "milk")) flag = 0;
                else flag = -1;
            }

        }

        if (!flag) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



