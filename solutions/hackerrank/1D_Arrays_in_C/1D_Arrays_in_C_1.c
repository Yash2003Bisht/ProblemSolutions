// QUESTION URL: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem
// STATUS: Accepted

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, total = 0;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);
    
    for (int i=0; i<n; i++){
        total += arr[i];
    }
    
    printf("%d", total);
    
    return 0;
}
