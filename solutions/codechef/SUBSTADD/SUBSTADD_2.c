// DATE: 28/02/2023, 08:11:47
// PROBLEM NAME: Chef and Subset Additions
// PROBLEM URL: https://www.codechef.com/problems/SUBSTADD
// PROBLEM DIFFICULTY RATTING: 1263
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, x, y, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &x, &y);
        int a[n], b[n];
        count = 0;
        
        for (int i=0; i<n*2; i++){
            if (i < n) scanf("%d", &a[i]);
            else scanf("%d", &b[i-n]);
        }
        
        for (int i=0; i<n; i++){
            if (a[i] + x == b[i] || a[i] + y == b[i]){
                count++;
            }
        }
        
        if (count == n) printf("Yes\n");
        else printf("No\n");
        
    }
    
	return 0;
}



