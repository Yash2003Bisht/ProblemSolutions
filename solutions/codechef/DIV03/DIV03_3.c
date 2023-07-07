// DATE: 07/07/2023, 08:41:35
// PROBLEM NAME: Daanish and Problems
// PROBLEM URL: https://www.codechef.com/problems/DIV03
// PROBLEM DIFFICULTY RATTING: 1388
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, i;
    long long int arr[10], k;
    scanf("%d", &t);
    
    while(t--){
        for(i=0; i<10; i++)
            scanf("%lld", &arr[i]);
        scanf("%lld", &k);
        
        for (i=9; i>=0; i--){
            if (k >= arr[i])
                k -= arr[i];
            else
                break;
        }
        
        printf("%d\n", i+1);
        
    }
    
	return 0;
}



