// DATE: 01/04/2023, 08:22:14
// PROBLEM NAME: Print Pattern
// PROBLEM URL: https://www.codechef.com/problems/PPATTERN
// PROBLEM DIFFICULTY RATTING: 1283
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, temp, counter, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        temp = 1, counter = 1, count = 2;
        int arr[n];

        for (int i=0; i<n; i++)
            arr[i] = i;

        for (int i=0; i<n; i++){

            for (int j=0; j<n; j++){
                temp += arr[j];
                printf("%d ", temp);
            }

            for (int j=0; j<n-1; j++)
                arr[j] = arr[j+1];

            arr[n-1] = n-i-1;
            counter += count;
            temp = counter - arr[0];
            count++;

            printf("\n");

        }

    }

	return 0;
}



