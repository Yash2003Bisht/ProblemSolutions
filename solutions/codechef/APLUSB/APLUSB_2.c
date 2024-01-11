// DATE: 11/01/2024, 08:41:21
// PROBLEM NAME: A PLUS B Remastered
// PROBLEM URL: https://www.codechef.com/problems/APLUSB
// PROBLEM DIFFICULTY RATTING: 1284
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}

int cmpreversefunc(const void * a, const void * b){
   return ( *(int*)b - *(int*)a );
}

int main(void) {
    int t, n, num, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], b[n];
        num = n*2, flag = 1;

        for (int i=0; i<num; i++){
            if (i < n)
                scanf("%d", &a[i]);
            else
                scanf("%d", &b[i-n]);
        }

        qsort(a, n, sizeof(int), cmpfunc);
        qsort(b, n, sizeof(int), cmpreversefunc);

        num = a[0] + b[0];

        for (int i=1; i<n; i++){
            if (a[i] + b[i] != num){
                flag = 0;
                break;
            }
        }

        if (flag){
            for (int i=0; i<n; i++)
                printf("%d ", a[i]);

            printf("\n");

            for (int i=0; i<n; i++)
                printf("%d ", b[i]);

            printf("\n");

        } else {
            printf("-1\n");
        }

    }
    
}



