// DATE: 19/01/2023, 08:49:39
// PROBLEM NAME: Chef and Mean  
// PROBLEM URL: https://www.codechef.com/problems/CHFM
// PROBLEM DIFFICULTY RATTING: 1229
// STATUS: accepted
// TIME: 0.10
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], flag = 0;
        long long int total = 0;
        double mean;
        
        for (int i=0; i<n; i++){
            scanf("%d\n", &a[i]);
            total += a[i];
        }
        
        mean = (double) total/n;
        
        for (int i=0; i<n; i++){
            if (mean == a[i]){
                printf("%d\n", i+1);
                flag = 1;
                break;
            }
        }
        
        if (!flag) printf("Impossible\n");
        
        
        
    }
    
	return 0;
}



