// DATE: 04/04/2023, 08:34:25
// PROBLEM NAME: Chef and Apple Trees
// PROBLEM URL: https://www.codechef.com/problems/CAPPLE
// PROBLEM DIFFICULTY RATTING: 1301
// STATUS: accepted
// TIME: 0.09
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, a;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int counter[100005] = {0}, count = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            counter[a]++;
        }
        
        for (int i=0; i<100005; i++){
            if (counter[i])
                count++;
        }

        printf("%d\n", count);
        
    }
    
	return 0;
}



