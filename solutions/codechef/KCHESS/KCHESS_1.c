// DATE: 07/08/2023, 08:55:40
// PROBLEM NAME: Knight Chess
// PROBLEM URL: https://www.codechef.com/problems/KCHESS
// PROBLEM DIFFICULTY RATTING: 1420
// STATUS: accepted
// TIME: 0.01
// MEMORY: 2M

#include <stdio.h>

int main(void) {
    int t, n, a, b, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int knight_moves_x[n], knight_moves_y[n];
        flag = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d%d", &a, &b);
            knight_moves_x[i] = a;
            knight_moves_y[i] = b;
        }
        
        scanf("%d%d", &a, &b);
        
        for (int i=0; i<n; i++){
            if (a == knight_moves_x[i] || b == knight_moves_y[i]){
                flag = 1;
                break;
            }
        }
        
        if (!flag)
            printf("NO\n");
        else
            printf("YES\n");
        
    }
    
	return 0;
}



