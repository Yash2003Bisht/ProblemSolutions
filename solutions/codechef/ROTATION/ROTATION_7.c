// DATE: 31/08/2023, 09:17:52
// PROBLEM NAME: Fun with Rotation
// PROBLEM URL: https://www.codechef.com/problems/ROTATION
// PROBLEM DIFFICULTY RATTING: 1446
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 2.1M

#include <stdio.h>

void copy_array(int size, int *arr1, int *arr2){
    for (int i=0; i<size; i++)
        arr1[i] = arr2[i];
}

void rotate(char *query, int dis, int size, int *a, int *b){
    int idx, i;

    if (query[0] == 67)
        idx = size > dis ? size-dis : size-(dis%size);
    else
        idx = size > dis ? dis : dis%size;

    b[idx] = a[0];

    for (i=idx+1; i<size; i++)
        b[i] = a[i - idx];

    for (i=0; i<idx; i++)
        b[i] = a[size - idx + i];

    copy_array(size, a, b);
    
}

int main(void) {
    int n, m, d;
    char query[2];
    scanf("%d%d", &n, &m);

    int a[n], b[n];

    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    for (int i=0; i<m; i++){
        scanf("%s %d", query, &d);

        if (query[0] == 82)
            printf("%d\n", a[d-1]);
        else
            rotate(query, d, n, a, b);
        
    }

    return 0;
}


