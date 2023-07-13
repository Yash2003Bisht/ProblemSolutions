// DATE: 13/07/2023, 08:08:31
// PROBLEM NAME: Airport Management
// PROBLEM URL: https://www.codechef.com/problems/AIRM
// PROBLEM DIFFICULTY RATTING: 1201
// STATUS: accepted
// TIME: 0.14
// MEMORY: 5.2M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, n, plane_time, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count = 0;
        int counter[1440] = {0};

        for (int i=0; i<n*2; i++){
            scanf("%d", &plane_time);
            counter[plane_time]++;
        }

        for (int i=0; i<1440; i++)
            count = max(count, counter[i]);

        printf("%d\n", count);
        
    }
    
	return 0;
}



