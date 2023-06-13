// DATE: 13/06/2023, 07:42:52
// PROBLEM NAME: Even Equal Odd
// PROBLEM URL: https://www.codechef.com/problems/EVEQODD
// PROBLEM DIFFICULTY RATTING: 1363
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    int t, n, even, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n*2], size = n*2;
        even = 0;

        for (int i=0; i<size; i++){
            scanf("%d", &arr[i]);
            if (arr[i]%2 == 0)
                even++;
        }
        
        if (even > n){
            int counter[even], j = 0;
            
            for (int i=0; i<size; i++){
                count = 0;
                if (arr[i]%2 == 0){
                    while(arr[i]%2 == 0){
                        arr[i] /= 2;
                        count++;
                    }
                    counter[j] = count;
                    j++;
                }
            }
            
            qsort(counter, even, sizeof(int), cmpfunc);
            count = 0;

            for (int i=0; i<even - n; i++)
                count += counter[i];

            printf("%d\n", count);

        } else
            printf("%d\n", n - even);

    }
    
    return 0;
}


