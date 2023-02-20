// DATE: 24/11/2022, 06:44:23
// PROBLEM NAME: Chef vs Doof
// PROBLEM URL: https://www.codechef.com/problems/CLLCM
// PROBLEM DIFFICULTY RATTING: 1108
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



