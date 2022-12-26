// QUESTION URL: https://www.codechef.com/problems/BROKPHON
// STATUS: accepted
// TIME: 0.07
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, count, previous_count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n];
        count = 0, previous_count = 0;
        
        for (int i=0; i<n; i++) scanf("%d", &a[i]);
        
        for (int i=0; i<n-1; i++){
            if (a[i] != a[i+1]){
                count += previous_count ? 1 : 2;
                previous_count = 1;
            } else previous_count = 0;
        }

        printf("%d\n", count);

    }
	return 0;
}



