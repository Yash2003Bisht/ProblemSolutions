// DATE: 23/02/2023, 09:05:53
// PROBLEM NAME: Facebook
// PROBLEM URL: https://www.codechef.com/problems/FACEBOOK
// PROBLEM DIFFICULTY RATTING: 1070
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, post, comment, idx;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], b;
        post = 0, comment = 0, idx = 0;

        for (int i=0; i<n*2; i++){
            if (i < n) scanf("%d", &a[i]);
            else {
                scanf("%d", &b);
                if (a[i-n] > post || (a[i-n] == post && b > comment)){
                    post = a[i-n];
                    comment = b;
                    idx = i-n;
                }
            }
        }

        printf("%d\n", idx+1);
        
    }
    
	return 0;
}



