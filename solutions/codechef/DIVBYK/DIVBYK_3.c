// DATE: 04/05/2023, 08:40:41
// PROBLEM NAME: Divisible by K
// PROBLEM URL: https://www.codechef.com/problems/DIVBYK
// PROBLEM DIFFICULTY RATTING: 1329
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, flag;
    long long int k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%lld", &n, &k);
        long long int arr[n], total = 1;
        flag = 0;

        for (int i=0; i<n; i++){
            scanf("%lld", &arr[i]);
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

        
        if (flag || !total)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



