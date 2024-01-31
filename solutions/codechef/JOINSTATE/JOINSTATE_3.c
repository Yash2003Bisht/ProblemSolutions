// DATE: 31/01/2024, 03:48:21
// PROBLEM NAME: Join States
// PROBLEM URL: https://www.codechef.com/problems/JOINSTATE
// PROBLEM DIFFICULTY RATTING: 1043
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t, n, m, max_count, counter;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        int a[n];
        max_count = 0, counter = 0;

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);

        for (int i=0; i<n; i++){
            if (a[i] >= m){
                max_count++;
                counter = 0;
            } else
                counter += a[i];

            if (counter >= m){
                max_count++;
                counter = 0;
            }

        }

        printf("%d\n", max_count);

    }
    
}



