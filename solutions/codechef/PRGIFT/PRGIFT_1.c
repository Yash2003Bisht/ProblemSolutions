// DATE: 07/08/2023, 07:39:36
// PROBLEM NAME: Chef and Gift
// PROBLEM URL: https://www.codechef.com/problems/PRGIFT
// PROBLEM DIFFICULTY RATTING: 1420
// STATUS: accepted
// TIME: 0.00
// MEMORY: 2M

#include <stdio.h>

int main(void) {
    int t, n, k, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        int arr[n];
        count = 0;
        
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        for (int i=0; i<n; i++){
            if (arr[i]%2 == 0)
                count++;
        }

        if (count < k || (count == n && k == 0))
            printf("NO\n");
        else
            printf("YES\n");
        
    }
    
	return 0;
}



