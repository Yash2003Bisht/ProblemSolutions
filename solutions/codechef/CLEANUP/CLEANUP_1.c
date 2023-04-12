// DATE: 12/04/2023, 08:15:48
// PROBLEM NAME: Cleaning Up
// PROBLEM URL: https://www.codechef.com/problems/CLEANUP
// PROBLEM DIFFICULTY RATTING: 1309
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, m, flag, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &m, &n);
        int arr[n], ans[m-n];
        temp = 0;
        
        for (int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        for (int i=1; i<=m; i++){
            flag = 1;
            for (int j=0; j<n; j++){
                if (i == arr[j]){
                    flag = 0;
                    break;
                }
            }
            
            if (flag){
                ans[temp] = i;
                temp++;
            }

        }

        flag = 1;
        for (int i=0; i<m-n; i++){
            if (i%2 == 0){
                flag = 0;
                printf("%d ", ans[i]);
            }
        }

        if (flag)
            printf("-1\n");
        else
            printf("\n");

        flag = 1;
        for (int i=0; i<m-n; i++){
            if (i%2 != 0){
                flag = 0;
                printf("%d ", ans[i]);
            }
        }

        if (flag)
            printf("-1\n");
        else
            printf("\n");

        
    }
    
	return 0;
}



