// DATE: 27/03/2023, 08:11:47
// PROBLEM NAME: Reversal Sorting
// PROBLEM URL: https://www.codechef.com/problems/REVSORT
// PROBLEM DIFFICULTY RATTING: 1288
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, flag, i;
    long long int x, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%lld", &n, &x);
        long long int a[n];
        flag = 1;
        
        for (i=0; i < n; i++)
            scanf("%lld", &a[i]);

        i = 0;
        while(i < n-1){
            if (a[i] > a[i+1]){
                if (a[i] + a[i+1] <= x){
                    temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
                } else {
                    flag = 0;
                    break;
                }
            }
            
            i++;
            
        }

        if (flag)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



