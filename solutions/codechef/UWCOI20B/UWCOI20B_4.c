// DATE: 12/04/2023, 08:26:03
// PROBLEM NAME: Button Pairs
// PROBLEM URL: https://www.codechef.com/problems/UWCOI20B
// PROBLEM DIFFICULTY RATTING: 1309
// STATUS: partially accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n, count;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int arr[n];
        count = 0;

        for (int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if ((arr[i]+arr[j]) % 2 != 0)
                    count++;
            }
        }

        printf("%d\n", count);
        
    }
    
	return 0;
}



