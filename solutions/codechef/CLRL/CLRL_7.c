// DATE: 30/09/2023, 08:23:54
// PROBLEM NAME: Chef goes Left Right Left
// PROBLEM URL: https://www.codechef.com/problems/CLRL
// PROBLEM DIFFICULTY RATTING: 1498
// STATUS: accepted
// TIME: 0.21
// MEMORY: 6.6M

#include <stdio.h>

int main(void) {
    int t, n, r, flag, j, k;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &r);
        int a[n], c1[n], c2[n];
        flag = 1, j = 0, k = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a[i]);
            c1[i] = 0, c2[i] = 0;
        }

        for (int i=0; i<n; i++){
            if (a[i] >= r){
                c1[j] = a[i];
                j++;
            } else if (a[i] < r){
                c2[k] = a[i];
                k++;
            }
        }

        for (int i=0; i<j-1; i++){
            if (c1[i+1] > c1[i]){
                flag = 0;
                break;
            }
        }
        
        if (flag){
            for (int i=0; i<k-1; i++){
                if (c2[i+1] < c2[i]){
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


