// DATE: 12/02/2024, 06:46:11
// PROBLEM NAME: Running Comparison
// PROBLEM URL: https://www.codechef.com/problems/RUNCOMPARE
// PROBLEM DIFFICULTY RATTING: 899
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.6M

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, diff, count = 0;
        scanf("%d", &n);
        int a[n], b[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

        for (int i=0; i<n; i++){
            diff = abs(a[i] - b[i]);
            if (diff <= a[i] && diff <= b[i])
                count++;
        }

        printf("%d\n", count);

    }


    return 0;
}


