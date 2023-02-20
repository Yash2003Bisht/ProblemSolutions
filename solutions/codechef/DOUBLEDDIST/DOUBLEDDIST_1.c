// DATE: 15/02/2023, 08:11:02
// PROBLEM NAME: Doubled Distances
// PROBLEM URL: https://www.codechef.com/problems/DOUBLEDDIST
// PROBLEM DIFFICULTY RATTING: 1241
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}

void merge(long long arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    long long L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0, j = 0, k = l;
    
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
 

void mergeSort(long long arr[], int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

int main(void) {
    int t, n, flag;
    scanint(&t);
    
    while(t--){
        scanf("%d", &n);
        long long a[n];
        flag = 1;;
        
        for (int i=0; i<n; i++) scanint(&a[i]);
        
        mergeSort(a, 0, n-1);
        
        for (int i=1; i<n-1; i++){
            if (a[i]-a[i-1] != 2*(a[i+1]-a[i]) && 2*(a[i]-a[i-1]) != (a[i+1]-a[i])){
                flag = 0;
                break;
            }
        }
        
        if (flag) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



