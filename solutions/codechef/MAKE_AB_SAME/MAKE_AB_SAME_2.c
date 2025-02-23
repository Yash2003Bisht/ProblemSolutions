// DATE: 31/05/2023, 08:04:46
// PROBLEM NAME: Make A-B Same
// PROBLEM URL: https://www.codechef.com/problems/MAKE_AB_SAME
// PROBLEM DIFFICULTY RATTING: 1335
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, count_0, count_1, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char a[n+1], b[n+1];
        count_0 = 0, count_1 = 0, flag = 1;

        scanf("\n");

        for (int i=0; i<n*2; i++){
            if (i < n)
                scanf("%c ", &a[i]);
            else
                scanf("%c ", &b[i-n]);
        }
        
        for (int i=0; i<n; i++){
            if (a[i] == '1')
                count_1++;
        }
        
        for (int i=0; i<n; i++){
            if (a[i] != b[i]){
                if (b[i] == '0' || (b[i] == '1' && count_1 == 0) || i == 0 || i == n-1){
                    flag = 0;
                    break;
                }
            }
        }
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



