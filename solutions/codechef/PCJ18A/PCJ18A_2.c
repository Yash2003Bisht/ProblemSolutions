// QUESTION URL: https://www.codechef.com/problems/PCJ18A
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, x, value, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        flag = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &value);
            
            if (!flag){
                if (value >= x) flag = 1;
            }

        }

        if (flag) printf("YES\n");
        else printf("NO\n");

    }

	return 0;

}



