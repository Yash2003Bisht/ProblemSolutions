// QUESTION URL: https://www.codechef.com/problems/PERMEXIS
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, flag;
    long int n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%ld", &n);
        long int a[n];
        flag = 1;

        for (int i=0; i<n; i++){
            scanf("%ld", &a[i]);
        }
        
        for (int i=0; i<n-1; i++){
            if (abs(a[i] - a[i+1]) > 1){
                flag = 0;
                break;
            }
        }
        
        if (flag) printf("YES\n");
        else printf("NO\n");

    }

	return 0;
}



