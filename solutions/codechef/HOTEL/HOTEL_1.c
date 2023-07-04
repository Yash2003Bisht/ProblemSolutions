// DATE: 04/07/2023, 07:58:05
// PROBLEM NAME: Hotel Bytelandia
// PROBLEM URL: https://www.codechef.com/problems/HOTEL
// PROBLEM DIFFICULTY RATTING: 1405
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, a_d_time, guest;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int counter[1000] = {0};

        for (int i=0; i<n; i++){
            scanf("%d", &a_d_time);
            counter[a_d_time]++;
        }

        for (int i=0; i<n; i++){
            scanf("%d", &a_d_time);
            counter[a_d_time]--;
        }
        
        guest = counter[0];
        for(int i=2; i<=1000; i++){
    		counter[i] = counter[i] + counter[i-1];
    		guest = counter[i] > guest ? counter[i] : guest;
    	}
        
        printf("%d\n", guest);
        
    }
    
	return 0;
}



