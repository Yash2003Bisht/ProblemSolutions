// QUESTION URL: https://www.codechef.com/problems/MSNSADM1

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



