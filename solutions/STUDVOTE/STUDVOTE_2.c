// QUESTION URL: https://www.codechef.com/problems/STUDVOTE

#include <stdio.h>

int main(void) {
    int t,n,k;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&k);
        int a[n], b[n];
        for (int i=0; i<n; i++){
            scanf("%d", &a[i]);
            b[i] = 0;
        }
        
        for (int i=0; i<n; i++){
            if (a[i]-1 != i && b[a[i]-1] >= 0){
                b[a[i]-1] += 1;
            } else{
                b[a[i]-1] = -1;
            }
        }
        
        int total = 0;
        
        for (int i=0; i<n; i++){
            if (b[i] >= k){
                total++;
            }
        }
        
        printf("%d\n", total);
        
    }
	return 0;
}



