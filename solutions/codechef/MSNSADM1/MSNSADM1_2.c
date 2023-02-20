// DATE: 15/09/2022, 07:56:04
// PROBLEM NAME: Football
// PROBLEM URL: https://www.codechef.com/problems/MSNSADM1
// PROBLEM DIFFICULTY RATTING: 1102
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,i;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int a[n];
        int b,r=0;
        for(i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        scanf("\n");
        for(i=0; i<n; i++){
            scanf("%d", &b);
            int s = a[i]*20 - b*10;
            if (s>r){
                r = s;
            }
        }
        
        printf("%d\n", r);
        
    }
	return 0;
}



