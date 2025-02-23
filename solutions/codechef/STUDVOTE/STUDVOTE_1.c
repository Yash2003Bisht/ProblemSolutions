// DATE: 20/09/2022, 08:08:41
// PROBLEM NAME: Drumpf for President!
// PROBLEM URL: https://www.codechef.com/problems/STUDVOTE
// PROBLEM DIFFICULTY RATTING: 1205
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,k,i;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&k);
        int a[n], b[n], total = 0;
        
        for (i=0; i<n; i++){
            scanf("%d", &a[i]);
            b[i] = 0;
        }
        
        for (i=0; i<n; i++){
            if (a[i]-1 != i && b[a[i]-1] >= 0){
                b[a[i]-1] += 1;
            } else{
                b[a[i]-1] = -1;
            }
        }
        
        
        for (i=0; i<n; i++){
            if (b[i] >= k){
                total++;
            }
        }
        
        printf("%d\n", total);
        
    }
	return 0;
}



