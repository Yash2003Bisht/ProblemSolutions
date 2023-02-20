// DATE: 30/09/2022, 06:18:52
// PROBLEM NAME: Break the elements
// PROBLEM URL: https://www.codechef.com/problems/ARRAYBREAK
// PROBLEM DIFFICULTY RATTING: 1191
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,a,even;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        even=0;
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (a%2 == 0){
                even++;
            }
        }
        
        if (even == n){
            printf("0\n");
        } else{
            printf("%d\n", even);
        }
            
        
    }
	return 0;
}



