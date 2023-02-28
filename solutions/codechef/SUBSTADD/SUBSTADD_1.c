// DATE: 28/02/2023, 08:14:01
// PROBLEM NAME: Chef and Subset Additions
// PROBLEM URL: https://www.codechef.com/problems/SUBSTADD
// PROBLEM DIFFICULTY RATTING: 1263
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, x, y, b, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &x, &y);
        int a[n];
        count = 0;
        
        for (int i=0; i<n*2; i++){
            if (i < n) scanf("%d", &a[i]);
            else {
                scanf("%d", &b);
                if (a[i-n] + x == b || a[i-n] + y == b){
                    count++;
                }
            } 
        }

        if (count == n) printf("Yes\n");
        else printf("No\n");
        
    }
    
	return 0;
}



