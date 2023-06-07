// DATE: 07/06/2023, 07:15:19
// PROBLEM NAME: Watermelon
// PROBLEM URL: https://www.codechef.com/problems/WATMELON
// PROBLEM DIFFICULTY RATTING: 1365
// STATUS: partially accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, a, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        flag = 1;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);

            if (flag && (a%(i+1) != 0 || a < 0))
                flag = 0;

        }

        if (flag)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



