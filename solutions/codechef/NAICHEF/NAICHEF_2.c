// DATE: 17/02/2024, 06:57:55
// PROBLEM NAME: Naive Chef
// PROBLEM URL: https://www.codechef.com/problems/NAICHEF
// PROBLEM DIFFICULTY RATTING: 990
// STATUS: accepted
// TIME: 0.03
// MEMORY: 1.9M

#include <stdio.h>

int main(){
    int t, n, a, b, x, occurrence_a, occurrence_b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &a, &b);
        occurrence_a = 0, occurrence_b = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &x);

            if (x == a)
                occurrence_a++;
            if (x == b)
                occurrence_b++;

        }

        float ans = (float) occurrence_a/n * (float) occurrence_b/n;
        printf("%.10f\n", ans);

    }
    
    return 0;
}

