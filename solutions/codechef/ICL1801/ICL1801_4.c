// DATE: 21/03/2023, 08:00:32
// PROBLEM NAME: Matrix Game
// PROBLEM URL: https://www.codechef.com/problems/ICL1801
// PROBLEM DIFFICULTY RATTING: 1279
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int compare (const void* a, const void* b){
  return ( *(int*)b - *( int*)a );
}

int main(void) {
    int t, n, m, size, sum1, sum2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        size = n*m, sum1 = 0, sum2 = 0;
        int arr[size];
        
        for (int i=0; i<size; i++)
            scanf("%d", &arr[i]);
        
        qsort(arr, size, sizeof(int), compare);

        for (int i=0; i<size; i++){
            if (i%2 == 0)
                sum1 += arr[i];
            else
                sum2 += arr[i];
        }

        if (sum1 > sum2)
            printf("Cyborg\n");
        else if (sum2 < sum1)
            printf("Geno\n");
        else
            printf("Draw\n");

    }
    
	return 0;
}



