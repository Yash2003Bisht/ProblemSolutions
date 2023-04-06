// DATE: 06/04/2023, 03:29:19
// PROBLEM NAME: Andrash and Stipendium
// PROBLEM URL: https://www.codechef.com/problems/EGRANDR
// PROBLEM DIFFICULTY RATTING: 1299
// STATUS: accepted
// TIME: 0.24
// MEMORY: 5.4M

#include <stdio.h>

int main(){
    int t, n, a, sum, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        sum = 0, flag = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            
            if (flag != -1){
                if (a == 2)
                    flag = -1;
                else if (a == 5)
                    flag = 1;
                sum += a;
            }
            
        }
        
        if (sum/n >= 4 && flag && flag != -1)
            printf("Yes\n");
        else
            printf("No\n");
        
    }
    
    return 0;
}


