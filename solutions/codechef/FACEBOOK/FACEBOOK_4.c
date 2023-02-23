// DATE: 23/02/2023, 08:59:13
// PROBLEM NAME: Facebook
// PROBLEM URL: https://www.codechef.com/problems/FACEBOOK
// PROBLEM DIFFICULTY RATTING: 1070
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, post, comment, idx, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], b[n];
        post = 0, comment = 0, idx = 0, flag = 0;

        for (int i=0; i<n*2; i++){
            if (i < n) scanf("%d", &a[i]);
            else scanf("%d", &b[i-n]);
        }
        
        for (int i=0; i<n; i++){
            if (a[i] > post){
                post = a[i];
                idx = i+1;
                flag = 0;
            } else if (a[i] == post)
                flag = 1;
        }

        if (flag){
            for (int i=0; i<n; i++){
                if (b[i] > comment && a[i] == post){
                    comment = b[i];
                    idx = i+1;
                }
            }
        }
        
        printf("%d\n", idx);
        
    }
    
	return 0;
}



