// QUESTION URL: https://www.codechef.com/problems/ARRAYBREAK
// STATUS: accepted

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



