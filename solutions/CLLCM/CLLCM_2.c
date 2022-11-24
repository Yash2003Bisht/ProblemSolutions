// QUESTION URL: https://www.codechef.com/problems/CLLCM
// STATUS: accepted
// TIME: 0.06
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], flag = 1;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a[i]);
            if (a[i]%2 == 0) flag = 0;
        }
        
        if (!flag) printf("NO\n");
        else printf("YES\n");
        
    }
    
	return 0;
}



