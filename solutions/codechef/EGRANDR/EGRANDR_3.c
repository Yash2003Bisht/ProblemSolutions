// DATE: 06/04/2023, 03:24:15
// PROBLEM NAME: Andrash and Stipendium
// PROBLEM URL: https://www.codechef.com/problems/EGRANDR
// PROBLEM DIFFICULTY RATTING: 1299
// STATUS: accepted
// TIME: 0.22
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, flag, sum;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n];
        flag = 0, sum = 0;

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);
            
        for (int i=0; i<n; i++){

            if (a[i] == 2){
                flag = 0;
                break;
            }
            else if (a[i] == 5)
                flag = 1;

            sum += a[i];
        }
        
        if (sum/n >= 4 && flag)
            printf("Yes\n");
        else
            printf("No\n");
            

    }
    
	return 0;
}



