// DATE: 23/06/2023, 08:33:02
// PROBLEM NAME: Chef and Secret Ingredients
// PROBLEM URL: https://www.codechef.com/problems/CHEFING
// PROBLEM DIFFICULTY RATTING: 1376
// STATUS: accepted
// TIME: 0.19
// MEMORY: 5.4M

#include <stdio.h>
#include <string.h>

void merge(char arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(char arr[], int l, int r){
    if (l < r) {
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

int main(void) {
    int t, n, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char ingredients[201] = {'\0'};
        int counter[26] = {0};
        total = 0;

        for (int i=0; i<n; i++){
            scanf("%s", ingredients);
            mergeSort(ingredients, 0, strlen(ingredients) - 1);

            for (int j=0; j < strlen(ingredients); j++){
                if (ingredients[j] != ingredients[j+1])
                    counter[ingredients[j] - 97]++;
            }

        }
        
        for (int i=0; i<26; i++){
            if (counter[i] >= n)
                total++;
        }
        
        printf("%d\n", total);

    }
    
	return 0;
}


