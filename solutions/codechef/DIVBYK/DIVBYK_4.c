// DATE: 04/05/2023, 08:36:42
// PROBLEM NAME: Divisible by K
// PROBLEM URL: https://www.codechef.com/problems/DIVBYK
// PROBLEM DIFFICULTY RATTING: 1329
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        int arr[n], total = 1, flag = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &arr[i]);
            if (!flag && arr[i]%k == 0)
                flag = 1;
        }
        
        if (!flag){
            for (int i=0; i<n; i++){
                total = (total*arr[i])%k;
                if (!total){
                    flag = 1;
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



